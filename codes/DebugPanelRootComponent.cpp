void DebugPanelRootComponent___ctor(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E05FF7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    byte_4E05FF7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.list, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.strlist = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.strlist, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugPanelRootComponent__ClearMenu(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *list; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E05FE5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FE5 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  list = this->fields.list;
  if ( !list )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)list,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = this->fields.list;
  if ( !v5 )
LABEL_13:
    sub_1CE6958(list, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
}


void DebugPanelRootComponent__CloseWindow(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *debuginput; // x20
  UnityEngine_Object_o *debugBuffinput; // x20
  UnityEngine_Object_o *debugInputSkillChange; // x20
  UnityEngine_Object_o *debugInputAttackCardExecute; // x20
  UnityEngine_Object_o *debugInputBattlePointWindow; // x20
  UnityEngine_Object_o *debugInputBattleValueWindow; // x20
  UnityEngine_Object_o *debugInputAttackCardForceWindow; // x20
  UnityEngine_Object_o *debugListSelectWindow; // x20

  if ( (byte_4E05FE4 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FE4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  debuginput = (UnityEngine_Object_o *)this->fields.debuginput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debuginput, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debuginput;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugBuffinput = (UnityEngine_Object_o *)this->fields.debugBuffinput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugBuffinput, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugBuffinput;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugInputSkillChange = (UnityEngine_Object_o *)this->fields.debugInputSkillChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugInputSkillChange, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugInputSkillChange;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugInputAttackCardExecute = (UnityEngine_Object_o *)this->fields.debugInputAttackCardExecute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugInputAttackCardExecute, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugInputAttackCardExecute;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugInputBattlePointWindow = (UnityEngine_Object_o *)this->fields.debugInputBattlePointWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugInputBattlePointWindow, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugInputBattlePointWindow;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugInputBattleValueWindow = (UnityEngine_Object_o *)this->fields.debugInputBattleValueWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugInputBattleValueWindow, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugInputBattleValueWindow;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugInputAttackCardForceWindow = (UnityEngine_Object_o *)this->fields.debugInputAttackCardForceWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugInputAttackCardForceWindow, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugInputAttackCardForceWindow;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  debugListSelectWindow = (UnityEngine_Object_o *)this->fields.debugListSelectWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugListSelectWindow, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.debugListSelectWindow;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        goto LABEL_52;
      }
    }
LABEL_53:
    sub_1CE6958(gameObject, v4);
  }
LABEL_52:
  DebugPanelRootComponent__SaveDebugMenuFavorite(this, v4);
}


