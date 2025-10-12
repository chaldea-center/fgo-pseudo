void SelectGrandServantComponent___ctor(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20

  if ( (byte_4C3268E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
    sub_1C32C20(&StringLiteral_5888/*"Effect/SelectGrandServant"*/);
    sub_1C32C20(&StringLiteral_17277/*"bit_select_grand_servant"*/);
    byte_4C3268E = 1;
  }
  this->fields.isAtTransition = 1;
  this->fields.figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_C0DB90;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
  this->fields.figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)v3;
  sub_1C32BC4(&this->fields.figureCollectDictionary, v3);
  v4 = StringLiteral_5888/*"Effect/SelectGrandServant"*/;
  this->fields.GrandServantSelectEffectPrefabFolderPath = (struct System_String_o *)StringLiteral_5888/*"Effect/SelectGrandServant"*/;
  sub_1C32BC4(&this->fields.GrandServantSelectEffectPrefabFolderPath, v4);
  v5 = StringLiteral_17277/*"bit_select_grand_servant"*/;
  this->fields.GrandServantSelectEffectPrefabName = (struct System_String_o *)StringLiteral_17277/*"bit_select_grand_servant"*/;
  sub_1C32BC4(&this->fields.GrandServantSelectEffectPrefabName, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
  this->fields.cachedIconList = (struct System_Collections_Generic_List_GrandServantIconComponent__o *)v6;
  sub_1C32BC4(&this->fields.cachedIconList, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SelectGrandServantComponent__Awake(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  ;
}


void SelectGrandServantComponent__CleanUpStandFigures(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *figureCollectDictionary; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x21
  UIStandFigureR_o *monitor; // x0
  UIStandFigureR_o *v7; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Coroutine_o *waitLoadCoroutine; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4C32678 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_StandFigureCollect___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C32C20(&StandFigureCamera_TypeInfo);
    byte_4C32678 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  memset(&v12, 0, sizeof(v12));
  figureCollectDictionary = this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_int__object__o *)figureCollectDictionary,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
  v12 = v10;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__) )
  {
    if ( !v12.fields._current.fields.value )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)v12.fields._current.fields.value,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    *(_OWORD *)&v11.fields._list = *(_OWORD *)&v10.fields._dictionary;
    v11.fields._current = v10.fields._current.fields.key;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v4 )
        break;
      current = v11.fields._current;
      if ( !v11.fields._current )
        sub_1C32E7C(v4);
      monitor = (UIStandFigureR_o *)v11.fields._current[1].monitor;
      if ( !monitor )
        sub_1C32E7C(0);
      UIStandFigureR__ReleaseBodyRenderTexture(monitor, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[1].monitor, 0, 0);
      v7 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v7 )
        sub_1C32E7C(0);
      UIStandFigureR__KillLoading(v7, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v12,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
  StandFigureManager__ReleaseCharaFigure(0);
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__ReleaseRenderTexturesForEffects(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)figureCollectDictionary & 1) != 0 )
  {
    if ( Instance )
    {
      StandFigureManager__Reboot((StandFigureManager_o *)Instance, 0);
      StandFigureManager__ResetCameraRenderState((StandFigureManager_o *)Instance, 0);
      goto LABEL_24;
    }
LABEL_28:
    sub_1C32E7C(figureCollectDictionary);
  }
LABEL_24:
  waitLoadCoroutine = this->fields.waitLoadCoroutine;
  if ( waitLoadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71209832((UnityEngine_MonoBehaviour_o *)this, waitLoadCoroutine, 0);
    this->fields.waitLoadCoroutine = 0;
    sub_1C32BC4(&this->fields.waitLoadCoroutine, 0);
  }
}


int32_t SelectGrandServantComponent__CompareUserServant(
        SelectGrandServantComponent_o *this,
        SelectGrandServantInfo_o *servantInfoA,
        SelectGrandServantInfo_o *servantInfoB,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  struct UserServantEntity_o *v7; // x20
  int32_t result; // w0
  int32_t lv; // w8
  int32_t v10; // w9
  int32_t SkillMaxCount; // w21
  int32_t CollectionNo; // w21
  __int128 v13; // q1
  __int128 v14; // q1
  int64_t v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-50h]
  int64_t v19; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4C3267E & 1) == 0 )
  {
    this = (SelectGrandServantComponent_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3267E = 1;
  }
  v19 = 0;
  if ( !servantInfoA
    || !servantInfoB
    || (UserServantEntity_k__BackingField = servantInfoB->fields._UserServantEntity_k__BackingField) == 0
    || (v7 = servantInfoA->fields._UserServantEntity_k__BackingField,
        this = (SelectGrandServantComponent_o *)UserServantEntity__getFriendshipRank(
                                                  UserServantEntity_k__BackingField,
                                                  0),
        !v7) )
  {
    sub_1C32E7C(this);
  }
  result = (_DWORD)this - UserServantEntity__getFriendshipRank(v7, 0);
  if ( !result )
  {
    lv = UserServantEntity_k__BackingField->fields.lv;
    v10 = v7->fields.lv;
    result = lv - v10;
    if ( lv == v10 )
    {
      SkillMaxCount = UserServantEntity__GetSkillMaxCount(UserServantEntity_k__BackingField, 0);
      result = SkillMaxCount - UserServantEntity__GetSkillMaxCount(v7, 0);
      if ( !result )
      {
        CollectionNo = UserServantEntity__getCollectionNo(v7, 0);
        result = CollectionNo - UserServantEntity__getCollectionNo(UserServantEntity_k__BackingField, 0);
        if ( !result )
        {
          v13 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
          *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v18.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v17 = v18;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v17, 0);
          v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v16.fields.fakeValue = v14;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v16, 0);
          return System_Int64__CompareTo_65032688((int64_t)&v19, v15, 0);
        }
      }
    }
  }
  return result;
}


void SelectGrandServantComponent__DestroycOnfirmServantDialog(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *confirmServantDialog; // x20
  UnityEngine_Component_o **p_confirmServantDialog; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C32684 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32684 = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_confirmServantDialog = (UnityEngine_Component_o **)&this->fields.confirmServantDialog;
  if ( UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    if ( !*p_confirmServantDialog )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_confirmServantDialog, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
  *p_confirmServantDialog = 0;
  sub_1C32BC4(p_confirmServantDialog, 0);
}


void SelectGrandServantComponent__DisplayFigureWithEffect(
        SelectGrandServantComponent_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *figureCollectDictionary; // x0
  _BOOL8 v6; // x0
  UnityEngine_Object_o *shinyInstance; // x20
  Il2CppObject *v8; // x19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4C3267B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StandFigureCamera_TypeInfo);
    byte_4C3267B = 1;
  }
  value = 0;
  memset(&i, 0, sizeof(i));
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          figureCollectDictionary,
          needNum,
          &value,
          (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
    return;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  for ( i = v9; ; BasicHelper__SetActiveSafely((UnityEngine_Component_o *)i.fields._current[1].monitor, 1, 0) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields._current )
      sub_1C32E7C(v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(shinyInstance, 0) )
    goto LABEL_16;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance;
  if ( !figureCollectDictionary
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 0, 0),
        (figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance) == 0) )
  {
LABEL_21:
    sub_1C32E7C(figureCollectDictionary);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 1, 0);
LABEL_16:
  v8 = value;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__SetupEffects((System_Collections_Generic_List_StandFigureCollect__o *)v8, 0);
}


void SelectGrandServantComponent__EndGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_Action_UserServantEntity__o *effectEndCallback; // x8

  SelectGrandServantComponent__ReleaseGrandServantSelectEffect(this, method);
  effectEndCallback = this->fields.effectEndCallback;
  if ( !effectEndCallback )
    sub_1C32E7C(v3);
  ((void (__fastcall *)(intptr_t, struct UserServantEntity_o *, intptr_t))effectEndCallback->fields.invoke_impl)(
    effectEndCallback->fields.method_code,
    this->fields.selectUserServantEntity,
    effectEndCallback->fields.method);
}


System_String_o *SelectGrandServantComponent__GetSelectGrandConfirmServantDialogName(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x19
  SelectGrandServantComponent___c_c *v5; // x8
  System_Func_object__bool__o *_9__63_0; // x20
  Il2CppObject *v7; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  struct System_Func_UserServantEntity__bool__o **p__9__63_0; // x0
  SelectGrandServantComponent___c_c *v10; // x8
  Il2CppObject *v11; // x21
  struct SelectGrandServantComponent___c_StaticFields *v12; // x0
  __int64 *v13; // x8

  if ( (byte_4C32683 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_UserServantEntity___);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_1__);
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_12673/*"SelectGrandConfirmServantDialog"*/);
    this = (SelectGrandServantComponent_o *)sub_1C32C20(&StringLiteral_12674/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/);
    byte_4C32683 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_29;
  if ( UserServantEntity__IsExtra1(userServantEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( this )
    {
      UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)this, 0);
      v5 = SelectGrandServantComponent___c_TypeInfo;
      if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
        v5 = SelectGrandServantComponent___c_TypeInfo;
      }
      _9__63_0 = (System_Func_object__bool__o *)v5->static_fields->__9__63_0;
      if ( !_9__63_0 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = SelectGrandServantComponent___c_TypeInfo;
        }
        v7 = (Il2CppObject *)v5->static_fields->__9;
        _9__63_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__63_0,
          v7,
          Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__,
          0);
        static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
        static_fields->__9__63_0 = (struct System_Func_UserServantEntity__bool__o *)_9__63_0;
        p__9__63_0 = &static_fields->__9__63_0;
