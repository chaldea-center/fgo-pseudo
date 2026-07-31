void QuestBoardListViewMultiSecondBattleInformation___ctor(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  TweenAlpha___ctor((TweenAlpha_o *)this, 0);
}


void QuestBoardListViewMultiSecondBattleInformation__Init(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        System_Collections_Generic_List_UISprite__o *objList,
        const MethodInfo *method)
{
  QuestBoardListViewMultiSecondBattleInformation_o *v4; // x19
  System_Object_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  __int64 v14; // x21
  const MethodInfo *v15; // x1

  v4 = this;
  if ( (byte_59351EE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__ToArray__);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_21FFC50(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_59351EE = 1;
  }
  if ( !objList )
    goto LABEL_12;
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)objList,
         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.spList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_12;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_21FFED4(this);
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v14];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = spList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime = UnityEngine_Time__get_unscaledTime(0);
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v15);
}


void QuestBoardListViewMultiSecondBattleInformation__Reset(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestBoardListViewMultiSecondBattleInformation_o *v8; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  this->fields.spList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spList, 0, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 176);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, 0, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UISprite_array *v16; // x8
  __int64 v17; // x9
  struct UISprite_o *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  const MethodInfo_384633C *v20; // x1
  int v21; // w20

  if ( (byte_59351EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59351EF = 1;
  }
  p_oldSp = &this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(oldSp, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)*p_oldSp;
    if ( !*p_oldSp )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  spList = this->fields.spList;
  if ( !spList )
    goto LABEL_18;
  currentIndex = this->fields.currentIndex;
  if ( (unsigned int)currentIndex >= LODWORD(spList->max_length) )
    goto LABEL_19;
  gameObject = (UnityEngine_Component_o *)spList->m_Items[currentIndex];
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0), (v16 = this->fields.spList) == 0) )
  {
LABEL_18:
    sub_21FFECC(gameObject, v7);
  }
  v17 = this->fields.currentIndex;
  if ( (unsigned int)v17 >= LODWORD(v16->max_length) )
LABEL_19:
    sub_21FFED4(gameObject);
  v18 = v16->m_Items[v17];
  this->fields.oldSp = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.oldSp, (int32_t)v18, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v20 = (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___;
  v21 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v21;
  if ( v21 >= System_Linq_Enumerable__Count_object_(v19, v20) )
    this->fields.currentIndex = 0;
}


void QuestBoardListViewMultiSecondBattleInformation__Update(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  float v3; // s0
  float duration; // s1
  float v5; // s9
  float v6; // s8
  float timeScale; // s8
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  float v10; // s9
  unsigned int v11; // w8
  bool v12; // zf
  int oldForward; // w8
  int v14; // w9

  if ( (byte_59351ED & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_59351ED = 1;
  }
  v3 = UnityEngine_Time__get_unscaledTime(0)
     - QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime;
  duration = this->fields.duration;
  v5 = v3 / duration;
  if ( this->fields.ignoreTimeScale )
  {
    v6 = fmodf(v3 / duration, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0);
    v6 = fmodf(v5, 1.0) * timeScale;
  }
  this->fields.oldForward = this->fields.forward;
  v10 = fmodf(v5, 2.0);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8, v9);
  v11 = vcvtms_s32_f32(v10);
  v12 = floorf(v10) != INFINITY && v11 == 0;
  oldForward = this->fields.oldForward;
  v14 = v12;
  this->fields.forward = v14;
  if ( oldForward && oldForward != v14 )
    QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v8);
  if ( this->fields.style == 2 && !this->fields.forward )
    v6 = 1.0 - v6;
  UITweener__set_tweenFactor((UITweener_o *)this, v6, 0);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0);
}