void DebugPanelRootComponent__LoadDebugMenuFavorite(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *list; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E05FF5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor___79866736);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&StringLiteral_3134/*"BattleDebugMenuFavorite"*/);
    sub_1CE6700(&StringLiteral_3141/*"BattleKeepFavorite"*/);
    byte_4E05FF5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_3134/*"BattleDebugMenuFavorite"*/,
             string_TypeInfo->static_fields->Empty,
             0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !String )
      sub_1CE6958(IsNullOrEmpty, v5);
    v6 = (System_Collections_Generic_IEnumerable_T__o *)System_String__Split(String, 0x2Cu, 0, 0);
    v7 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_59791452(
      v7,
      v6,
      (const MethodInfo_390585C *)Method_System_Collections_Generic_List_string___ctor___79866736);
    list = this->fields.list;
    if ( !list )
      sub_1CE6958(0, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)list,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v18 = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v18.fields._current )
        sub_1CE6958(0, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v18.fields._current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
      v13 = Component_object;
      if ( !Component_object )
        sub_1CE6958(0, v12);
      if ( !v7 )
        sub_1CE6958(Component_object, v12);
      v14 = System_Collections_Generic_List_object___Contains(
              v7,
              (Il2CppObject *)Component_object[3].monitor,
              (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_string__Contains__);
      if ( !v13[9].klass )
        sub_1CE6958(v14, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13[9].klass, v14, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    if ( UnityEngine_PlayerPrefs__GetInt_72876276((System_String_o *)StringLiteral_3141/*"BattleKeepFavorite"*/, 0) == 1 )
      DebugPanelRootComponent__OnClickFavoriteOnly(this, v16);
  }
}


void DebugPanelRootComponent__OnClickDebugStrCopy(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  DebugPanelRootComponent_o *v2; // x19
  struct UILabel_o *debugStr; // x8
  struct UILabel_o *v4; // x8
  System_String_o *mText; // x19

  v2 = this;
  if ( (byte_4E05FF6 & 1) == 0 )
  {
    this = (DebugPanelRootComponent_o *)sub_1CE6700(&UnityEngine_GUIUtility_TypeInfo);
    byte_4E05FF6 = 1;
  }
  debugStr = v2->fields.debugStr;
  if ( !debugStr )
    goto LABEL_9;
  this = (DebugPanelRootComponent_o *)System_String__IsNullOrEmpty(debugStr->fields.mText, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v4 = v2->fields.debugStr;
  if ( !v4 )
LABEL_9:
    sub_1CE6958(this, method);
  mText = v4->fields.mText;
  if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
  UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0);
}


void DebugPanelRootComponent__OnClickFavoriteOnly(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  DebugPanelRootComponent_o *v2; // x19
  UnityEngine_GameObject_o *checkMark; // x20
  bool activeSelf; // w0
  bool v5; // w0
  int v6; // w20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  Il2CppObject *Component_object; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *klass; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int v15; // w20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x19
  UnityEngine_Transform_o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4E05FF3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (DebugPanelRootComponent_o *)sub_1CE6700(&StringLiteral_3141/*"BattleKeepFavorite"*/);
    byte_4E05FF3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  checkMark = v2->fields.checkMark;
  if ( !checkMark
    || (activeSelf = UnityEngine_GameObject__get_activeSelf(v2->fields.checkMark, 0),
        UnityEngine_GameObject__SetActive(checkMark, !activeSelf, 0),
        (this = (DebugPanelRootComponent_o *)v2->fields.checkMark) == 0)
    || (v5 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0),
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3141/*"BattleKeepFavorite"*/, v5, 0),
        (this = (DebugPanelRootComponent_o *)v2->fields.checkMark) == 0)
    || (this = (DebugPanelRootComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0),
        !v2->fields.list) )
  {
    sub_1CE6958(this, method);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)v2->fields.list,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v6 = 0;
    v22 = v21;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v22,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
      if ( !v7 )
        break;
      current = v22.fields._current;
      if ( !v22.fields._current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v22.fields._current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
      if ( !Component_object )
        sub_1CE6958(0, v11);
      klass = (UnityEngine_GameObject_o *)Component_object[9].klass;
      if ( !klass )
        sub_1CE6958(0, v11);
      if ( UnityEngine_GameObject__get_activeSelf(klass, 0) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)current, 1, 0);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0);
        if ( !transform )
          sub_1CE6958(0, v14);
        v23.fields.y = (float)(-70 * v6);
        v23.fields.x = 0.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(transform, v23, 0);
        ++v6;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)current, 0, 0);
      }
    }
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)v2->fields.list,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v15 = 0;
    v22 = v21;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
      if ( !v16 )
        break;
      v18 = v22.fields._current;
      if ( !v22.fields._current )
        sub_1CE6958(v16, v17);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22.fields._current, 1, 0);
      v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v18, 0);
      if ( !v19 )
        sub_1CE6958(0, v20);
      v24.fields.y = (float)v15;
      v24.fields.x = 0.0;
      v24.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v19, v24, 0);
      v15 -= 70;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void DebugPanelRootComponent__OpenAddInfinityGutsWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputInfinityGutsWindow; // x21
  __int64 v7; // x1
  DebugInputInfiniteGutsComponent_o *v8; // x0

  if ( (byte_4E05FEC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FEC = 1;
  }
  debugInputInfinityGutsWindow = (UnityEngine_Object_o *)this->fields.debugInputInfinityGutsWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputInfinityGutsWindow, 0, 0) )
  {
    v8 = this->fields.debugInputInfinityGutsWindow;
    if ( !v8 )
      sub_1CE6958(0, v7);
    DebugInputInfiniteGutsComponent__Open(v8, data, this->fields.menuRoot, 0);
  }
}


void DebugPanelRootComponent__OpenAttackCardExecuteWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputAttackCardExecute; // x21
  __int64 v7; // x1
  DebugInputAttackCardExcuteComponent_o *v8; // x0

  if ( (byte_4E05FEB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FEB = 1;
  }
  debugInputAttackCardExecute = (UnityEngine_Object_o *)this->fields.debugInputAttackCardExecute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputAttackCardExecute, 0, 0) )
  {
    v8 = this->fields.debugInputAttackCardExecute;
    if ( !v8 )
      sub_1CE6958(0, v7);
    DebugInputAttackCardExcuteComponent__Open(v8, data, this->fields.menuRoot, 0);
  }
}