LABEL_24:
        sub_1C32BC4(p__9__63_0, _9__63_0);
        goto LABEL_25;
      }
      goto LABEL_25;
    }
LABEL_29:
    sub_1C32E7C(this);
  }
  if ( !UserServantEntity__IsExtra2(userServantEntity, 0) )
  {
LABEL_27:
    v13 = &StringLiteral_12673/*"SelectGrandConfirmServantDialog"*/;
    return (System_String_o *)*v13;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
    goto LABEL_29;
  UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)this, 0);
  v10 = SelectGrandServantComponent___c_TypeInfo;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    v10 = SelectGrandServantComponent___c_TypeInfo;
  }
  _9__63_0 = (System_Func_object__bool__o *)v10->static_fields->__9__63_1;
  if ( !_9__63_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SelectGrandServantComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v10->static_fields->__9;
    _9__63_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__63_0,
      v11,
      Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_1__,
      0);
    v12 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    v12->__9__63_1 = (struct System_Func_UserServantEntity__bool__o *)_9__63_0;
    p__9__63_0 = &v12->__9__63_1;
    goto LABEL_24;
  }
LABEL_25:
  if ( !System_Linq_Enumerable__Any_object__51293756(
          (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
          (System_Func_TSource__bool__o *)_9__63_0,
          (const MethodInfo_30EAE3C *)Method_System_Linq_Enumerable_Any_UserServantEntity___) )
    goto LABEL_27;
  v13 = &StringLiteral_12674/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/;
  return (System_String_o *)*v13;
}


void SelectGrandServantComponent__LoadGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x20
  AssetLoader_LoadEndDataHandler_o *v4; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4C32687 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__);
    byte_4C32687 = 1;
  }
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  v4 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(GrandServantSelectEffectPrefabFolderPath, v4, 1, 0) )
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, v5);
}


void SelectGrandServantComponent__OnAfterGenerateFigure(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x20

  if ( (byte_4C3267A & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3267A = 1;
  }
  if ( this->fields.isAtTransition )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v4 )
      sub_1C32E7C(Instance);
    CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    this->fields.isAtTransition = 0;
  }
}


void SelectGrandServantComponent__OnCenterFinished(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  const MethodInfo *v4; // x2
  struct UICenterOnChild_o *centerChild; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *currentIcon; // x20
  struct GrandServantIconComponent_o **p_currentIcon; // x20
  const MethodInfo *v9; // x1
  struct GrandServantIconComponent_o *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_Action_object__o *v12; // x22
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4C32677 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (SelectGrandServantComponent_o *)sub_1C32C20(&Method_SelectGrandServantComponent__OnCenterFinished_b__50_0__);
    byte_4C32677 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_19;
  this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
  if ( !this )
    goto LABEL_19;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, cachedIconList->fields._size > 1, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(v2, 1, v4);
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_19;
  this = (SelectGrandServantComponent_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
  if ( v2->fields.isDragging )
    goto LABEL_11;
  currentIcon = (UnityEngine_Object_o *)v2->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, currentIcon, 0) )
  {
LABEL_11:
    p_currentIcon = &v2->fields.currentIcon;
    v2->fields.isDragging = 0;
    v2->fields.currentIcon = (struct GrandServantIconComponent_o *)Component_object;
    sub_1C32BC4(&v2->fields.currentIcon, Component_object);
    this = (SelectGrandServantComponent_o *)v2->fields.currentIcon;
    if ( this )
    {
      GrandServantIconComponent__OnSelected((GrandServantIconComponent_o *)this, v9);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v2->fields.glowEffect, 1, 0);
      this = (SelectGrandServantComponent_o *)v2->fields.glowEffect;
      if ( this )
      {
        NGUIGlow__UpdateTexture((NGUIGlow_o *)this, 0);
        v10 = v2->fields.currentIcon;
        if ( v10 )
        {
          this = (SelectGrandServantComponent_o *)v2->fields.decideButton;
          if ( this )
          {
            UICommonButton__SetButtonEnable((UICommonButton_o *)this, v10->fields._CanSelectGrand_k__BackingField, 1, 0);
            v11 = (System_Collections_Generic_List_object__o *)v2->fields.cachedIconList;
            v12 = (System_Action_object__o *)sub_1C32E6C(System_Action_GrandServantIconComponent__TypeInfo);
            System_Action_object____ctor(
              v12,
              (Il2CppObject *)v2,
              Method_SelectGrandServantComponent__OnCenterFinished_b__50_0__,
              0);
            if ( v11 )
            {
              System_Collections_Generic_List_object___ForEach(
                v11,
                (System_Action_T__o *)v12,
                (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
              this = (SelectGrandServantComponent_o *)v2->fields.figureRoot;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                if ( *p_currentIcon )
                {
                  SelectGrandServantComponent__SetFigure(
                    v2,
                    (*p_currentIcon)->fields._UserServantEntity_k__BackingField,
                    v13);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C32E7C(this);
  }
}


void SelectGrandServantComponent__OnClickBack(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C3267F & 1) == 0 )
  {
    sub_1C32C20(&Method_SelectGrandServantComponent_OnClickBack__);
    byte_4C3267F = 1;
  }
  v3 = Method_SelectGrandServantComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.onClickBackAction, 0);
}


void SelectGrandServantComponent__OnClickDecide(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *confirmServantDialog; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  AssetData_o *AssetStorage; // x20
  const MethodInfo *v7; // x1
  UserServantEntity_o *CurrentUserServantEntity; // x0
  const MethodInfo *v9; // x2
  System_String_o *SelectGrandConfirmServantDialogName; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x0
  SelectGrandConfirmServantDialog_o *v14; // x20
  GrandGraphEntity_o *grandGraphEntity; // x21
  const MethodInfo *v16; // x1
  UserServantEntity_o *v17; // x22
  SelectGrandConfirmServantDialog_ClickDelegate_o *v18; // x23

  if ( (byte_4C32682 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnClickDecide__);
    sub_1C32C20(&Method_SelectGrandServantComponent__OnClickDecide_b__62_0__);
    sub_1C32C20(&StringLiteral_7159/*"GrandServantList"*/);
    byte_4C32682 = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    v4 = Method_SelectGrandServantComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, 0);
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v7);
    SelectGrandConfirmServantDialogName = SelectGrandServantComponent__GetSelectGrandConfirmServantDialogName(
                                            (SelectGrandServantComponent_o *)CurrentUserServantEntity,
                                            CurrentUserServantEntity,
                                            v9);
    if ( !AssetStorage )
      goto LABEL_17;
    SelectGrandConfirmServantDialogName = (System_String_o *)AssetData__GetObject_object__51111776(
                                                               AssetStorage,
                                                               SelectGrandConfirmServantDialogName,
                                                               (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !SelectGrandConfirmServantDialogName )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)SelectGrandConfirmServantDialogName,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
    SelectGrandConfirmServantDialogName = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
    if ( !SelectGrandConfirmServantDialogName )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(
                  (UnityEngine_GameObject_o *)SelectGrandConfirmServantDialogName,
                  0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__51812484(
            Component_object,
            transform,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    this->fields.confirmServantDialog = (struct SelectGrandConfirmServantDialog_o *)v13;
    sub_1C32BC4(&this->fields.confirmServantDialog, v13);
    v14 = this->fields.confirmServantDialog;
    grandGraphEntity = this->fields.grandGraphEntity;
    v17 = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v16);
    v18 = (SelectGrandConfirmServantDialog_ClickDelegate_o *)sub_1C32E6C(SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    SelectGrandConfirmServantDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SelectGrandServantComponent__OnClickDecide_b__62_0__,
      0);
    if ( !v14 )
LABEL_17:
      sub_1C32E7C(SelectGrandConfirmServantDialogName);
    SelectGrandConfirmServantDialog__OpenConfirm(v14, grandGraphEntity, v17, v18, 0);
  }
}


void SelectGrandServantComponent__OnClickLeftArrow(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v10; // x8
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4C32681 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    this = (SelectGrandServantComponent_o *)sub_1C32C20(&Method_SelectGrandServantComponent_OnClickLeftArrow__);
    byte_4C32681 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_21;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        v6 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickLeftArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_379945C *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v9 = (_DWORD)this - 1;
          if ( (int)this - 1 < 0 )
          {
            v10 = v2->fields.cachedIconList;
            if ( !v10 )
              goto LABEL_21;
            v9 = v10->fields._size - 1;
          }
          SelectGrandServantComponent__ResetDisplay(v2, v8);
          this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
          if ( this )
          {
            centerChild = v2->fields.centerChild;
            this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v9,
                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
            if ( this )
            {
              this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( centerChild )
              {
                UICenterOnChild__CenterOn_49105576(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C32E7C(this);
  }
  v4 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickLeftArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
}


void SelectGrandServantComponent__OnClickRightArrow(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v9; // x8
  int32_t size; // w21
  int v11; // w20
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4C32680 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    this = (SelectGrandServantComponent_o *)sub_1C32C20(&Method_SelectGrandServantComponent_OnClickRightArrow__);
    byte_4C32680 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_19;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        v6 = Method_SelectGrandServantComponent_OnClickRightArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickRightArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_379945C *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v9 = v2->fields.cachedIconList;
          if ( v9 )
          {
            size = v9->fields._size;
            v11 = (int)this;
            SelectGrandServantComponent__ResetDisplay(v2, v8);
            this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
            if ( this )
            {
              centerChild = v2->fields.centerChild;
              this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        (v11 + 1) % size,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
              if ( this )
              {
                this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_49105576(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C32E7C(this);
  }
  v4 = Method_SelectGrandServantComponent_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent_OnClickRightArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
}


void SelectGrandServantComponent__OnDecideGrandServantSelect(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4C32686 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__);
    sub_1C32C20(&SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
    byte_4C32686 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = userServantEntity;
  sub_1C32BC4(&v5[1].monitor, userServantEntity);
  bitEffectRoot = this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(bitEffectRoot, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    v5,
    Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__,
    0);
  if ( !v9 )
LABEL_9:
    sub_1C32E7C(bitEffectRoot);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0);
}


void SelectGrandServantComponent__OnDisable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_auroraInstance; // x20
  UnityEngine_Object_o *auroraInstance; // x21
  UnityEngine_Object_o *v5; // x21
  struct UnityEngine_GameObject_o **p_shinyInstance; // x20
  UnityEngine_Object_o *shinyInstance; // x21
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceBack; // x20
  UnityEngine_Object_o *particleInstanceBack; // x21
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceFront; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_o *particleInstanceFront; // t1
  UnityEngine_Object_o *v15; // x20

  if ( (byte_4C3268C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3268C = 1;
  }
  SelectGrandServantComponent__CleanUpStandFigures(this, method);
  p_auroraInstance = &this->fields.auroraInstance;
  auroraInstance = (UnityEngine_Object_o *)this->fields.auroraInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(auroraInstance, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)*p_auroraInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v5, 0);
    *p_auroraInstance = 0;
    sub_1C32BC4(&this->fields.auroraInstance, 0);
  }
  p_shinyInstance = &this->fields.shinyInstance;
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shinyInstance, 0, 0) )
  {
    v8 = (UnityEngine_Object_o *)*p_shinyInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v8, 0);
    *p_shinyInstance = 0;
    sub_1C32BC4(&this->fields.shinyInstance, 0);
  }
  p_particleInstanceBack = &this->fields.particleInstanceBack;
  particleInstanceBack = (UnityEngine_Object_o *)this->fields.particleInstanceBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceBack, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)*p_particleInstanceBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v11, 0);
    *p_particleInstanceBack = 0;
    sub_1C32BC4(&this->fields.particleInstanceBack, 0);
  }
  particleInstanceFront = this->fields.particleInstanceFront;
  p_particleInstanceFront = &this->fields.particleInstanceFront;
  v13 = (UnityEngine_Object_o *)particleInstanceFront;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    v15 = (UnityEngine_Object_o *)*p_particleInstanceFront;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v15, 0);
    *p_particleInstanceFront = 0;
    sub_1C32BC4(p_particleInstanceFront, 0);
  }
}


