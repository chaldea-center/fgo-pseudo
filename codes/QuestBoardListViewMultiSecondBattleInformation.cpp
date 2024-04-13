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
  __int64 v3; // x3
  QuestBoardListViewMultiSecondBattleInformation_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_array *spList; // x20
  int max_length; // w8
  unsigned int v18; // w21
  const MethodInfo *v19; // x1
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v21; // x0
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42E8A7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__ToArray__, (_DWORD)objList, (_DWORD)method, v3);
    this = (QuestBoardListViewMultiSecondBattleInformation_o *)sub_B5D5C4(
                                                                 &QuestBoardListViewMultiSecondBattleInformation_TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8);
    byte_42E8A7B = 1;
  }
  if ( !objList )
    goto LABEL_15;
  v9 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)objList,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UISprite__ToArray__);
  v5->fields.spList = (struct UISprite_array *)v9;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.spList, v9, v10, v11, v12, v13, v14, v15);
  spList = v5->fields.spList;
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
        v22 = sub_B5D6C8(this);
        sub_B5D668(v22, 0LL);
      }
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)spList->m_Items[v18];
      if ( !this )
        break;
      this = (QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = spList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_11;
    }
LABEL_15:
    sub_B5D69C(this, objList);
  }
LABEL_11:
  *(_WORD *)&v5->fields.forward = 0;
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v21 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v21 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v21->static_fields->initTime = unscaledTime;
  QuestBoardListViewMultiSecondBattleInformation__SetNext(v5, v19);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.spList, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.oldSp = 0LL;
  v8 = (QuestBoardListViewMultiSecondBattleInformation_o *)((char *)v8 + 168);
  sub_B5D560((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
  WORD2(v8->monitor) = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__SetNext(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UISprite_o **p_oldSp; // x20
  UnityEngine_Object_o *oldSp; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v11; // x1
  struct UISprite_array *spList; // x8
  __int64 currentIndex; // x9
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_array *v20; // x8
  __int64 v21; // x9
  struct UISprite_o *v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int v24; // w20
  __int64 v25; // x0

  if ( (byte_42E8A7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8A7C = 1;
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
        (v20 = this->fields.spList) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(gameObject, v11);
  }
  v21 = this->fields.currentIndex;
  if ( (unsigned int)v21 >= v20->max_length )
  {
LABEL_20:
    v25 = sub_B5D6C8(gameObject);
    sub_B5D668(v25, 0LL);
  }
  v22 = v20->m_Items[v21];
  this->fields.oldSp = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldSp,
    (System_Int32_array **)v22,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spList;
  v24 = this->fields.currentIndex + 1;
  this->fields.currentIndex = v24;
  if ( v24 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                v23,
                (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UISprite___) )
    this->fields.currentIndex = 0;
}


void __fastcall QuestBoardListViewMultiSecondBattleInformation__Update(
        QuestBoardListViewMultiSecondBattleInformation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float unscaledTime; // s8
  QuestBoardListViewMultiSecondBattleInformation_c *v6; // x0
  float v7; // s9
  float v8; // s8
  float timeScale; // s0
  float v10; // s0
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  _BOOL4 oldForward; // w8

  if ( (byte_42E8A7A & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewMultiSecondBattleInformation_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A7A = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v6 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  if ( (BYTE3(QuestBoardListViewMultiSecondBattleInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewMultiSecondBattleInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiSecondBattleInformation_TypeInfo);
    v6 = QuestBoardListViewMultiSecondBattleInformation_TypeInfo;
  }
  v7 = (float)(unscaledTime - v6->static_fields->initTime) / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v8 = fmodf(v7, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v8 = timeScale * fmodf(v7, 1.0);
  }
  this->fields.oldForward = this->fields.forward;
  v10 = fmodf(v7, 2.0);
  v11 = UnityEngine_Mathf__FloorToInt(v10, 0LL);
  oldForward = this->fields.oldForward;
  this->fields.forward = v11 == 0;
  if ( oldForward && v11 )
    QuestBoardListViewMultiSecondBattleInformation__SetNext(this, v12);
  if ( *(&this->fields.style + 1) == 2 && !this->fields.forward )
    v8 = 1.0 - v8;
  UITweener__set_tweenFactor((UITweener_o *)this, v8, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}