void DebugPanelRootComponent__OpenBGSelectWindow(
        DebugPanelRootComponent_o *this,
        System_Action_string__bool__o *cb,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject **p_debugListSelectWindow; // x20
  UnityEngine_Object_o *debugListSelectWindow; // x22
  Il2CppObject *debugListSelectWindowPrefab; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x0
  System_Collections_Generic_List_TSource__o *v14; // x0
  DebugPanelRootComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__object__o *_9__52_0; // x22
  Il2CppObject *v18; // x23
  struct DebugPanelRootComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  Il2CppObject *v28; // x21
  System_Collections_Generic_List_string__o *v29; // x20
  System_String_o *v30; // x22
  System_String_o *v31; // x0
  const MethodInfo *v32; // x5
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF

  v33 = type;
  v34 = id;
  if ( (byte_4E05FEE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_BattleBgMaster___);
    sub_1CE6700(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__getEntitys__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_BattleBgEntity__string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_BattleBgEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1CE6700(&System_Func_BattleBgEntity__string__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_TryGetComponent_DebugListSelectComponent___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_DebugPanelRootComponent___c__OpenBGSelectWindow_b__52_0__);
    sub_1CE6700(&DebugPanelRootComponent___c_TypeInfo);
    sub_1CE6700(&StringLiteral_1452/*":"*/);
    byte_4E05FEE = 1;
  }
  p_debugListSelectWindow = (Il2CppObject **)&this->fields.debugListSelectWindow;
  debugListSelectWindow = (UnityEngine_Object_o *)this->fields.debugListSelectWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(debugListSelectWindow, 0, 0) )
  {
    debugListSelectWindowPrefab = (Il2CppObject *)this->fields.debugListSelectWindowPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_23;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__53022032(
                                               debugListSelectWindowPrefab,
                                               transform,
                                               (const MethodInfo_3290D50 *)Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    if ( !gameObject )
LABEL_23:
      sub_1CE6958(gameObject, v11);
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            gameObject,
            p_debugListSelectWindow,
            (const MethodInfo_325D0CC *)Method_UnityEngine_GameObject_TryGetComponent_DebugListSelectComponent___) )
      return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_BattleBgMaster___);
  if ( !gameObject )
    goto LABEL_23;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                   (const MethodInfo_34ED440 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__getEntitys__);
  v14 = System_Linq_Enumerable__ToList_object_(
          Entitys,
          (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_BattleBgEntity___);
  v15 = DebugPanelRootComponent___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !DebugPanelRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugPanelRootComponent___c_TypeInfo);
    v15 = DebugPanelRootComponent___c_TypeInfo;
  }
  _9__52_0 = (System_Func_object__object__o *)v15->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = DebugPanelRootComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__52_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_BattleBgEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__52_0,
      v18,
      Method_DebugPanelRootComponent___c__OpenBGSelectWindow_b__52_0__,
      0);
    static_fields = DebugPanelRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Func_BattleBgEntity__string__o *)_9__52_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__52_0,
      (int32_t)_9__52_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__52_0,
                                                               (const MethodInfo_323A63C *)Method_System_Linq_Enumerable_Select_BattleBgEntity__string___);
  v27 = System_Linq_Enumerable__ToList_object_(
          v26,
          (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_string___);
  v28 = *p_debugListSelectWindow;
  v29 = (System_Collections_Generic_List_string__o *)v27;
  v30 = System_Int32__ToString((int32_t)&v34, 0);
  v31 = System_Int32__ToString((int32_t)&v33, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_65161092(
                                             v30,
                                             (System_String_o *)StringLiteral_1452/*":"*/,
                                             v31,
                                             0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, const MethodInfo *))gameObject->klass->vtable._3_ToString.methodPtr)(
                                             gameObject,
                                             gameObject->klass->vtable._3_ToString.method);
  if ( !v28 )
    goto LABEL_23;
  DebugListSelectComponent__Open((DebugListSelectComponent_o *)v28, cb, v29, (System_String_o *)gameObject, 1, v32);
}


void DebugPanelRootComponent__OpenDeadAnimationSelectWindow(
        DebugPanelRootComponent_o *this,
        System_Collections_Generic_List_string__o *itemList,
        System_Action_int__o *onSelect,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *klass; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  GrandQuestFolderBoardItem_o *p_debugListSelectWindow; // x21
  UnityEngine_Object_o *debugListSelectWindow; // x23
  UnityEngine_Object_o *debugListSelectWindowPrefab; // x23
  Il2CppObject *v19; // x23
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v21; // x22
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Action_T1__T2__o *v29; // x22
  const MethodInfo *v30; // x5

  if ( (byte_4E05FEF & 1) == 0 )
  {
    sub_1CE6700(&System_Action_string__bool__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DebugListSelectComponent___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_DebugPanelRootComponent___c__DisplayClass53_0__OpenDeadAnimationSelectWindow_b__0__);
    sub_1CE6700(&DebugPanelRootComponent___c__DisplayClass53_0_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05FEF = 1;
  }
  v7 = sub_1CE694C(DebugPanelRootComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = onSelect;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)onSelect, v10, v11, v12, v13, v14, v15);
  p_debugListSelectWindow = (GrandQuestFolderBoardItem_o *)&this->fields.debugListSelectWindow;
  debugListSelectWindow = (UnityEngine_Object_o *)this->fields.debugListSelectWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugListSelectWindow, 0, 0) )
  {
LABEL_15:
    klass = (UnityEngine_Component_o *)p_debugListSelectWindow->klass;
    if ( p_debugListSelectWindow->klass )
    {
      klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0);
      if ( klass )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 1, 0);
        v29 = (System_Action_T1__T2__o *)sub_1CE694C(System_Action_string__bool__TypeInfo);
        System_Action_object__bool____ctor(
          v29,
          (Il2CppObject *)v7,
          Method_DebugPanelRootComponent___c__DisplayClass53_0__OpenDeadAnimationSelectWindow_b__0__,
          0);
        klass = (UnityEngine_Component_o *)p_debugListSelectWindow->klass;
        if ( p_debugListSelectWindow->klass )
        {
          DebugListSelectComponent__Open(
            (DebugListSelectComponent_o *)klass,
            (System_Action_string__bool__o *)v29,
            itemList,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v30);
          return;
        }
      }
    }