void SelectGrandServantComponent__OnDragStarted(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  this->fields.isDragging = 1;
  SelectGrandServantComponent__ResetDisplay(this, method);
}


void SelectGrandServantComponent__OnEnable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  UnityEngine_Transform_o *Child; // x20
  Il2CppObject *auroraEffect; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x0

  if ( (byte_4C3268D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4C3268D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_19;
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)Instance,
                                   1,
                                   (const MethodInfo_30D4044 *)Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( ComponentInChildren_object )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
        if ( transform )
        {
          Child = UnityEngine_Transform__GetChild(transform, 0, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Child, 0, 0) )
          {
            auroraEffect = (Il2CppObject *)this->fields.auroraEffect;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v8 = UnityEngine_Object__Instantiate_object__51812484(
                   auroraEffect,
                   Child,
                   (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
            this->fields.auroraInstance = (struct UnityEngine_GameObject_o *)v8;
            sub_1C32BC4(&this->fields.auroraInstance, v8);
            v9 = UnityEngine_Object__Instantiate_object__51812484(
                   (Il2CppObject *)this->fields.shinyEffect,
                   Child,
                   (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
            this->fields.shinyInstance = (struct UnityEngine_GameObject_o *)v9;
            sub_1C32BC4(&this->fields.shinyInstance, v9);
            v10 = UnityEngine_Object__Instantiate_object__51812484(
                    (Il2CppObject *)this->fields.particleEffectFront,
                    Child,
                    (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
            this->fields.particleInstanceFront = (struct UnityEngine_GameObject_o *)v10;
            sub_1C32BC4(&this->fields.particleInstanceFront, v10);
            v11 = UnityEngine_Object__Instantiate_object__51812484(
                    (Il2CppObject *)this->fields.particleEffectBack,
                    Child,
                    (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
            this->fields.particleInstanceBack = (struct UnityEngine_GameObject_o *)v11;
            sub_1C32BC4(&this->fields.particleInstanceBack, v11);
          }
          return;
        }
      }
LABEL_19:
      sub_1C32E7C(transform);
    }
  }
}


void SelectGrandServantComponent__OnEndGrandSetupRequest(
        SelectGrandServantComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v7; // x0
  intptr_t v8; // x2
  System_Action_o *v9; // x21

  if ( (byte_4C32685 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_1C32C20(&Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C32685 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v8 = Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__;
  }
  else
  {
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v8 = Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__;
  }
  v9 = v7;
  System_Action___ctor(v7, (Il2CppObject *)this, v8, 0);
  if ( !confirmServantDialog )
LABEL_9:
    sub_1C32E7C(Instance);
  BaseDialog__SafeClose(confirmServantDialog, v9, 0);
}


void SelectGrandServantComponent__OnValidate(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C32673 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    byte_4C32673 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__get_isPlaying(0);
}


void SelectGrandServantComponent__PlayGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *grandServantSelectEffectAssetData; // x0
  Il2CppObject *Object_object__51111776; // x20
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v7; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x3
  struct SelectGrandServantEffectComponent_o *selectGrandServantEffectComponent; // x20
  System_Action_o *v11; // x21
  struct System_Action_o **p_endAct; // x20

  if ( (byte_4C32688 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_EndGrandServantSelectEffect__);
    byte_4C32688 = 1;
  }
  grandServantSelectEffectAssetData = this->fields.grandServantSelectEffectAssetData;
  if ( !grandServantSelectEffectAssetData )
    goto LABEL_7;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              grandServantSelectEffectAssetData,
                              this->fields.GrandServantSelectEffectPrefabName,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
  {
    bitEffectRoot = this->fields.bitEffectRoot;
    if ( !bitEffectRoot )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(bitEffectRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object__51812484(
           Object_object__51111776,
           transform,
           (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this->fields.grandServantSelectEffectObj = (struct UnityEngine_GameObject_o *)v7;
    sub_1C32BC4(&this->fields.grandServantSelectEffectObj, v7);
    bitEffectRoot = this->fields.grandServantSelectEffectObj;
    if ( !bitEffectRoot )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         bitEffectRoot,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    this->fields.selectGrandServantEffectComponent = (struct SelectGrandServantEffectComponent_o *)Component_object;
    sub_1C32BC4(&this->fields.selectGrandServantEffectComponent, Component_object);
    bitEffectRoot = (UnityEngine_GameObject_o *)this->fields.selectGrandServantEffectComponent;
    if ( !bitEffectRoot
      || (SelectGrandServantEffectComponent__Setup(
            (SelectGrandServantEffectComponent_o *)bitEffectRoot,
            this->fields.beforeUserServantEntity,
            this->fields.selectUserServantEntity,
            v9),
          selectGrandServantEffectComponent = this->fields.selectGrandServantEffectComponent,
          v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_SelectGrandServantComponent_EndGrandServantSelectEffect__,
            0),
          !selectGrandServantEffectComponent) )
    {
LABEL_15:
      sub_1C32E7C(bitEffectRoot);
    }
    selectGrandServantEffectComponent->fields.endAct = v11;
    p_endAct = &selectGrandServantEffectComponent->fields.endAct;
    *((_BYTE *)p_endAct - 8) = 1;
    sub_1C32BC4(p_endAct, v11);
  }
  else
  {
LABEL_7:
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, method);
  }
}


void SelectGrandServantComponent__RefreshDisplayAfterEndShowServantStatus(
        SelectGrandServantComponent_o *this,
        bool isModify,
        int32_t questId,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x24
  CommonUI_o *Instance; // x0
  UserServantEntity_o **v11; // x20
  SelectGrandServantComponent___c_c *v12; // x8
  CommonUI_o *v13; // x19
  System_Action_o *_9__71_0; // x20
  Il2CppObject *v15; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x21
  System_Func_object__bool__o *v18; // x22
  CommonUI_c *klass; // x8
  CommonUI_o *v20; // x21
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x21
  bool IsSelected_k__BackingField; // w10
  __int64 v26; // x8
  bool v27; // w24
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  GrandServantIconComponent_o *v35; // x0
  const MethodInfo *v36; // x2
  GrandServantIconComponent_o *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x2

  if ( (byte_4C3268A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    sub_1C32C20(&System_Func_GrandServantIconComponent__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__);
    sub_1C32C20(&SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    byte_4C3268A = 1;
  }
  v9 = (Il2CppObject *)sub_1C32E6C(SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_49;
  v9[1].klass = (Il2CppClass *)userServantEntity;
  v11 = (UserServantEntity_o **)&v9[1];
  sub_1C32BC4(&v9[1], userServantEntity);
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = SelectGrandServantComponent___c_TypeInfo;
    v13 = Instance;
    if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
      v12 = SelectGrandServantComponent___c_TypeInfo;
    }
    _9__71_0 = v12->static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = SelectGrandServantComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__71_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__71_0,
        v15,
        Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__,
        0);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
      static_fields->__9__71_0 = _9__71_0;
      Instance = (CommonUI_o *)sub_1C32BC4(&static_fields->__9__71_0, _9__71_0);
    }
    if ( v13 )
    {
      CommonUI__CloseServantStatusDialog(v13, _9__71_0, 0);
      return;
    }
LABEL_49:
    sub_1C32E7C(Instance);
  }
  if ( isModify )
  {
    cachedIconList = this->fields.cachedIconList;
    v18 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GrandServantIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      v9,
      Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      0);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Where_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)cachedIconList,
                               (System_Func_TSource__bool__o *)v18,
                               (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    if ( !Instance )
      goto LABEL_49;
    klass = Instance->klass;
    v20 = Instance;
    v21 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_GrandServantIconComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_19;
      }
      v23 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_19:
      v23 = sub_1C83438(Instance, System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(CommonUI_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1C32E7C(0);
    IsSelected_k__BackingField = 0;
    while ( 1 )
    {
      v26 = *(_QWORD *)v24;
      v27 = IsSelected_k__BackingField;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_27;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_27:
        v30 = sub_1C83438(v24, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v24, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v31 = *(_QWORD *)v24;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_GrandServantIconComponent__c **)v33 - 1) != System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_34;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_34:
        v34 = sub_1C83438(v24, System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, 0);
      }
      v35 = (GrandServantIconComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v24, *(_QWORD *)(v34 + 8));
      v37 = v35;
      if ( !v35 )
        sub_1C32E7C(0);
      GrandServantIconComponent__SetServant(v35, *v11, v36);
      IsSelected_k__BackingField = 1;
      if ( !v27 )
        IsSelected_k__BackingField = v37->fields._IsSelected_k__BackingField;
    }
    v38 = *(_QWORD *)v24;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_43;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_43:
      v41 = sub_1C83438(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v24, *(_QWORD *)(v41 + 8));
    if ( v27 )
      SelectGrandServantComponent__SetFigure(this, *v11, v42);
  }
}


void SelectGrandServantComponent__ReleaseGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x19

  if ( (byte_4C32689 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C32689 = 1;
  }
  this->fields.selectGrandServantEffectComponent = 0;
  sub_1C32BC4(&this->fields.selectGrandServantEffectComponent, 0);
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(GrandServantSelectEffectPrefabFolderPath, 0);
}


void SelectGrandServantComponent__ResetDisplay(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  void *currentIcon; // x0
  System_Collections_Generic_List_object__o *cachedIconList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C3267C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__);
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    byte_4C3267C = 1;
  }
  currentIcon = this->fields.currentIcon;
  if ( !currentIcon )
    goto LABEL_13;
  GrandServantIconComponent__OnUnselected((GrandServantIconComponent_o *)currentIcon, method);
  currentIcon = SelectGrandServantComponent___c_TypeInfo;
  cachedIconList = (System_Collections_Generic_List_object__o *)this->fields.cachedIconList;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    currentIcon = SelectGrandServantComponent___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)currentIcon + 23) + 16LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)currentIcon + 56) )
    {
      j_il2cpp_runtime_class_init_0(currentIcon);
      currentIcon = SelectGrandServantComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)currentIcon + 23);
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_GrandServantIconComponent__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__, 0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Action_GrandServantIconComponent__o *)v5;
    currentIcon = (void *)sub_1C32BC4(&static_fields->__9__56_0, v5);
  }
  if ( !cachedIconList
    || (System_Collections_Generic_List_object___ForEach(
          cachedIconList,
          (System_Action_T__o *)v5,
          (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.glowEffect, 0, 0),
        (currentIcon = this->fields.scrollView) == 0) )
  {
LABEL_13:
    sub_1C32E7C(currentIcon);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)currentIcon, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(this, 0, v8);
}


