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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v10; // w21
  const MethodInfo *v11; // x1

  v4 = this;
  if ( (byte_4CB2FA5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UISprite__ToArray__);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_1C6BA08(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_4CB2FA5 = 1;
  }
  if ( !objList )
    goto LABEL_12;
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)objList,
         (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.spList, (int32_t)v5, v6, v7);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_12;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C6BC68(this);
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v10];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = spList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_1C6BC60(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime = UnityEngine_Time__get_unscaledTime(0);
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v11);
}


void QuestBoardListViewMultiSecondBattleInformation__Reset(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestBoardListViewMultiSecondBattleInformation_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  this->fields.spList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.spList, 0, v2, v3);
  v4->fields.oldSp = 0;
  v4 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v4 + 176);
  sub_1C6B9AC((CGThumbnailListItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
  WORD2(v4->monitor) = 0;
}


void QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_array *v11; // x8
  __int64 v12; // x9
  struct UISprite_o *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int v15; // w20

  if ( (byte_4CB2FA6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2FA6 = 1;
  }
  p_oldSp = &this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0), (v11 = this->fields.spList) == 0) )
  {
LABEL_18:
    sub_1C6BC60(gameObject, v6);
  }
  v12 = this->fields.currentIndex;
  if ( (unsigned int)v12 >= LODWORD(v11->max_length) )
LABEL_19:
    sub_1C6BC68(gameObject);
  v13 = v11->m_Items[v12];
  this->fields.oldSp = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.oldSp, (int32_t)v13, v9, v10);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v15 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v15;
  if ( v15 >= System_Linq_Enumerable__Count_object_(
                v14,
                (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_UISprite___) )
    this->fields.currentIndex = 0;
}


void QuestBoardListViewMultiSecondBattleInformation__Update(
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

  if ( (byte_4CB2FA4 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_4CB2FA4 = 1;
  }
  v3 = (float)(UnityEngine_Time__get_unscaledTime(0)
             - QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime)
     / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v4 = fmodf(v3, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0);
    v4 = fmodf(v3, 1.0) * timeScale;
  }
  this->fields.oldForward = this->fields.forward;
  v7 = fmodf(v3, 2.0);
  if ( !byte_4CAFC08 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC08 = 1;
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
  UITweener__set_tweenFactor((UITweener_o *)this, v4, 0);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0);
}