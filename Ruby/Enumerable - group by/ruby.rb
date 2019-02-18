def group_by_marks(marks, pass_marks)
    marks.group_by do |key, value|
        value < pass_marks ? "Failed" : "Passed"
    end
end