LABEL_19:
    sub_1CE6958(klass, v9);
  }
  debugListSelectWindowPrefab = (UnityEngine_Object_o *)this->fields.debugListSelectWindowPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugListSelectWindowPrefab, 0, 0) )
  {
    v19 = (Il2CppObject *)this->fields.debugListSelectWindowPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__53022032(
                                         v19,
                                         transform,
                                         (const MethodInfo_3290D50 *)Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    if ( !klass )
      goto LABEL_19;
    v21 = (UnityEngine_GameObject_o *)klass;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 1, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v21,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DebugListSelectComponent___);
    p_debugListSelectWindow->klass = (GrandQuestFolderBoardItem_c *)Component_object;
    sub_1CE66A4(p_debugListSelectWindow, (int32_t)Component_object, v23, v24, v25, v26, v27, v28);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)p_debugListSelectWindow->klass, 0, 0) )
      return;
    goto LABEL_15;
  }
}


void DebugPanelRootComponent__OpenSetBattlePointWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputBattlePointWindow; // x21
  DebugInputBattlePointComponent_o *v7; // x22
  UnityEngine_Transform_o *menuRoot; // x21
  System_Action_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4E05FF1 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DebugPanelRootComponent_CloseWindow__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FF1 = 1;
  }
  debugInputBattlePointWindow = (UnityEngine_Object_o *)this->fields.debugInputBattlePointWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputBattlePointWindow, 0, 0) )
  {
    v7 = this->fields.debugInputBattlePointWindow;
    menuRoot = this->fields.menuRoot;
    v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_DebugPanelRootComponent_CloseWindow__, 0);
    if ( !v7 )
      sub_1CE6958(v10, v11);
    DebugInputBattlePointComponent__Open(v7, data, menuRoot, v9, 0);
  }
}


void DebugPanelRootComponent__OpenSetBattleValueWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        System_Action_o *onSubmitCallback,
        const MethodInfo *method)
{
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *debugInputBattleValueWindow; // x22
  DebugInputBattleValueComponent_o *v24; // x22
  UnityEngine_Transform_o *menuRoot; // x20
  System_Action_o *v26; // x23

  if ( (byte_4E05FF2 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_DebugPanelRootComponent___c__DisplayClass56_0__OpenSetBattleValueWindow_b__0__);
    sub_1CE6700(&DebugPanelRootComponent___c__DisplayClass56_0_TypeInfo);
    byte_4E05FF2 = 1;
  }
  v8 = sub_1CE694C(DebugPanelRootComponent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = onSubmitCallback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)onSubmitCallback, v17, v18, v19, v20, v21, v22);
  debugInputBattleValueWindow = (UnityEngine_Object_o *)this->fields.debugInputBattleValueWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputBattleValueWindow, 0, 0) )
  {
    v24 = this->fields.debugInputBattleValueWindow;
    menuRoot = this->fields.menuRoot;
    v26 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v8,
      Method_DebugPanelRootComponent___c__DisplayClass56_0__OpenSetBattleValueWindow_b__0__,
      0);
    if ( v24 )
    {
      DebugInputBattleValueComponent__Open(v24, data, menuRoot, v26, 0);
      return;
    }
LABEL_9:
    sub_1CE6958(v9, v10);
  }
}


void DebugPanelRootComponent__OpenUsePlayerTurnAttackProbabilitySurvey(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputUsePlayerTurnAttackProbabilitySurveyWindow; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  DebugInputSkillAttackProbabilitySurvey_o *v9; // x0

  if ( (byte_4E05FF0 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FF0 = 1;
  }
  debugInputUsePlayerTurnAttackProbabilitySurveyWindow = (UnityEngine_Object_o *)this->fields.debugInputUsePlayerTurnAttackProbabilitySurveyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputUsePlayerTurnAttackProbabilitySurveyWindow, 0, 0) )
  {
    v9 = this->fields.debugInputUsePlayerTurnAttackProbabilitySurveyWindow;
    if ( !v9 )
      sub_1CE6958(0, v7);
    DebugInputSkillAttackProbabilitySurvey__Open(v9, data, this->fields.menuRoot, v8);
  }
}


