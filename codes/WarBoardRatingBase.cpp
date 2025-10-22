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
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, method);
  return ratingBase->fields.viewPoint;
}


void WarBoardRatingBase__Init(
        WarBoardRatingBase_o *this,
        WarBoardRatingBaseEntity_o *ratingBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.ratingBase = ratingBase;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)ratingBase, (int32_t)method, v3);
}


int32_t WarBoardRatingBase__get_adjustmentValueA1(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_1C3E7C0(this, method);
  return ratingBase->fields.adjustmentValueA1;
}


int32_t WarBoardRatingBase__get_adjustmentValueB(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_1C3E7C0(this, method);
  return ratingBase->fields.adjustmentValueB;
}