void SelectGrandServantComponent__SetBackButtonColliderEnable(
        SelectGrandServantComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *backButtonObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x19

  if ( (byte_4C3267D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3267D = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       backButtonObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
LABEL_16:
    sub_1C32E7C(backButtonObject);
  v7 = UnityEngine_GameObject__GetComponent_object_(
         backButtonObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v7, 0);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( v7 )
    {
      UIButtonColor__set_state((UIButtonColor_o *)v7, 0, 0);
      return;
    }
    goto LABEL_16;
  }
}


void SelectGrandServantComponent__SetFigure(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  void *FigureImageLimitCount; // x0
  SvtMultiPortraitMaster_o *v7; // x21
  __int64 v8; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  __int64 v10; // x24
  int32_t v11; // w22
  int32_t ServantImageLimitSealAfter; // w22
  int32_t v13; // w24
  int32_t FigureLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w0
  BalanceConfig_c *v16; // x8
  int32_t v17; // w23
  Il2CppObject *v18; // x0
  __int64 v19; // x24
  __int64 v20; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x23
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  __int64 v27; // x23
  __int64 v28; // x24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x21
  UIStandFigureR_o *v30; // x21
  __int64 v31; // x20
  __int64 v32; // x23
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x2
  int32_t size; // w20
  SelectGrandServantComponent_o *v43; // x0
  const MethodInfo *v44; // x2
  char v45; // w22
  System_Collections_Generic_List_object__o *v46; // x23
  int32_t v47; // w23
  SvtMultiPortraitEntity_o *v48; // x24
  int32_t v49; // w25
  UnityEngine_Component_o *v50; // x26
  UnityEngine_Object_o *gameObject; // x25
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x0
  struct System_Int32_array *commonPosition; // x8
  struct System_Int32_array *v60; // x8
  UnityEngine_GameObject_o *figureRoot; // x27
  int32_t v62; // w26
  System_Action_o *v63; // x28
  UnityEngine_Component_o *v64; // x25
  struct System_Int32_array *v65; // x8
  struct System_Int32_array *v66; // x8
  System_Collections_Generic_List_object__o *v67; // x26
  StandFigureCollect_o *v68; // x27
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  System_Collections_IEnumerator_o *MultiPortrait; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  UnityEngine_GameObject_o *v75; // x21
  __int64 v76; // x20
  __int64 v77; // x23
  int32_t v78; // w20
  System_Action_o *v79; // x23
  UIStandFigureR_o *RenderPrefabWithEffect; // x22
  System_Collections_Generic_List_object__o *v81; // x21
  StandFigureCollect_o *v82; // x20
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *v88; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *v89; // [xsp+48h] [xbp-78h] BYREF
  int32_t value[2]; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4C32679 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_StandFigureCollect___);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnAfterGenerateFigure__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C32C20(&StandFigureCollect_TypeInfo);
    sub_1C32C20(&StringLiteral_13034/*"StandFigureR({0})"*/);
    byte_4C32679 = 1;
  }
  *(_QWORD *)value = 0;
  entity = 0;
  v88 = 0;
  v89 = 0;
  SelectGrandServantComponent__CleanUpStandFigures(this, (const MethodInfo *)userServantEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  FigureImageLimitCount = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !userServantEntity )
    goto LABEL_83;
  v7 = (SvtMultiPortraitMaster_o *)FigureImageLimitCount;
  p_svtId = &userServantEntity->fields.svtId;
  v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v8;
  *(_QWORD *)&v92.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v92, 0);
  FigureImageLimitCount = (void *)UserServantEntity__getFigureImageLimitCount(userServantEntity, 0, 0);
  if ( !Master_object )
    goto LABEL_83;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v11,
                                 (int32_t)FigureImageLimitCount,
                                 0);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userServantEntity->fields.svtId, 0);
  FigureLimitCount = UserServantEntity__getFigureLimitCount(userServantEntity, 0, 0);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v13,
                                 FigureLimitCount,
                                 0);
  v16 = BalanceConfig_TypeInfo;
  v17 = ServantLimitCountSealAfter;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( v17 == v16->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v18 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v93.fields.currentCryptoKey = v20;
    *(_QWORD *)&v93.fields.fakeValue = v19;
    FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v93, 0);
    if ( !v21 )
      goto LABEL_83;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v21,
           &entity,
           (int32_t)FigureImageLimitCount,
           (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      FigureImageLimitCount = entity;
      if ( !entity )
        goto LABEL_83;
      if ( ServantEntity__IsContainOverwriteGrandGraphImageLimitCount((ServantEntity_o *)entity, &value[1], 0) )
      {
        v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v94.fields.currentCryptoKey = v23;
        *(_QWORD *)&v94.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v94, 0);
        v25 = value[1];
        v26 = v24;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        if ( ImageLimitCount__TryGetGrandImageLimitCount(v26, v25, value, 0) )
          ServantImageLimitSealAfter = value[0];
      }
    }
  }
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v28;
  *(_QWORD *)&v95.fields.fakeValue = v27;
  FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v95, 0);
  if ( !v7 )
    goto LABEL_83;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        v7,
                        (int32_t)FigureImageLimitCount,
                        ServantImageLimitSealAfter,
                        3,
                        0);
  GameObjectHelper__SetActiveSafely(this->fields.figureRoot, 1, 0);
  FigureImageLimitCount = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityListOrderBy, 0);
  if ( ((unsigned __int8)FigureImageLimitCount & 1) == 0 )
  {
    if ( EntityListOrderBy )
    {
      size = EntityListOrderBy->fields._size;
      FigureImageLimitCount = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
      if ( FigureImageLimitCount )
      {
        *((_DWORD *)FigureImageLimitCount + 18) = size;
        FigureImageLimitCount = this->fields.figureCollectDictionary;
        if ( FigureImageLimitCount )
        {
          v43 = (SelectGrandServantComponent_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
                                                   size,
                                                   &v89,
                                                   (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
          v45 = (char)v43;
          if ( ((unsigned __int8)v43 & 1) == 0 )
          {
            v46 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v46,
              (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
            v89 = (Il2CppObject *)v46;
            FigureImageLimitCount = this->fields.figureCollectDictionary;
            if ( !FigureImageLimitCount )
              goto LABEL_83;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
              size,
              (Il2CppObject *)v46,
              (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          }
          if ( EntityListOrderBy->fields._size < 1 )
          {
LABEL_72:
            MultiPortrait = SelectGrandServantComponent__WaitLoadMultiPortrait(
                              v43,
                              (System_Collections_Generic_List_StandFigureCollect__o *)v89,
                              v44);
            started = UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                        (UnityEngine_MonoBehaviour_o *)this,
                        MultiPortrait,
                        0);
            this->fields.waitLoadCoroutine = started;
            sub_1C32BC4(&this->fields.waitLoadCoroutine, started);
            goto LABEL_82;
          }
          v47 = 0;
          while ( 1 )
          {
            FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)EntityListOrderBy,
                                      v47,
                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
            if ( !FigureImageLimitCount )
              break;
            v48 = (SvtMultiPortraitEntity_o *)FigureImageLimitCount;
            v49 = *((_DWORD *)FigureImageLimitCount + 9) + 1;
            if ( (v45 & 1) != 0 )
            {
              FigureImageLimitCount = v89;
              if ( !v89 )
                break;
              FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)v89,
                                        v47,
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !FigureImageLimitCount )
                break;
              v50 = (UnityEngine_Component_o *)*((_QWORD *)FigureImageLimitCount + 3);
              BasicHelper__SetActiveSafely(v50, 1, 0);
              if ( !v50 )
                break;
              UIStandFigureR__SetCharacterForImageIdWithEffect(
                (UIStandFigureR_o *)v50,
                v48->fields.portraitImageId,
                8,
                0,
                0,
                v47,
                0,
                0,
                1,
                1,
                0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)v50, v49, 0);
              v50[5].fields.m_CachedPtr = (intptr_t)v48;
              sub_1C32BC4(&v50[5].fields, v48);
              gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v50, 0);
              v87.fields.currentCryptoKey = v48->fields.portraitImageId;
              v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v52, v53, v54, v55, v56, v57);
              FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_13034/*"StandFigureR({0})"*/, v58, 0);
              if ( !gameObject )
                break;
              UnityEngine_Object__set_name(gameObject, (System_String_o *)FigureImageLimitCount, 0);
              commonPosition = v48->fields.commonPosition;
              if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
              {
                FigureImageLimitCount = UnityEngine_Component__get_gameObject(v50, 0);
                v60 = v48->fields.commonPosition;
                if ( !v60 )
                  break;
                if ( LODWORD(v60->max_length) < 2 )
                  goto LABEL_84;
                GameObjectExtensions__SetLocalPosition_36036760(
                  (UnityEngine_GameObject_o *)FigureImageLimitCount,
                  (float)v60->m_Items[0],
                  (float)v60->m_Items[1],
                  0);
              }
            }
            else
            {
              figureRoot = this->fields.figureRoot;
              v62 = *((_DWORD *)FigureImageLimitCount + 8);
              if ( v47 == EntityListOrderBy->fields._size - 1 )
              {
                v63 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(
                  v63,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0);
              }
              else
              {
                v63 = 0;
              }
              FigureImageLimitCount = StandFigureManager__CreatePrefabForImageIdWithEffect(
                                        figureRoot,
                                        v62,
                                        8,
                                        0,
                                        v49,
                                        v47,
                                        v63,
                                        0,
                                        -1,
                                        0,
                                        0,
                                        1,
                                        0);
              if ( !FigureImageLimitCount )
                break;
              v64 = (UnityEngine_Component_o *)FigureImageLimitCount;
              *((_QWORD *)FigureImageLimitCount + 17) = v48;
              sub_1C32BC4((char *)FigureImageLimitCount + 136, v48);
              v65 = v48->fields.commonPosition;
              if ( v65 && SLODWORD(v65->max_length) >= 2 )
              {
                FigureImageLimitCount = UnityEngine_Component__get_gameObject(v64, 0);
                v66 = v48->fields.commonPosition;
                if ( !v66 )
                  break;
                if ( LODWORD(v66->max_length) < 2 )
LABEL_84:
                  sub_1C32E84(FigureImageLimitCount);
                GameObjectExtensions__SetLocalPosition_36036760(
                  (UnityEngine_GameObject_o *)FigureImageLimitCount,
                  (float)v66->m_Items[0],
                  (float)v66->m_Items[1],
                  0);
              }
              v67 = (System_Collections_Generic_List_object__o *)v89;
              v68 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
              StandFigureCollect___ctor(v68, v48, (UIStandFigureR_o *)v64, 0);
              if ( !v67 )
                break;
              items = v67->fields._items;
              v70 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
              ++v67->fields._version;
              if ( !items )
                break;
              v71 = v67->fields._size;
              if ( (unsigned int)v71 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v67,
                  (Il2CppObject *)v68,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v72 = &items->obj.klass + v71;
                v67->fields._size = v71 + 1;
                v72[4] = (Il2CppClass *)v68;
                v43 = (SelectGrandServantComponent_o *)sub_1C32BC4(v72 + 4, v68);
              }
            }
            if ( ++v47 >= EntityListOrderBy->fields._size )
              goto LABEL_72;
          }
        }
      }
    }
