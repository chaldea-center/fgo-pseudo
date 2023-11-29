void __fastcall ClassBoardReleaseRequestData___ctor(
        ClassBoardReleaseRequestData_o this,
        int32_t classSquareId,
        int32_t squareId,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.ClassBoardId = classSquareId;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = squareId;
}