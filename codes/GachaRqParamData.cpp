void GachaRqParamData___ctor(GachaRqParamData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GachaRqParamData___ctor_42137320(
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.gachaType = gachaType;
  this->fields.gachaId = gachaId;
  this->fields.warId = warId;
  this->fields.gachaTime = gachaTime;
  this->fields.gachaResourceNum = gachaResourceNum;
  this->fields.ticketItemId = ticketItemId;
  this->fields.shopIdIdx = shopIdIdx;
  this->fields.gachaSubId = gachaSubId;
  this->fields.storyAdjustIds = storyAdjustIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.storyAdjustIds,
    (int32_t)storyAdjustIds,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.selectBonusList = selectBonusList;
  this->fields.isAppendSummon = isAppendSummon;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectBonusList,
    (int32_t)selectBonusList,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}