LABEL_83:
    sub_1C32E7C(FigureImageLimitCount);
  }
  FigureImageLimitCount = this->fields.figureCollectDictionary;
  if ( !FigureImageLimitCount )
    goto LABEL_83;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
          1,
          &v88,
          (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
  {
    v75 = this->fields.figureRoot;
    v77 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v76 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v97.fields.currentCryptoKey = v77;
    *(_QWORD *)&v97.fields.fakeValue = v76;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v97, 0);
    v79 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v79, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0);
    RenderPrefabWithEffect = StandFigureManager__CreateRenderPrefabWithEffect(
                               v75,
                               v78,
                               ServantImageLimitSealAfter,
                               8,
                               0,
                               1,
                               v79,
                               0,
                               -1,
                               0,
                               0);
    v81 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v81,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    v82 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v82, 0, RenderPrefabWithEffect, 0);
    if ( v81 )
    {
      v83 = v81->fields._items;
      v84 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v81->fields._version;
      if ( v83 )
      {
        v85 = v81->fields._size;
        if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            (Il2CppObject *)v82,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &v83->obj.klass + v85;
          v81->fields._size = v85 + 1;
          v86[4] = (Il2CppClass *)v82;
          sub_1C32BC4(v86 + 4, v82);
        }
        v88 = (Il2CppObject *)v81;
        FigureImageLimitCount = this->fields.figureCollectDictionary;
        if ( FigureImageLimitCount )
        {
          size = 1;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
            1,
            (Il2CppObject *)v81,
            (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          goto LABEL_82;
        }
      }
    }
    goto LABEL_83;
  }
  FigureImageLimitCount = System_Linq_Enumerable__First_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)v88,
                            (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_StandFigureCollect___);
  if ( !FigureImageLimitCount )
    goto LABEL_83;
  v30 = (UIStandFigureR_o *)*((_QWORD *)FigureImageLimitCount + 3);
  v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v32;
  *(_QWORD *)&v96.fields.fakeValue = v31;
  FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v96, 0);
  if ( !v30 )
    goto LABEL_83;
  UIStandFigureR__SetCharacterWithEffect(
    v30,
    (int32_t)FigureImageLimitCount,
    ServantImageLimitSealAfter,
    8,
    0,
    0,
    0.0,
    0,
    0,
    0);
  UIStandFigureR__SetDepth(v30, 1, 0);
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
  v87 = *p_svtId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          &v87,
                          v34,
                          v35,
                          v36,
                          v37,
                          v38,
                          v39);
  FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_13034/*"StandFigureR({0})"*/, v40, 0);
  if ( !v33 )
    goto LABEL_83;
  UnityEngine_Object__set_name(v33, (System_String_o *)FigureImageLimitCount, 0);
  size = 1;
