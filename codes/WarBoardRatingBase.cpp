void WarBoardRatingBase___ctor(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardRatingBase__DebugLog(
        WarBoardRatingBase_o *this,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        const MethodInfo *method)
{
  ;
}


int32_t WarBoardRatingBase__GetId(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_21FFECC(this, method);
  return ratingBase->fields.id;
}


float WarBoardRatingBase__GetRatingBase(
        WarBoardRatingBase_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  return 0.0;
}


int32_t WarBoardRatingBase__GetViewpoint(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_21FFECC(this, method);
  return ratingBase->fields.viewPoint;
}


void WarBoardRatingBase__Init(
        WarBoardRatingBase_o *this,
        WarBoardRatingBaseEntity_o *ratingBase,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.ratingBase = ratingBase;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)ratingBase,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t WarBoardRatingBase__get_adjustmentValueA1(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_21FFECC(this, method);
  return ratingBase->fields.adjustmentValueA1;
}


int32_t WarBoardRatingBase__get_adjustmentValueB(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_21FFECC(this, method);
  return ratingBase->fields.adjustmentValueB;
}