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
  struct WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x19

  v4 = route;
  if ( (byte_4A068E3 & 1) == 0 )
  {
    route = (WarBoardAIRoute_RouteData_o *)sub_1B686D4(&WarBoardAIManager_TypeInfo, targetData);
    byte_4A068E3 = 1;
  }
  if ( !targetData )
    return 0;
  if ( !v4 )
    sub_1B68930(route, targetData);
  actionPiece = v4->fields.actionPiece;
  if ( !actionPiece || targetData->fields.targetPiece != actionPiece )
    return 0;
  basePiece = v4->fields.basePiece;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  return WarBoardAIManager__IsAllyPiece(basePiece, actionPiece, 0LL);
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
      sub_1B68930(targetData, value);
    LOBYTE(targetData) = (signed int)(baseRoute->max_length - 1) <= value;
  }
  return (char)targetData;
}