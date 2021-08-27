var GoogleFormsTool = {
    getScore(){
        let correct = document.getElementsByClassName('freebirdFormviewerViewItemsItemCorrect'),
            incorrect = document.getElementsByClassName('freebirdFormviewerViewItemsItemIncorrect'),
            total = correct.length + incorrect.length;
        return {
            correct: correct.length,
            incorrect: incorrect.length,
            total: total,
            score: Number(((correct.length / total) * 100).toFixed(2))
        };
    },
    displayScore(){
        let score = GoogleFormsTool.getScore();
        document.querySelectorAll('[role="listitem"]')[0].innerHTML += `<div class="freebirdFormviewerViewItemsItemItem freebirdFormviewerViewItemsTextTextItem">
        <h1 style="margin-top:0%">Score: ${score.score.toFixed(0)}</h1>
        Correct: <b>${score.correct}</b><br>
        Incorrect: <b>${score.incorrect}</b><br>
        Question Count: <b>${score.total}</b><br>
        Score: <b>${score.score}</b>
        </div>`;
    },
    run(){
        if(window.location.pathname.split('/').pop() === 'viewscore'){
            setTimeout(() => {
                this.displayScore();
            }, 1000);
        }
    }
}
GoogleFormsTool.run();