LABEL_82:
  SelectGrandServantComponent__DisplayFigureWithEffect(this, size, v41);
}


void SelectGrandServantComponent__SetUp(
        SelectGrandServantComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        System_Action_o *onClickBack,
        System_Action_UserServantEntity__o *onDecideGrand,
        const MethodInfo *method)
{
  System_Action_object__o *v11; // x23
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  StandFigureCamera_c *v14; // x0
  struct UnityEngine_Color_o figureRenderGradientColor; // [xsp+0h] [xbp-60h]

  if ( (byte_4C32674 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_UserServantEntity__TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnDecideGrandServantSelect__);
    sub_1C32C20(&StandFigureCamera_TypeInfo);
    byte_4C32674 = 1;
  }
  this->fields.onClickBackAction = onClickBack;
  sub_1C32BC4(&this->fields.onClickBackAction, onClickBack);
  v11 = (System_Action_object__o *)sub_1C32E6C(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDecideGrandServantSelect__,
    0);
  this->fields.onDecideGrandAction = (struct System_Action_UserServantEntity__o *)v11;
  sub_1C32BC4(&this->fields.onDecideGrandAction, v11);
  this->fields.effectEndCallback = onDecideGrand;
  sub_1C32BC4(&this->fields.effectEndCallback, onDecideGrand);
  this->fields.selectUserServantEntity = 0;
  sub_1C32BC4(&this->fields.selectUserServantEntity, 0);
  this->fields.beforeUserServantEntity = 0;
  sub_1C32BC4(&this->fields.beforeUserServantEntity, 0);
  this->fields.grandGraphEntity = grandGraphEntity;
  sub_1C32BC4(&this->fields.grandGraphEntity, grandGraphEntity);
  SelectGrandServantComponent__SetUpServantInfo(this, servantInfos, v12);
  SelectGrandServantComponent__SetUpUI(this, v13);
  v14 = StandFigureCamera_TypeInfo;
  figureRenderGradientColor = this->fields.figureRenderGradientColor;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v14 = StandFigureCamera_TypeInfo;
  }
  v14->static_fields->figureRenderGradientColor = figureRenderGradientColor;
}


void SelectGrandServantComponent__SetUpServantInfo(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        const MethodInfo *method)
{
  System_Comparison_T__o *v5; // x21
  Il2CppObject *Item; // x0
  SelectGrandServantComponent___c_c *v7; // x0
  System_Func_object__int__o *_9__49_0; // x21
  Il2CppObject *v9; // x22
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  Il2CppObject *v16; // x1
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_object__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  void *monitor; // x8
  int32_t minimumRequiredElementNum; // w9
  Il2CppObject *v31; // x20
  int v32; // w25
  float v33; // s8
  float v34; // s8
  unsigned int v35; // w9
  unsigned int v36; // w8
  int v37; // w29
  SelectGrandServantInfo_o *v38; // x22
  Il2CppObject *grandServantIconComponent; // x21
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v41; // x21
  System_Action_int__o *v42; // x23
  System_Action_T1__T2__T3__o *v43; // x24
  const MethodInfo *v44; // x5
  Il2CppClass *klass; // x8
  _QWORD *v46; // x9
  __int64 monitor_low; // x10
  __int64 v48; // x8
  unsigned int v49; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *v52; // x0
  Il2CppObject *v53; // x0
  struct UICenterOnChild_o *centerChild; // x20
  _QWORD *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v57; // x22
  System_Delegate_o *v58; // x0
  System_Delegate_o *v59; // x8
  SpringPanel_OnFinished_c *v60; // x1
  struct UIScrollView_o *scrollView; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v63; // x22
  System_Delegate_o *v64; // x0
  UIScrollView_OnDragNotification_c *v65; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8

  if ( (byte_4C32676 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&System_Action_bool__int__UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Comparison_SelectGrandServantInfo__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    sub_1C32C20(&System_Func_SelectGrandServantInfo__int__TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C32C20(&SpringPanel_OnFinished_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_CompareUserServant__);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnCenterFinished__);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnDragStarted__);
    sub_1C32C20(&Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__);
    sub_1C32C20(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__SetUpServantInfo_b__49_0__);
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    byte_4C32676 = 1;
  }
  v5 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_SelectGrandServantInfo__TypeInfo);
  System_Comparison_object____ctor(v5, (Il2CppObject *)this, Method_SelectGrandServantComponent_CompareUserServant__, 0);
  if ( !servantInfos )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)servantInfos,
    v5,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
  v7 = SelectGrandServantComponent___c_TypeInfo;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    v7 = SelectGrandServantComponent___c_TypeInfo;
  }
  _9__49_0 = (System_Func_object__int__o *)v7->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SelectGrandServantComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__49_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__49_0, v9, Method_SelectGrandServantComponent___c__SetUpServantInfo_b__49_0__, 0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Func_SelectGrandServantInfo__int__o *)_9__49_0;
    sub_1C32BC4(&static_fields->__9__49_0, _9__49_0);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfos,
                                                               (System_Func_TSource__TKey__o *)_9__49_0,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
  v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v11,
                                                       (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  if ( !v12 )
    goto LABEL_71;
  if ( v12->fields._size >= 1 )
  {
    v15 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v15,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
      v16 = Item;
      if ( !v15 || (v15 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_71;
        items = v13->fields._items;
        v22 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_71;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v24 = v22[4];
          v25 = v13;
          goto LABEL_26;
        }
        v20 = &items->obj.klass + size;
        v13->fields._size = size + 1;
      }
      else
      {
        if ( !v14 )
          goto LABEL_71;
        v17 = v14->fields._items;
        v18 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v14->fields._version;
        if ( !v17 )
          goto LABEL_71;
        v19 = v14->fields._size;
        if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
        {
          v24 = v18[4];
          v25 = v14;
LABEL_26:
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            v16,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v24 + 192) + 112LL));
          continue;
        }
        v20 = &v17->obj.klass + v19;
        v14->fields._size = v19 + 1;
      }
      v20[4] = (Il2CppClass *)v16;
      sub_1C32BC4(v20 + 4, v16);
    }
    while ( ++v15 < v12->fields._size );
  }
  v26 = System_Linq_Enumerable__AsEnumerable_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_30EB9A0 *)Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
  v27 = System_Linq_Enumerable__Reverse_object_(
          v26,
          (const MethodInfo_310DC30 *)Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
  v28 = System_Linq_Enumerable__Concat_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          v27,
          (const MethodInfo_30F9DF8 *)Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
  Item = (Il2CppObject *)System_Linq_Enumerable__ToArray_object_(
                           v28,
                           (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
  if ( !Item )
LABEL_71:
    sub_1C32E7C(Item);
  monitor = Item[1].monitor;
  minimumRequiredElementNum = this->fields.minimumRequiredElementNum;
  v31 = Item;
  v32 = (int)monitor;
  if ( minimumRequiredElementNum > (int)monitor && (int)monitor > 1 )
  {
    v33 = (float)minimumRequiredElementNum;
    if ( !byte_4C31A98 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C31A98 = 1;
    }
    v34 = v33 / (float)v32;
    Item = (Il2CppObject *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    monitor = v31[1].monitor;
    v35 = vcvtps_s32_f32(v34);
    if ( ceilf(v34) == INFINITY )
      v35 = 0x80000000;
    v32 = v35 * (_DWORD)monitor;
  }
  if ( v32 >= 1 )
  {
    if ( !(_DWORD)monitor )
LABEL_52:
      sub_1C32E84(Item);
    v36 = 0;
    v37 = 1;
    while ( 1 )
    {
      Item = (Il2CppObject *)this->fields.wrapContent;
      if ( !Item )
        goto LABEL_71;
      v38 = (SelectGrandServantInfo_o *)*((_QWORD *)&v31[2].klass + v36);
      grandServantIconComponent = (Il2CppObject *)this->fields.grandServantIconComponent;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__Instantiate_object__51812484(
              grandServantIconComponent,
              transform,
              (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v41, 1, 0);
      v42 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v42,
        (Il2CppObject *)this,
        (intptr_t)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__,
        0);
      v43 = (System_Action_T1__T2__T3__o *)sub_1C32E6C(System_Action_bool__int__UserServantEntity__TypeInfo);
      System_Action_bool__int__object____ctor(
        v43,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__,
        0);
      if ( !v41 )
        goto LABEL_71;
      GrandServantIconComponent__Init(
        (GrandServantIconComponent_o *)v41,
        v38,
        v37 - 1,
        v42,
        (System_Action_bool__int__UserServantEntity__o *)v43,
        v44);
      Item = (Il2CppObject *)this->fields.cachedIconList;
      if ( !Item )
        goto LABEL_71;
      klass = Item[1].klass;
      v46 = Method_System_Collections_Generic_List_GrandServantIconComponent__Add__;
      ++HIDWORD(Item[1].monitor);
      if ( !klass )
        goto LABEL_71;
      monitor_low = SLODWORD(Item[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v41,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = (__int64)klass + 8 * monitor_low;
        LODWORD(Item[1].monitor) = monitor_low + 1;
        *(_QWORD *)(v48 + 32) = v41;
        Item = (Il2CppObject *)sub_1C32BC4(v48 + 32, v41);
      }
      if ( v32 == v37 )
        break;
      v49 = (unsigned int)v31[1].monitor;
      v36 = v37 % (int)v49;
      ++v37;
      if ( v36 >= v49 )
        goto LABEL_52;
    }
  }
  Item = (Il2CppObject *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___);
  this->fields.springPanel = (struct FixedSpringPanel_o *)Component_object;
  sub_1C32BC4(&this->fields.springPanel, Component_object);
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_71;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
  v53 = GameObjectExtensions__SafeGetComponent_object_(
          v52,
          (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
  this->fields.centerChild = (struct UICenterOnChild_o *)v53;
  Item = (Il2CppObject *)sub_1C32BC4(&this->fields.centerChild, v53);
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_71;
  onFinished = (System_Delegate_o *)centerChild->fields.onFinished;
  p_onFinished = &centerChild->fields.onFinished;
  v57 = (SpringPanel_OnFinished_o *)sub_1C32E6C(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v57, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnCenterFinished__, 0);
  v58 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v57, 0);
  v59 = v58;
  if ( v58 )
  {
    v60 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v58->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_66;
    *p_onFinished = v58;
    if ( (SpringPanel_OnFinished_c *)v58->klass != v60 )
      goto LABEL_66;
  }
  else
  {
    *p_onFinished = 0;
  }
  sub_1C32BC4(p_onFinished, v58);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.wrapContent, 1, 0);
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_71;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)Item, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_71;
  onDragStarted = (System_Delegate_o *)scrollView->fields.onDragStarted;
  p_onFinished = &scrollView->fields.onDragStarted;
  v63 = (UIScrollView_OnDragNotification_o *)sub_1C32E6C(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v63,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDragStarted__,
    0);
  v64 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v63, 0);
  v59 = v64;
  if ( !v64 )
    goto LABEL_67;
  v65 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v64->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v64, (UIScrollView_OnDragNotification_c *)v64->klass != v65) )
  {
LABEL_66:
    sub_1C3313C(v59);
LABEL_67:
    *p_onFinished = v59;
  }
  Item = (Il2CppObject *)sub_1C32BC4(p_onFinished, v59);
  cachedIconList = this->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_71;
  Item = (Il2CppObject *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_71;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, cachedIconList->fields._size > 1, 0);
}


