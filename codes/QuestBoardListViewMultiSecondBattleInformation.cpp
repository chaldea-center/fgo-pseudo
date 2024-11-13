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
  __int64 v6; // x2
  System_Object_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v16; // w21
  const MethodInfo *v17; // x1

  v4 = this;
  if ( (byte_4B130F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__ToArray__, objList, method);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_1BCA7E0(
                                                                 &QuestBoardListViewMultiSecondBattleInformation_TypeInfo,
                                                                 v5,
                                                                 v6);
    byte_4B130F0 = 1;
  }
  if ( !objList )
    goto LABEL_12;
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)objList,
         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.spList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_12;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BCAA44(this, objList);
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v16];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v17);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 176);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UISprite_array *v18; // x8
  __int64 v19; // x9
  struct UISprite_o *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int v22; // w20

  if ( (byte_4B130F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UISprite___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B130F1 = 1;
  }
  p_oldSp = &this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        (v18 = this->fields.spList) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(gameObject, v9);
  }
  v19 = this->fields.currentIndex;
  if ( (unsigned int)v19 >= v18->max_length )
LABEL_19:
    sub_1BCAA44(gameObject, v9);
  v20 = v18->m_Items[v19];
  this->fields.oldSp = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldSp, (int64_t)v20, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v22 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v22;
  if ( v22 >= System_Linq_Enumerable__Count_object_(
                v21,
                (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UISprite___) )
    this->fields.currentIndex = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Update(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s9
  float v5; // s8
  float timeScale; // s0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  float v9; // s9
  int oldForward; // w8
  int v11; // w9

  if ( (byte_4B130EF & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, method, v2);
    byte_4B130EF = 1;
  }
  v4 = (float)(UnityEngine_Time__get_unscaledTime(0LL)
             - QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime)
     / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v5 = fmodf(v4, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v5 = fmodf(v4, 1.0) * timeScale;
  }
  this->fields.oldForward = this->fields.forward;
  v9 = fmodf(v4, 2.0);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  oldForward = this->fields.oldForward;
  v11 = (floorf(v9) != INFINITY) & (vcvtms_s32_f32(v9) == 0);
  this->fields.forward = v11;
  if ( oldForward && oldForward != v11 )
    QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v7);
  if ( this->fields.style == 2 && !this->fields.forward )
    v5 = 1.0 - v5;
  UITweener__set_tweenFactor((UITweener_o *)this, v5, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}