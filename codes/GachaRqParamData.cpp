void GachaRqParamData___ctor(GachaRqParamData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GachaRqParamData___ctor_35969412(
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
  GachaRqParamData_o *v19; // x26
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  v19 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v19->fields.gachaType = gachaType;
  v19->fields.gachaId = gachaId;
  v19->fields.warId = warId;
  v19->fields.gachaTime = gachaTime;
  v19->fields.gachaResourceNum = gachaResourceNum;
  v19->fields.ticketItemId = ticketItemId;
  v19->fields.shopIdIdx = shopIdIdx;
  v19->fields.gachaSubId = gachaSubId;
  v19->fields.storyAdjustIds = storyAdjustIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v19->fields.storyAdjustIds,
    (int32_t)storyAdjustIds,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v19->fields.selectBonusList = selectBonusList;
  v19 = (GachaRqParamData_o *)((char *)v19 + 64);
  LOBYTE(v19[-1].fields.selectBonusList) = isAppendSummon;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v19, (int32_t)selectBonusList, v26, v27, v28, v29, v30, v31);
}