void SelectGrandServantComponent__SetUpUI(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UILabel_o *headerMessageLabel; // x20
  System_String_o *bitEffectRoot; // x0
  UISprite_o *headerMessageBgSprite; // x20
  struct UISprite_array *arrowSprite; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  UISprite_o *v9; // x20
  struct UICommonButton_o *decideButton; // x8
  unsigned __int128 v11; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C32675 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_411/*"#606060"*/);
    sub_1C32C20(&StringLiteral_20548/*"img_selected_frame"*/);
    sub_1C32C20(&StringLiteral_9389/*"Name_BG_Gradation"*/);
    sub_1C32C20(&StringLiteral_11536/*"SELECT_GRAND_HEADER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_20667/*"img_txt_grand_class"*/);
    sub_1C32C20(&StringLiteral_20294/*"img_arrow"*/);
    byte_4C32675 = 1;
  }
  v11 = 0u;
  AndroidBackKeyManager__AddBackKeyTarget(this->fields.backButtonObject, 0);
  headerMessageLabel = this->fields.headerMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bitEffectRoot = LocalizationManager__Get((System_String_o *)StringLiteral_11536/*"SELECT_GRAND_HEADER_MESSAGE"*/, 0);
  if ( !headerMessageLabel )
    goto LABEL_20;
  UILabel__set_text(headerMessageLabel, bitEffectRoot, 0);
  headerMessageBgSprite = this->fields.headerMessageBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(headerMessageBgSprite, (System_String_o *)StringLiteral_20667/*"img_txt_grand_class"*/, 0);
  bitEffectRoot = (System_String_o *)this->fields.headerMessageBgSprite;
  if ( !bitEffectRoot )
    goto LABEL_20;
  ((void (__fastcall *)(System_String_o *, void *))bitEffectRoot->klass[1]._1.generic_class)(
    bitEffectRoot,
    bitEffectRoot->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetGrandServantListImage(this->fields.nameBgSprite, (System_String_o *)StringLiteral_9389/*"Name_BG_Gradation"*/, 0);
  bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                       this->fields.glowSprite,
                                       (System_String_o *)StringLiteral_20548/*"img_selected_frame"*/,
                                       0);
  arrowSprite = this->fields.arrowSprite;
  if ( !arrowSprite )
    goto LABEL_20;
  max_length = arrowSprite->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(bitEffectRoot);
      v9 = arrowSprite->m_Items[v8];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                           v9,
                                           (System_String_o *)StringLiteral_20294/*"img_arrow"*/,
                                           0);
      LODWORD(max_length) = arrowSprite->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  bitEffectRoot = (System_String_o *)this->fields.bitEffectRoot;
  if ( !bitEffectRoot
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitEffectRoot, 0, 0),
        bitEffectRoot = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             (System_String_o *)StringLiteral_411/*"#606060"*/,
                                             (UnityEngine_Color_o *)&v11,
                                             0),
        (decideButton = this->fields.decideButton) == 0) )
  {
LABEL_20:
    sub_1C32E7C(bitEffectRoot);
  }
  decideButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v11;
}