void DebugPanelRootComponent__OpenUsePlayerTurnSkillWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputUsePlayerTurnSkillWindow; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  DebugInputUsePlayerTurnSkillComponent_o *v9; // x0

  if ( (byte_4E05FED & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FED = 1;
  }
  debugInputUsePlayerTurnSkillWindow = (UnityEngine_Object_o *)this->fields.debugInputUsePlayerTurnSkillWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputUsePlayerTurnSkillWindow, 0, 0) )
  {
    v9 = this->fields.debugInputUsePlayerTurnSkillWindow;
    if ( !v9 )
      sub_1CE6958(0, v7);
    DebugInputUsePlayerTurnSkillComponent__Open(v9, data, this->fields.menuRoot, v8);
  }
}


void DebugPanelRootComponent__OpenWindow(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugPanelRootComponent__SaveDebugMenuFavorite(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  int32_t v4; // w20
  System_String_o *Empty; // x21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_4E05FF4 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&StringLiteral_3134/*"BattleDebugMenuFavorite"*/);
    sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E05FF4 = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1CE6958(list, method);
  v4 = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  while ( v4 < list->fields._size )
  {
    list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          list,
                                                          v4,
                                                          (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( list )
    {
      list = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)list,
                                                            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
      if ( list )
      {
        v6 = list;
        list = *(System_Collections_Generic_List_object__o **)&list[3].fields._size;
        if ( list )
        {
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)list, 0) )
          {
            if ( !System_String__IsNullOrEmpty(Empty, 0) )
              Empty = System_String__Concat_65122828(Empty, (System_String_o *)StringLiteral_810/*","*/, 0);
            Empty = System_String__Concat_65122828(Empty, (System_String_o *)v6[1].fields._items, 0);
          }
          list = (System_Collections_Generic_List_object__o *)this->fields.list;
          ++v4;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3134/*"BattleDebugMenuFavorite"*/, Empty, 0);
}


DebugMenuComponent_o *DebugPanelRootComponent__createMenu(DebugPanelRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *mst_selectmenu; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  struct System_Collections_Generic_List_GameObject__o *list; // x8
  int32_t size; // w21
  UnityEngine_Transform_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E05FE6 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FE6 = 1;
  }
  mst_selectmenu = (Il2CppObject *)this->fields.mst_selectmenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (__int64)UnityEngine_Object__Instantiate_object_(
                         mst_selectmenu,
                         (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v6 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  size = list->fields._size;
  transform = (__int64)UnityEngine_GameObject__get_transform(v6, 0);
  if ( !transform )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.menuRoot, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v6, 0);
  if ( !transform )
    goto LABEL_18;
  v21.fields.y = (float)(-70 * size);
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v21, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v6, 0);
  v9 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4DFE0AE )
  {
    transform = sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0AE = 1;
  }
  if ( !v9
    || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (transform = (__int64)this->fields.list) == 0)
    || (v16 = *(_QWORD *)(transform + 16),
        v17 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(transform + 28),
        !v16) )
  {
LABEL_18:
    sub_1CE6958(transform, v5);
  }
  v18 = *(int *)(transform + 24);
  if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)transform,
      (Il2CppObject *)v6,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = v16 + 8 * v18;
    *(_DWORD *)(transform + 24) = v18 + 1;
    *(_QWORD *)(v19 + 32) = v6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
  return (DebugMenuComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v6,
                                   (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DebugMenuComponent___);
}


