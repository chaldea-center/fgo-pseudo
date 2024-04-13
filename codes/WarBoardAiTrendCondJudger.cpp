void __fastcall WarBoardAiTrendCondJudger___ctor(WarBoardAiTrendCondJudger_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAiTrendCondJudger__IsReplaceTarget(
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute_RouteData_o *v5; // x19
  const MethodInfo *v6; // x2
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *basePiece; // x19

  v5 = route;
  if ( (byte_42E6938 & 1) == 0 )
  {
    route = (WarBoardAIRoute_RouteData_o *)sub_B5D5C4(
                                             &WarBoardAIManager_TypeInfo,
                                             (_DWORD)targetData,
                                             (_DWORD)method,
                                             v3);
    byte_42E6938 = 1;
  }
  if ( !targetData )
    return 0;
  if ( !v5 )
    sub_B5D69C(route, targetData);
  if ( !WarBoardAIRoute_RouteData__HasActionPiece(v5, 0LL) )
    return 0;
  targetPiece = targetData->fields.targetPiece;
  if ( targetPiece != v5->fields.actionPiece )
    return 0;
  basePiece = v5->fields.basePiece;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  return WarBoardAIManager__IsAllyPiece(basePiece, targetPiece, v6);
}


bool __fastcall WarBoardAiTrendCondJudger__TargetRangeUnder(
        WarBoardAIRoute_TargetData_o *targetData,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Int32_array *baseRoute; // x8

  if ( targetData )
  {
    baseRoute = targetData->fields.baseRoute;
    if ( !baseRoute )
      sub_B5D69C(targetData, value);
    LOBYTE(targetData) = (signed int)(baseRoute->max_length - 1) <= value;
  }
  return (char)targetData;
}