void __fastcall WarBoardRatingBase___ctor(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardRatingBase__DebugLog(
        WarBoardRatingBase_o *this,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall WarBoardRatingBase__GetId(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_B170D4();
  return ratingBase->fields.id;
}


float __fastcall WarBoardRatingBase__GetRatingBase(
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


int32_t __fastcall WarBoardRatingBase__GetViewpoint(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_B170D4();
  return ratingBase->fields.viewPoint;
}


void __fastcall WarBoardRatingBase__Init(
        WarBoardRatingBase_o *this,
        WarBoardRatingBaseEntity_o *ratingBase,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.ratingBase = ratingBase;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ratingBase,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t __fastcall WarBoardRatingBase__get_adjustmentValueA1(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_B170D4();
  return ratingBase->fields.adjustmentValueA1;
}


int32_t __fastcall WarBoardRatingBase__get_adjustmentValueB(WarBoardRatingBase_o *this, const MethodInfo *method)
{
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  ratingBase = this->fields.ratingBase;
  if ( !ratingBase )
    sub_B170D4();
  return ratingBase->fields.adjustmentValueB;
}