void DebugPanelRootComponent__debugInputCallBack(
        DebugPanelRootComponent_o *this,
        System_String_o *input,
        bool submit,
        const MethodInfo *method)
{
  struct DebugInputComponent_EndInputCallBack_o *debugInputCallBackFunc; // x8
  DebugPanelRootComponent_o *v5; // x19

  debugInputCallBackFunc = this->fields.debugInputCallBackFunc;
  if ( !debugInputCallBackFunc
    || (v5 = this,
        ((void (__fastcall *)(intptr_t, System_String_o *, bool, intptr_t))debugInputCallBackFunc->fields.invoke_impl)(
          debugInputCallBackFunc->fields.method_code,
          input,
          submit,
          debugInputCallBackFunc->fields.method),
        (this = (DebugPanelRootComponent_o *)v5->fields.debuginput) == 0)
    || (this = (DebugPanelRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (DebugPanelRootComponent_o *)v5->fields.menuRoot) == 0)
    || (this = (DebugPanelRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1CE6958(this, input);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void DebugPanelRootComponent__openInputBuffWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugBuffinput; // x21
  __int64 v7; // x1
  DebugInputBuffComponent_o *v8; // x0

  if ( (byte_4E05FE9 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FE9 = 1;
  }
  debugBuffinput = (UnityEngine_Object_o *)this->fields.debugBuffinput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugBuffinput, 0, 0) )
  {
    v8 = this->fields.debugBuffinput;
    if ( !v8 )
      sub_1CE6958(0, v7);
    DebugInputBuffComponent__Open(v8, data, this->fields.menuRoot, 0);
  }
}


void DebugPanelRootComponent__openInputSkillChangeWindow(
        DebugPanelRootComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        bool isPlayerChange,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debugInputSkillChange; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *menuRoot; // x0
  DebugInputSkillChangeComponent_o *v12; // x22
  const MethodInfo *v13; // x5

  if ( (byte_4E05FEA & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FEA = 1;
  }
  debugInputSkillChange = (UnityEngine_Object_o *)this->fields.debugInputSkillChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debugInputSkillChange, 0, 0) )
  {
    menuRoot = (UnityEngine_Component_o *)this->fields.menuRoot;
    if ( !menuRoot
      || (v12 = this->fields.debugInputSkillChange,
          menuRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuRoot, 0),
          !v12) )
    {
      sub_1CE6958(menuRoot, v10);
    }
    DebugInputSkillChangeComponent__Open(v12, logic, data, (UnityEngine_GameObject_o *)menuRoot, isPlayerChange, v13);
  }
}


void DebugPanelRootComponent__openInputWindow(
        DebugPanelRootComponent_o *this,
        DebugInputComponent_EndInputCallBack_o *cb,
        const MethodInfo *method)
{
  UnityEngine_Object_o *debuginput; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  DebugInputComponent_o *v12; // x20
  DebugInputComponent_EndInputCallBack_o *v13; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v15; // x1

  if ( (byte_4E05FE8 & 1) == 0 )
  {
    sub_1CE6700(&Method_DebugPanelRootComponent_debugInputCallBack__);
    sub_1CE6700(&DebugInputComponent_EndInputCallBack_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E05FE8 = 1;
  }
  debuginput = (UnityEngine_Object_o *)this->fields.debuginput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(debuginput, 0, 0) )
  {
    this->fields.debugInputCallBackFunc = cb;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.debugInputCallBackFunc,
      (int32_t)cb,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = this->fields.debuginput;
    v13 = (DebugInputComponent_EndInputCallBack_o *)sub_1CE694C(DebugInputComponent_EndInputCallBack_TypeInfo);
    DebugInputComponent_EndInputCallBack___ctor(
      v13,
      (Il2CppObject *)this,
      Method_DebugPanelRootComponent_debugInputCallBack__,
      0);
    if ( !v12
      || (DebugInputComponent__setCallBack(v12, v13, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.debuginput) == 0)
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.menuRoot) == 0)
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1CE6958(gameObject, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void DebugPanelRootComponent__setLog(DebugPanelRootComponent_o *this, System_String_o *str, const MethodInfo *method)
{
  UILabel_o *debugStr; // x0
  UnityEngine_GameObject_o *debugStrCopyButton; // x19

  debugStr = this->fields.debugStr;
  if ( !debugStr
    || (UILabel__set_text(debugStr, str, 0),
        debugStrCopyButton = this->fields.debugStrCopyButton,
        debugStr = (UILabel_o *)System_String__IsNullOrEmpty(str, 0),
        !debugStrCopyButton) )
  {
    sub_1CE6958(debugStr, str);
  }
  UnityEngine_GameObject__SetActive(debugStrCopyButton, ((unsigned __int8)debugStr & 1) == 0, 0);
}


void DebugPanelRootComponent__setLog_44810108(
        DebugPanelRootComponent_o *this,
        System_String_array *strlist,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  UILabel_o *debugStr; // x20
  struct UILabel_o *v11; // x8
  UnityEngine_GameObject_o *debugStrCopyButton; // x19

  if ( (byte_4E05FE7 & 1) == 0 )
  {
    sub_1CE6700(&System_Text_StringBuilder_TypeInfo);
    byte_4E05FE7 = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  if ( strlist )
  {
    max_length = strlist->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1CE6960(appended);
        if ( !v5 )
          goto LABEL_15;
        appended = System_Text_StringBuilder__AppendLine_65208012(v5, strlist->m_Items[v9], 0);
        LODWORD(max_length) = strlist->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_11;
      }
    }
  }
  if ( !v5 )
    goto LABEL_15;
LABEL_11:
  debugStr = this->fields.debugStr;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
                                              v5,
                                              v5->klass->vtable._3_ToString.method);
  if ( !debugStr
    || (UILabel__set_text(debugStr, (System_String_o *)appended, 0), (v11 = this->fields.debugStr) == 0)
    || (debugStrCopyButton = this->fields.debugStrCopyButton,
        appended = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v11->fields.mText, 0),
        !debugStrCopyButton) )
  {
LABEL_15:
    sub_1CE6958(appended, v7);
  }
  UnityEngine_GameObject__SetActive(debugStrCopyButton, ((unsigned __int8)appended & 1) == 0, 0);
}


