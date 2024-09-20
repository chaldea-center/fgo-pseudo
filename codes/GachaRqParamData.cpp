void __fastcall GachaRqParamData___ctor(GachaRqParamData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GachaRqParamData___ctor_33029532(
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
  int32_t v22; // w2
  int32_t v23; // w3

  v19 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v19->fields.gachaType = gachaType;
  v19->fields.gachaId = gachaId;
  v19->fields.warId = warId;
  v19->fields.gachaTime = gachaTime;
  v19->fields.gachaResourceNum = gachaResourceNum;
  v19->fields.ticketItemId = ticketItemId;
  v19->fields.shopIdIdx = shopIdIdx;
  v19->fields.gachaSubId = gachaSubId;
  v19->fields.storyAdjustIds = storyAdjustIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.storyAdjustIds, (int32_t)storyAdjustIds, v20, v21);
  v19->fields.selectBonusList = selectBonusList;
  v19 = (GachaRqParamData_o *)((char *)v19 + 64);
  LOBYTE(v19[-1].fields.selectBonusList) = isAppendSummon;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v19, (int32_t)selectBonusList, v22, v23);
}