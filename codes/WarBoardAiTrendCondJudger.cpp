void __fastcall WarBoardAiTrendCondJudger___ctor(WarBoardAiTrendCondJudger_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAiTrendCondJudger__IsReplaceTarget(
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v4; // x19
  const MethodInfo *v5; // x2
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *basePiece; // x19

  v4 = route;
  if ( (byte_41867C2 & 1) == 0 )
  {
    route = (WarBoardAIRoute_RouteData_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, targetData);
    byte_41867C2 = 1;
  }
  if ( !targetData )
    return 0;
  if ( !v4 )
    sub_B2C434(route, targetData);
  if ( !WarBoardAIRoute_RouteData__HasActionPiece(v4, 0LL) )
    return 0;
  targetPiece = targetData->fields.targetPiece;
  if ( targetPiece != v4->fields.actionPiece )
    return 0;
  basePiece = v4->fields.basePiece;
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
      sub_B2C434(targetData, value);
    LOBYTE(targetData) = (signed int)(baseRoute->max_length - 1) <= value;
  }
  return (char)targetData;
}