void DebugPanelRootComponent__setMenu(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_menuDelegate_o *dg,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v7);
  DebugMenuComponent__setInitDlg(Menu, title, dg, v8);
}


void DebugPanelRootComponent__setMenu_44809608(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_tgrDelegate_o *dg,
        bool init,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v9);
  DebugMenuComponent__setInitDlg_44806508(Menu, title, dg, init, v10);
}


void DebugPanelRootComponent__setMenu_44809664(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_paramDelegate_o *dg,
        int32_t param,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v9);
  DebugMenuComponent__setInitDlg_44806604(Menu, title, dg, param, v10);
}


void DebugPanelRootComponent__setMenu_44809720(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_paramtgrDelegate_o *dg,
        int32_t param,
        bool init,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v11);
  DebugMenuComponent__setInitDlg_44806696(Menu, title, dg, param, init, v12);
}


void DebugPanelRootComponent__setMenu_44809792(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_paramStrDelegate_o *dg,
        System_String_o *param,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v9);
  DebugMenuComponent__setInitDlg_44806808(Menu, title, dg, param, v10);
}


void DebugPanelRootComponent__setMenu_44809848(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_paramDelegate_o *dg,
        int32_t param,
        int32_t min,
        int32_t max,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x6

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v13);
  DebugMenuComponent__setInitDlg_44806912(Menu, title, dg, param, min, max, v14);
}


void DebugPanelRootComponent__setMenu_44809928(
        DebugPanelRootComponent_o *this,
        System_String_o *title,
        DebugPanelRootComponent_paramDelegate_o *dg,
        int32_t param,
        int32_t min,
        int32_t max,
        System_Collections_Generic_Dictionary_int__string__o *paramToStringDictionary,
        const MethodInfo *method)
{
  DebugMenuComponent_o *Menu; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  Menu = DebugPanelRootComponent__createMenu(this, (const MethodInfo *)title);
  if ( !Menu )
    sub_1CE6958(0, v15);
  DebugMenuComponent__setInitDlg_44807024(Menu, title, dg, param, min, max, paramToStringDictionary, v16);
}


void DebugPanelRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E05FFB & 1) == 0 )
  {
    sub_1CE6700(&DebugPanelRootComponent___c_TypeInfo);
    byte_4E05FFB = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(DebugPanelRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DebugPanelRootComponent___c_TypeInfo->static_fields->__9 = (struct DebugPanelRootComponent___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)DebugPanelRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DebugPanelRootComponent___c___ctor(DebugPanelRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DebugPanelRootComponent___c___OpenBGSelectWindow_b__52_0(
        DebugPanelRootComponent___c_o *this,
        BattleBgEntity_o *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_o *v5; // x2

  if ( (byte_4E05FFC & 1) == 0 )
  {
    this = (DebugPanelRootComponent___c_o *)sub_1CE6700(&StringLiteral_1452/*":"*/);
    byte_4E05FFC = 1;
  }
  if ( !x )
    sub_1CE6958(this, x);
  v4 = System_Int32__ToString((int)x + 16, 0);
  v5 = System_Int32__ToString((int)x + 20, 0);
  return System_String__Concat_65161092(v4, (System_String_o *)StringLiteral_1452/*":"*/, v5, 0);
}


void DebugPanelRootComponent___c__DisplayClass53_0___ctor(
        DebugPanelRootComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugPanelRootComponent___c__DisplayClass53_0___OpenDeadAnimationSelectWindow_b__0(
        DebugPanelRootComponent___c__DisplayClass53_0_o *this,
        System_String_o *selected,
        bool submit,
        const MethodInfo *method)
{
  System_Text_RegularExpressions_Group_o *Item; // x0
  __int64 v8; // x1
  System_Text_RegularExpressions_Group_o *v9; // x20
  System_String_o *Value; // x0
  struct System_Action_int__o *onSelect; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E05FFD & 1) == 0 )
  {
    sub_1CE6700(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1CE6700(&StringLiteral_16237/*"^(\\d+)"*/);
    byte_4E05FFD = 1;
  }
  result = 0;
  if ( submit )
  {
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    Item = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match(
                                                       selected,
                                                       (System_String_o *)StringLiteral_16237/*"^(\\d+)"*/,
                                                       0);
    if ( !Item )
      goto LABEL_14;
    v9 = Item;
    if ( !System_Text_RegularExpressions_Group__get_Success(Item, 0) )
      return;
    Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const char *))v9->klass[1]._1.name)(
                                                       v9,
                                                       v9->klass[1]._1.namespaze);
    if ( !Item )
      goto LABEL_14;
    Item = System_Text_RegularExpressions_GroupCollection__get_Item(
             (System_Text_RegularExpressions_GroupCollection_o *)Item,
             1,
             0);
    if ( !Item )
      goto LABEL_14;
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
    Item = (System_Text_RegularExpressions_Group_o *)System_Int32__TryParse(Value, &result, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    onSelect = this->fields.onSelect;
    if ( !onSelect )
LABEL_14:
      sub_1CE6958(Item, v8);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onSelect->fields.invoke_impl)(
      onSelect->fields.method_code,
      (unsigned int)result,
      onSelect->fields.method);
  }
}


