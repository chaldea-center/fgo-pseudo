void __fastcall QuestBoardListViewMultiSecondBattleInformation___ctor(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  TweenAlpha___ctor((TweenAlpha_o *)this, 0LL);
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Init(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        System_Collections_Generic_List_UISprite__o *objList,
        const MethodInfo *method)
{
  QuestBoardListViewMultiSecondBattleInformation_o *v4; // x19
  __int64 v5; // x1
  System_Object_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v15; // w21
  const MethodInfo *v16; // x1

  v4 = this;
  if ( (byte_4BFA5B1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UISprite__ToArray__, objList);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_1C2E12C(
                                                                 &QuestBoardListViewMultiSecondBattleInformation_TypeInfo,
                                                                 v5);
    byte_4BFA5B1 = 1;
  }
  if ( !objList )
    goto LABEL_12;
  v6 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)objList,
         (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.spList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_12;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2E390(this, objList);
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v15];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_1C2E388(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v16);
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Reset(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestBoardListViewMultiSecondBattleInformation_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  this->fields.spList = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 176);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UISprite_array *v16; // x8
  __int64 v17; // x9
  struct UISprite_o *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int v20; // w20

  if ( (byte_4BFA5B2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Count_UISprite___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4BFA5B2 = 1;
  }
  p_oldSp = &this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(oldSp, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)*p_oldSp;
    if ( !*p_oldSp )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  spList = this->fields.spList;
  if ( !spList )
    goto LABEL_18;
  currentIndex = this->fields.currentIndex;
  if ( (unsigned int)currentIndex >= spList->max_length )
    goto LABEL_19;
  gameObject = (UnityEngine_Component_o *)spList->m_Items[currentIndex];
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (v16 = this->fields.spList) == 0LL) )
  {
LABEL_18:
    sub_1C2E388(gameObject, v7);
  }
  v17 = this->fields.currentIndex;
  if ( (unsigned int)v17 >= v16->max_length )
LABEL_19:
    sub_1C2E390(gameObject, v7);
  v18 = v16->m_Items[v17];
  this->fields.oldSp = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.oldSp, (int64_t)v18, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v20 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v20;
  if ( v20 >= System_Linq_Enumerable__Count_object_(
                v19,
                (const MethodInfo_2FECD94 *)Method_System_Linq_Enumerable_Count_UISprite___) )
    this->fields.currentIndex = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Update(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  float v3; // s9
  float v4; // s8
  float timeScale; // s0
  const MethodInfo *v6; // x1
  float v7; // s9
  int oldForward; // w8
  int v9; // w9

  if ( (byte_4BFA5B0 & 1) == 0 )
  {
    sub_1C2E12C(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, method);
    byte_4BFA5B0 = 1;
  }
  v3 = (float)(UnityEngine_Time__get_unscaledTime(0LL)
             - QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime)
     / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v4 = fmodf(v3, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v4 = fmodf(v3, 1.0) * timeScale;
  }
  this->fields.oldForward = this->fields.forward;
  v7 = fmodf(v3, 2.0);
  if ( !byte_4BF7D90 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v6);
    byte_4BF7D90 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  oldForward = this->fields.oldForward;
  v9 = (floorf(v7) != INFINITY) & (vcvtms_s32_f32(v7) == 0);
  this->fields.forward = v9;
  if ( oldForward && oldForward != v9 )
    QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v6);
  if ( this->fields.style == 2 && !this->fields.forward )
    v4 = 1.0 - v4;
  UITweener__set_tweenFactor((UITweener_o *)this, v4, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}