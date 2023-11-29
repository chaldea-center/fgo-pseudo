void __fastcall WarBoardAiTrendCondJudger___ctor(WarBoardAiTrendCondJudger_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAiTrendCondJudger__IsReplaceTarget(
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  struct WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *basePiece; // x19

  if ( (byte_40F8C30 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager_TypeInfo, targetData);
    byte_40F8C30 = 1;
  }
  if ( !targetData )
    return 0;
  if ( !route )
    sub_B170D4();
  if ( !WarBoardAIRoute_RouteData__HasActionPiece(route, 0LL) )
    return 0;
  targetPiece = targetData->fields.targetPiece;
  if ( targetPiece != route->fields.actionPiece )
    return 0;
  basePiece = route->fields.basePiece;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  return WarBoardAIManager__IsAllyPiece(basePiece, targetPiece, v5);
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
      sub_B170D4();
    LOBYTE(targetData) = (signed int)(baseRoute->max_length - 1) <= value;
  }
  return (char)targetData;
}