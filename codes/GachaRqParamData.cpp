void __fastcall GachaRqParamData___ctor(GachaRqParamData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GachaRqParamData___ctor_27410472(
        GachaRqParamData_o *this,
        int32_t gachaType,
        int32_t gachaId,
        int32_t warId,
        int32_t gachaTime,
        int32_t gachaResourceNum,
        int32_t shopIdIdx,
        int32_t ticketItemId,
        int32_t gachaSubId,
        System_Int32_array *storyAdjustIds,
        bool isAppendSummon,
        SelectBonus_array *selectBonusList,
        const MethodInfo *method)
{
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.gachaType = gachaType;
  this->fields.gachaId = gachaId;
  this->fields.warId = warId;
  this->fields.gachaTime = gachaTime;
  this->fields.shopIdIdx = shopIdIdx;
  this->fields.gachaSubId = gachaSubId;
  this->fields.gachaResourceNum = gachaResourceNum;
  this->fields.ticketItemId = ticketItemId;
  this->fields.storyAdjustIds = storyAdjustIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.storyAdjustIds,
    (System_Int32_array **)storyAdjustIds,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.selectBonusList = selectBonusList;
  this->fields.isAppendSummon = isAppendSummon;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectBonusList,
    (System_Int32_array **)selectBonusList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}