void DebugPanelRootComponent___c__DisplayClass56_0___ctor(
        DebugPanelRootComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DebugPanelRootComponent___c__DisplayClass56_0___OpenSetBattleValueWindow_b__0(
        DebugPanelRootComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  struct DebugPanelRootComponent_o *_4__this; // x8
  DebugPanelRootComponent___c__DisplayClass56_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (DebugPanelRootComponent___c__DisplayClass56_0_o *)_4__this->fields.debugInputBattleValueWindow) == 0)
    || (this = (DebugPanelRootComponent___c__DisplayClass56_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0)) == 0 )
  {
    sub_1CE6958(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.onSubmitCallback, 0);
}


void DebugPanelRootComponent_menuDelegate___ctor(
        DebugPanelRootComponent_menuDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B185AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B1856C;
}


System_IAsyncResult_o *DebugPanelRootComponent_menuDelegate__BeginInvoke(
        DebugPanelRootComponent_menuDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1CE66B4(this, &v5, callback, object);
}


void DebugPanelRootComponent_menuDelegate__EndInvoke(
        DebugPanelRootComponent_menuDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void DebugPanelRootComponent_menuDelegate__Invoke(
        DebugPanelRootComponent_menuDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void DebugPanelRootComponent_paramDelegate___ctor(
        DebugPanelRootComponent_paramDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B1866C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B18624;
}


System_IAsyncResult_o *DebugPanelRootComponent_paramDelegate__BeginInvoke(
        DebugPanelRootComponent_paramDelegate_o *this,
        int32_t param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = param;
  if ( (byte_4E05FF9 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    byte_4E05FF9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void DebugPanelRootComponent_paramDelegate__EndInvoke(
        DebugPanelRootComponent_paramDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void DebugPanelRootComponent_paramDelegate__Invoke(
        DebugPanelRootComponent_paramDelegate_o *this,
        int32_t param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    param,
    this->fields.method);
}


void DebugPanelRootComponent_paramStrDelegate___ctor(
        DebugPanelRootComponent_paramStrDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1B186F0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1B186D0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1B18688;
}


System_IAsyncResult_o *DebugPanelRootComponent_paramStrDelegate__BeginInvoke(
        DebugPanelRootComponent_paramStrDelegate_o *this,
        System_String_o *param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = param;
  return (System_IAsyncResult_o *)sub_1CE66B4(this, &v6, callback, object);
}


void DebugPanelRootComponent_paramStrDelegate__EndInvoke(
        DebugPanelRootComponent_paramStrDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void DebugPanelRootComponent_paramStrDelegate__Invoke(
        DebugPanelRootComponent_paramStrDelegate_o *this,
        System_String_o *param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    param,
    this->fields.method);
}


void DebugPanelRootComponent_paramtgrDelegate___ctor(
        DebugPanelRootComponent_paramtgrDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B18784;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B1872C;
}


System_IAsyncResult_o *DebugPanelRootComponent_paramtgrDelegate__BeginInvoke(
        DebugPanelRootComponent_paramtgrDelegate_o *this,
        int32_t param,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v11[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = param;
  v11[0] = flg;
  if ( (byte_4E05FFA & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    byte_4E05FFA = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v10, callback, object);
}


void DebugPanelRootComponent_paramtgrDelegate__EndInvoke(
        DebugPanelRootComponent_paramtgrDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void DebugPanelRootComponent_paramtgrDelegate__Invoke(
        DebugPanelRootComponent_paramtgrDelegate_o *this,
        int32_t param,
        bool flg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    param,
    flg,
    this->fields.method);
}


void DebugPanelRootComponent_tgrDelegate___ctor(
        DebugPanelRootComponent_tgrDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B18608;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B185C0;
}


System_IAsyncResult_o *DebugPanelRootComponent_tgrDelegate__BeginInvoke(
        DebugPanelRootComponent_tgrDelegate_o *this,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = flg;
  if ( (byte_4E05FF8 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4E05FF8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void DebugPanelRootComponent_tgrDelegate__EndInvoke(
        DebugPanelRootComponent_tgrDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void DebugPanelRootComponent_tgrDelegate__Invoke(
        DebugPanelRootComponent_tgrDelegate_o *this,
        bool flg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    flg,
    this->fields.method);
}