System_Collections_IEnumerator_o *SelectGrandServantComponent__WaitLoadMultiPortrait(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  __int64 v4; // x20

  if ( (byte_4C3268B & 1) == 0 )
  {
    sub_1C32C20(&SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
    byte_4C3268B = 1;
  }
  v4 = sub_1C32E6C(SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = collectList;
  sub_1C32BC4(v4 + 32, collectList);
  return (System_Collections_IEnumerator_o *)v4;
}


void SelectGrandServantComponent___LoadGrandServantSelectEffect_b__67_0(
        SelectGrandServantComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.grandServantSelectEffectAssetData = assetData;
  sub_1C32BC4(&this->fields.grandServantSelectEffectAssetData, assetData);
  SelectGrandServantComponent__PlayGrandServantSelectEffect(this, v4);
}


void SelectGrandServantComponent___OnCenterFinished_b__50_0(
        SelectGrandServantComponent_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentIcon; // x0
  const MethodInfo *v5; // x2

  currentIcon = (UnityEngine_Component_o *)this->fields.currentIcon;
  if ( !currentIcon
    || (currentIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentIcon, 0), !elm) )
  {
    sub_1C32E7C(currentIcon);
  }
  GrandServantIconComponent__ApplyOffset(elm, (UnityEngine_Transform_o *)currentIcon, v5);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent___OnClickDecide_b__62_0(
        SelectGrandServantComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserServantEntity_o *CurrentUserServantEntity; // x20
  UserServantEntity_o *v6; // x21
  int64_t Instance; // x0
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x1
  struct GrandGraphEntity_o *grandGraphEntity; // x8
  int32_t id; // w21
  SetupGrandServantRequest_o *v12; // x20
  __int128 v13; // q1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_4C32690 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_1C32C20(&Method_SelectGrandServantComponent_OnEndGrandSetupRequest__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&UserServantEntity_TypeInfo);
    byte_4C32690 = 1;
  }
  if ( isDecide )
  {
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(
                                 this,
                                 (const MethodInfo *)isDecide);
    v6 = (UserServantEntity_o *)sub_1C32E6C(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_43055416(v6, CurrentUserServantEntity, 0);
    this->fields.beforeUserServantEntity = v6;
    sub_1C32BC4(&this->fields.beforeUserServantEntity, v6);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_OnEndGrandSetupRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager__getRequest_object_(
                            v8,
                            (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
      grandGraphEntity = this->fields.grandGraphEntity;
      if ( grandGraphEntity )
      {
        id = grandGraphEntity->fields.id;
        v12 = (SetupGrandServantRequest_o *)Instance;
        Instance = (int64_t)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v9);
        if ( Instance )
        {
          v13 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v17.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v17;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v16, 0);
          if ( v12 )
          {
            SetupGrandServantRequest__beginRequest(v12, id, Instance, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C32E7C(Instance);
  }
  confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__, 0);
  if ( !confirmServantDialog )
    goto LABEL_15;
  BaseDialog__SafeClose(confirmServantDialog, v15, 0);
}


void SelectGrandServantComponent___OnEndGrandSetupRequest_b__65_0(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *onDecideGrandAction; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *CurrentUserServantEntity; // x1

  if ( (byte_4C32691 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_UserServantEntity___);
    byte_4C32691 = 1;
  }
  SelectGrandServantComponent__DestroycOnfirmServantDialog(this, method);
  onDecideGrandAction = (System_Action_T__o *)this->fields.onDecideGrandAction;
  CurrentUserServantEntity = (Il2CppObject *)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v4);
  ActionExtensions__Call_object_(
    onDecideGrandAction,
    CurrentUserServantEntity,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_UserServantEntity___);
}


void SelectGrandServantComponent___SetUpServantInfo_g__OnClickIcon_49_1(
        SelectGrandServantComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x21
  UIScrollView_o *scrollView; // x0
  struct GrandServantIconComponent_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  UICenterOnChild_o *centerChild; // x20

  if ( (byte_4C3268F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__);
    byte_4C3268F = 1;
  }
  if ( !this->fields.isDragging )
  {
    currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    scrollView = (UIScrollView_o *)UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
    if ( ((unsigned __int8)scrollView & 1) != 0 )
    {
      v7 = this->fields.currentIcon;
      if ( !v7 )
        goto LABEL_18;
      if ( v7->fields._Index_k__BackingField == index )
        return;
    }
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__Press(scrollView, 0, 0);
      scrollView = this->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0);
        v8 = Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C32C38(Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_49_1__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
        SelectGrandServantComponent__ResetDisplay(this, v10);
        scrollView = (UIScrollView_o *)this->fields.cachedIconList;
        if ( scrollView )
        {
          centerChild = this->fields.centerChild;
          scrollView = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)scrollView,
                                           index,
                                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
          if ( scrollView )
          {
            scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)scrollView,
                                             0);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_49105576(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(scrollView);
  }
}


UserServantEntity_o *SelectGrandServantComponent__get_CurrentUserServantEntity(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x20
  bool v4; // w8
  UserServantEntity_o *result; // x0
  struct GrandServantIconComponent_o *v6; // x8

  if ( (byte_4C32672 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32672 = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
  result = 0;
  if ( v4 )
  {
    v6 = this->fields.currentIcon;
    if ( !v6 )
      sub_1C32E7C(0);
    return v6->fields._UserServantEntity_k__BackingField;
  }
  return result;
}


void SelectGrandServantComponent__WaitLoadMultiPortrait_d__73___ctor(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__MoveNext(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *collectList; // x1
  Il2CppObject *v6; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SelectGrandServantComponent___c__DisplayClass73_0_o *_8__1; // x8
  int32_t v12; // w20

  v2 = this;
  if ( (byte_4C32696 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__);
    sub_1C32C20(&SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C32696 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _8__1 = v2->fields.__8__1;
    v2->fields.__1__state = -1;
    if ( _8__1 )
    {
      v12 = 0;
      do
      {
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)_8__1->fields.collectList;
        if ( !this )
          break;
        if ( v12 >= SLODWORD(this->fields.__2__current) )
          return 0;
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)System_Collections_Generic_List_object___get_Item(
                                                                               (System_Collections_Generic_List_object__o *)this,
                                                                               v12,
                                                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)this->fields.__2__current;
        if ( !this )
          break;
        UIStandFigureR__EnqueueRenderInfo((UIStandFigureR_o *)this, 0);
        _8__1 = v2->fields.__8__1;
        ++v12;
      }
      while ( _8__1 );
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C32E6C(SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct SelectGrandServantComponent___c__DisplayClass73_0_o *)v4;
    sub_1C32BC4(&v2->fields.__8__1, v4);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)v2->fields.__8__1;
    if ( this )
    {
      collectList = v2->fields.collectList;
      *(_QWORD *)&this->fields.__1__state = collectList;
      sub_1C32BC4(&this->fields, collectList);
      v6 = (Il2CppObject *)v2->fields.__8__1;
      v7 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v6,
        Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      v2->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &v2->fields.__2__current;
      sub_1C32BC4(p__2__current, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_14:
    sub_1C32E7C(this);
  }
  return 0;
}


Il2CppObject *SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_IEnumerator_Reset(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_IEnumerator_get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_IDisposable_Dispose(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C32692 & 1) == 0 )
  {
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    byte_4C32692 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SelectGrandServantComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantComponent___c_o *)v1;
  sub_1C32BC4(SelectGrandServantComponent___c_TypeInfo->static_fields, v1);
}


void SelectGrandServantComponent___c___ctor(SelectGrandServantComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c___GetSelectGrandConfirmServantDialogName_b__63_0(
        SelectGrandServantComponent___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return UserServantEntity__IsExtra1(e, 0);
}


bool SelectGrandServantComponent___c___GetSelectGrandConfirmServantDialogName_b__63_1(
        SelectGrandServantComponent___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return UserServantEntity__IsExtra2(e, 0);
}


void SelectGrandServantComponent___c___RefreshDisplayAfterEndShowServantStatus_b__71_0(
        SelectGrandServantComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32693 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32693 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void SelectGrandServantComponent___c___ResetDisplay_b__56_0(
        SelectGrandServantComponent___c_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm )
    sub_1C32E7C(this);
  GrandServantIconComponent__ResetOffset(elm, (const MethodInfo *)elm);
}


int32_t SelectGrandServantComponent___c___SetUpServantInfo_b__49_0(
        SelectGrandServantComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  if ( e->fields._CanSelectToGrand_k__BackingField )
    return 1;
  else
    return 2;
}


bool SelectGrandServantComponent___c___WaitLoadMultiPortrait_b__73_1(
        SelectGrandServantComponent___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  if ( !x || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return standFigure_k__BackingField->fields.isQueuerable;
}


void SelectGrandServantComponent___c__DisplayClass66_0___ctor(
        SelectGrandServantComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantComponent___c__DisplayClass66_0___OnDecideGrandServantSelect_b__0(
        SelectGrandServantComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  struct SelectGrandServantComponent_o *_4__this; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  SelectGrandServantComponent___c__DisplayClass66_0_o *v4; // x19
  const MethodInfo *v5; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (userServantEntity = this->fields.userServantEntity,
        v4 = this,
        _4__this->fields.selectUserServantEntity = userServantEntity,
        sub_1C32BC4(&_4__this->fields.selectUserServantEntity, userServantEntity),
        (this = (SelectGrandServantComponent___c__DisplayClass66_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C32E7C(this);
  }
  SelectGrandServantComponent__LoadGrandServantSelectEffect((SelectGrandServantComponent_o *)this, v5);
}


void SelectGrandServantComponent___c__DisplayClass71_0___ctor(
        SelectGrandServantComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c__DisplayClass71_0___RefreshDisplayAfterEndShowServantStatus_b__1(
        SelectGrandServantComponent___c__DisplayClass71_0_o *this,
        GrandServantIconComponent_o *icon,
        const MethodInfo *method)
{
  SelectGrandServantComponent___c__DisplayClass71_0_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v8; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_4C32694 & 1) == 0 )
  {
    this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C32694 = 1;
  }
  if ( !icon )
    goto LABEL_9;
  UserServantEntity_k__BackingField = icon->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_9;
  v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                  &v11,
                                                                  0);
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_9:
    sub_1C32E7C(this);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v8;
  return this == (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                          &v10,
                                                                          0);
}


void SelectGrandServantComponent___c__DisplayClass73_0___ctor(
        SelectGrandServantComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c__DisplayClass73_0___WaitLoadMultiPortrait_b__0(
        SelectGrandServantComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent___c_c *v3; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *collectList; // x19
  System_Func_object__bool__o *_9__73_1; // x20
  Il2CppObject *v6; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4C32695 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_All_StandFigureCollect___);
    sub_1C32C20(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_1C32C20(&Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__);
    sub_1C32C20(&SelectGrandServantComponent___c_TypeInfo);
    byte_4C32695 = 1;
  }
  v3 = SelectGrandServantComponent___c_TypeInfo;
  collectList = this->fields.collectList;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    v3 = SelectGrandServantComponent___c_TypeInfo;
  }
  _9__73_1 = (System_Func_object__bool__o *)v3->static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SelectGrandServantComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__73_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_StandFigureCollect__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__73_1,
      v6,
      Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__,
      0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__73_1 = (struct System_Func_StandFigureCollect__bool__o *)_9__73_1;
    sub_1C32BC4(&static_fields->__9__73_1, _9__73_1);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)collectList,
           (System_Func_TSource__bool__o *)_9__73_1,
           (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_StandFigureCollect___);
}