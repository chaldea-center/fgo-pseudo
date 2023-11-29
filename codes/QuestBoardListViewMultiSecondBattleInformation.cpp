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
  __int64 v5; // x1
  struct UISprite_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v18; // w21
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v23; // x0

  if ( (byte_40F9545 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__ToArray__, objList);
    sub_B16FFC(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, v5);
    byte_40F9545 = 1;
  }
  if ( !objList )
    goto LABEL_15;
  v6 = (struct UISprite_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)objList,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  this->fields.spList = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.spList, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  spList = this->fields.spList;
  if ( !spList )
    goto LABEL_15;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v19 = (UnityEngine_Component_o *)spList->m_Items[v18];
      if ( !v19 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_11;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_11:
  *(_WORD *)&this->fields.forward = 0;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v23 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v23 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v23->static_fields->initTime = unscaledTime;
  QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v21);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 168);
  sub_B16F98((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_array *v19; // x8
  __int64 v20; // x9
  struct UISprite_o *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int v23; // w20

  if ( (byte_40F9546 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UISprite___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9546 = 1;
  }
  p_oldSp = (UnityEngine_Component_o **)&this->fields.oldSp;
  oldSp = (UnityEngine_Object_o *)this->fields.oldSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(oldSp, 0LL, 0LL);
  if ( v6 )
  {
    if ( !*p_oldSp )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject(*p_oldSp, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  spList = this->fields.spList;
  if ( !spList )
    goto LABEL_19;
  currentIndex = this->fields.currentIndex;
  if ( (unsigned int)currentIndex >= spList->max_length )
    goto LABEL_20;
  v12 = (UnityEngine_Component_o *)spList->m_Items[currentIndex];
  if ( !v12
    || (v13 = UnityEngine_Component__get_gameObject(v12, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v13, 1, 0LL), (v19 = this->fields.spList) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v20 = this->fields.currentIndex;
  if ( (unsigned int)v20 >= v19->max_length )
  {
LABEL_20:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v21 = v19->m_Items[v20];
  this->fields.oldSp = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldSp,
    (System_Int32_array **)v21,
    v8,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v23 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v23;
  if ( v23 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v22,
                (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UISprite___) )
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

  if ( (byte_40F9544 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, method);
    byte_40F9544 = 1;
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