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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v11; // w21
  const MethodInfo *v12; // x1

  v4 = this;
  if ( (byte_4A05C60 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_UISprite__ToArray__, objList);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_1B686D4(
                                                                 &QuestBoardListViewMultiSecondBattleInformation_TypeInfo,
                                                                 v5);
    byte_4A05C60 = 1;
  }
  if ( !objList )
    goto LABEL_12;
  v6 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)objList,
         (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v6;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.spList, (int32_t)v6, v7, v8);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_12;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B68938(this, objList);
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v11];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_11;
    }
LABEL_12:
    sub_1B68930(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  QuestBoardListViewMultiSecondBattleInformation_TypeInfo->static_fields->initTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v12);
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Reset(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  QuestBoardListViewMultiSecondBattleInformation_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  this->fields.spList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.spList, 0, v2, v3);
  v4->fields.oldSp = 0LL;
  v4 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v4 + 176);
  sub_1B68678((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
  WORD2(v4->monitor) = 0;
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_array *v12; // x8
  __int64 v13; // x9
  struct UISprite_o *v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int v16; // w20

  if ( (byte_4A05C61 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Count_UISprite___, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A05C61 = 1;
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
        (v12 = this->fields.spList) == 0LL) )
  {
LABEL_18:
    sub_1B68930(gameObject, v7);
  }
  v13 = this->fields.currentIndex;
  if ( (unsigned int)v13 >= v12->max_length )
LABEL_19:
    sub_1B68938(gameObject, v7);
  v14 = v12->m_Items[v13];
  this->fields.oldSp = v14;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.oldSp, (int32_t)v14, v10, v11);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v16 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v16;
  if ( v16 >= System_Linq_Enumerable__Count_object_(
                v15,
                (const MethodInfo_2E66944 *)Method_System_Linq_Enumerable_Count_UISprite___) )
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

  if ( (byte_4A05C5F & 1) == 0 )
  {
    sub_1B686D4(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, method);
    byte_4A05C5F = 1;
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
  if ( !byte_4A03900 )
  {
    sub_1B686D4(&System_Math_TypeInfo, v6);
    byte_4A03900 = 1;
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