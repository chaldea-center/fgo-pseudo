void __fastcall QuestBoardListViewMultiSecondBattleInformation___cctor(const MethodInfo *method)
{
  ;
}


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
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v14; // w21
  const MethodInfo *v15; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v17; // x0
  __int64 v18; // x0

  v4 = this;
  if ( (byte_438BC0C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__ToArray__);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_B775C4(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_438BC0C = 1;
  }
  if ( !objList )
    goto LABEL_15;
  v5 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)objList,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v5;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.spList, v5, v6, v7, v8, v9, v10, v11);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_15;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v18 = sub_B776C8(this);
        sub_B77668(v18, 0LL);
      }
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v14];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_11;
    }
LABEL_15:
    sub_B7769C(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v17 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v17 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v17->static_fields->initTime = unscaledTime;
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v15);
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Reset(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestBoardListViewMultiSecondBattleInformation_o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  this->fields.spList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 168);
  sub_B77560((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UISprite_array *v15; // x8
  __int64 v16; // x9
  struct UISprite_o *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int v19; // w20
  __int64 v20; // x0

  if ( (byte_438BC0D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BC0D = 1;
  }
  p_oldSp = &this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(oldSp, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)*p_oldSp;
    if ( !*p_oldSp )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  spList = this->fields.spList;
  if ( !spList )
    goto LABEL_19;
  currentIndex = this->fields.currentIndex;
  if ( (unsigned int)currentIndex >= spList->max_length )
    goto LABEL_20;
  gameObject = (UnityEngine_Component_o *)spList->m_Items[currentIndex];
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (v15 = this->fields.spList) == 0LL) )
  {
LABEL_19:
    sub_B7769C(gameObject, v6);
  }
  v16 = this->fields.currentIndex;
  if ( (unsigned int)v16 >= v15->max_length )
  {
LABEL_20:
    v20 = sub_B776C8(gameObject);
    sub_B77668(v20, 0LL);
  }
  v17 = v15->m_Items[v16];
  this->fields.oldSp = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.oldSp,
    (System_Int32_array **)v17,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v19 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v19;
  if ( v19 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v18,
                (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UISprite___) )
    this->fields.currentIndex = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Update(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v4; // x0
  float v5; // s9
  float v6; // s8
  float timeScale; // s0
  float v8; // s0
  int32_t v9; // w0
  const MethodInfo *v10; // x1
  _BOOL4 oldForward; // w8

  if ( (byte_438BC0B & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    byte_438BC0B = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v4 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v4 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v5 = (float)(unscaledTime - v4->static_fields->initTime) / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v6 = fmodf(v5, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v6 = timeScale * fmodf(v5, 1.0);
  }
  this->fields.oldForward = this->fields.forward;
  v8 = fmodf(v5, 2.0);
  v9 = UnityEngine_Mathf__FloorToInt(v8, 0LL);
  oldForward = this->fields.oldForward;
  this->fields.forward = v9 == 0;
  if ( oldForward && v9 )
    QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v10);
  if ( *(&this->fields.style + 1) == 2 && !this->fields.forward )
    v6 = 1.0 - v6;
  UITweener__set_tweenFactor((UITweener_o *)this, v6, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}