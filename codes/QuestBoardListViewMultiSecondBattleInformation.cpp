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
  __int64 v5; // x1
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v15; // w21
  const MethodInfo *v16; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v18; // x0
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4186E37 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__ToArray__, objList);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_B2C35C(
                                                                 &QuestBoardListViewMultiSecondBattleInformation_TypeInfo,
                                                                 v5);
    byte_4186E37 = 1;
  }
  if ( !objList )
    goto LABEL_15;
  v6 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)objList,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v4->fields.spList = (struct UISprite_array *)v6;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.spList, v6, v7, v8, v9, v10, v11, v12);
  spList = v4->fields.spList;
  if ( !spList )
    goto LABEL_15;
  max_length = spList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v19 = sub_B2C460(this);
        sub_B2C400(v19, 0LL);
      }
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
LABEL_15:
    sub_B2C434(this, objList);
  }
LABEL_11:
  *(_WORD *)&v4->fields.forward = 0;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v18 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v18 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v18->static_fields->initTime = unscaledTime;
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v4, v16);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 168);
  sub_B2C2F8((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_array *v16; // x8
  __int64 v17; // x9
  struct UISprite_o *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int v20; // w20
  __int64 v21; // x0

  if ( (byte_4186E38 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UISprite___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186E38 = 1;
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
        (v16 = this->fields.spList) == 0LL) )
  {
LABEL_19:
    sub_B2C434(gameObject, v7);
  }
  v17 = this->fields.currentIndex;
  if ( (unsigned int)v17 >= v16->max_length )
  {
LABEL_20:
    v21 = sub_B2C460(gameObject);
    sub_B2C400(v21, 0LL);
  }
  v18 = v16->m_Items[v17];
  this->fields.oldSp = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.oldSp,
    (System_Int32_array **)v18,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v20 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v20;
  if ( v20 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v19,
                (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UISprite___) )
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

  if ( (byte_4186E36 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, method);
    byte_4186E36 = 1;
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