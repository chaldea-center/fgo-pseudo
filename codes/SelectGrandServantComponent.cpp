void SelectGrandServantComponent___ctor(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20

  if ( (byte_4E72109 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
    sub_1D0F0B4(&StringLiteral_5949/*"Effect/SelectGrandServant"*/);
    sub_1D0F0B4(&StringLiteral_17535/*"bit_select_grand_servant"*/);
    byte_4E72109 = 1;
  }
  this->fields.isAtTransition = 1;
  this->fields.figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_D36690;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
  this->fields.figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)v3;
  sub_1D0F058(&this->fields.figureCollectDictionary, v3);
  v4 = StringLiteral_5949/*"Effect/SelectGrandServant"*/;
  this->fields.GrandServantSelectEffectPrefabFolderPath = (struct System_String_o *)StringLiteral_5949/*"Effect/SelectGrandServant"*/;
  sub_1D0F058(&this->fields.GrandServantSelectEffectPrefabFolderPath, v4);
  v5 = StringLiteral_17535/*"bit_select_grand_servant"*/;
  this->fields.GrandServantSelectEffectPrefabName = (struct System_String_o *)StringLiteral_17535/*"bit_select_grand_servant"*/;
  sub_1D0F058(&this->fields.GrandServantSelectEffectPrefabName, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
  this->fields.cachedIconList = (struct System_Collections_Generic_List_GrandServantIconComponent__o *)v6;
  sub_1D0F058(&this->fields.cachedIconList, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SelectGrandServantComponent__AdjustIconToCenter(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *currentIcon; // x21
  float v6; // s9
  float v7; // s8
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_4E720F1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E720F1 = 1;
  }
  if ( !this->fields.isDragging && !this->fields.isClickNavigating )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         scrollView,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(currentIcon, 0, 0);
      if ( ((unsigned __int8)scrollView & 1) == 0 )
      {
        if ( !Component_object )
          goto LABEL_22;
        scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !scrollView )
          goto LABEL_22;
        v6 = *(float *)&Component_object[2].klass;
        scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0);
        if ( !scrollView )
          goto LABEL_22;
        LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( vabds_f32(v6, v7) > 0.01 )
        {
          scrollView = (UnityEngine_Component_o *)this->fields.currentIcon;
          if ( scrollView )
          {
            centerChild = this->fields.centerChild;
            scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_50548992(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0);
              return;
            }
          }
LABEL_22:
          sub_1D0F30C(scrollView, method);
        }
      }
    }
  }
}


void SelectGrandServantComponent__Awake(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  ;
}


void SelectGrandServantComponent__CleanUpStandFigures(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *figureCollectDictionary; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  UIStandFigureR_o *monitor; // x0
  __int64 v9; // x1
  UIStandFigureR_o *v10; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Coroutine_o *waitLoadCoroutine; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4E720F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__List_StandFigureCollect___get_Value__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1D0F0B4(&StandFigureCamera_TypeInfo);
    byte_4E720F2 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  memset(&v15, 0, sizeof(v15));
  figureCollectDictionary = this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)figureCollectDictionary,
    (const MethodInfo_35A8640 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
  v15 = v13;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v15,
            (const MethodInfo_36F21C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__) )
  {
    if ( !v15.fields._current.fields.value )
      sub_1D0F30C(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)v15.fields._current.fields.value,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    *(_OWORD *)&v14.fields._list = *(_OWORD *)&v13.fields._dictionary;
    v14.fields._current = v13.fields._current.fields.key;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        sub_1D0F30C(v5, v6);
      monitor = (UIStandFigureR_o *)v14.fields._current[1].monitor;
      if ( !monitor )
        sub_1D0F30C(0, v6);
      UIStandFigureR__ReleaseBodyRenderTexture(monitor, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[1].monitor, 0, 0);
      v10 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v10 )
        sub_1D0F30C(0, v9);
      UIStandFigureR__KillLoading(v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v15,
    (const MethodInfo_36F22EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
  StandFigureManager__ReleaseCharaFigure(0);
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__ReleaseRenderTexturesForEffects(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    sub_1D0F30C(figureCollectDictionary, method);
  }
LABEL_24:
  waitLoadCoroutine = this->fields.waitLoadCoroutine;
  if ( waitLoadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_73345296((UnityEngine_MonoBehaviour_o *)this, waitLoadCoroutine, 0);
    this->fields.waitLoadCoroutine = 0;
    sub_1D0F058(&this->fields.waitLoadCoroutine, 0);
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

  if ( (byte_4E720F9 & 1) == 0 )
  {
    this = (SelectGrandServantComponent_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E720F9 = 1;
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
    sub_1D0F30C(this, servantInfoA);
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
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v17, 0);
          v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v16.fields.fakeValue = v14;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v16, 0);
          return System_Int64__CompareTo_67075456((int64_t)&v19, v15, 0);
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
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4E720FF & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E720FF = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_confirmServantDialog = (UnityEngine_Component_o **)&this->fields.confirmServantDialog;
  if ( UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    if ( !*p_confirmServantDialog )
      sub_1D0F30C(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_confirmServantDialog, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(gameObject, 0);
  }
  *p_confirmServantDialog = 0;
  sub_1D0F058(p_confirmServantDialog, 0);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent__DisplayFigureWithEffect(
        SelectGrandServantComponent_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *figureCollectDictionary; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *shinyInstance; // x20
  Il2CppObject *v9; // x19
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4E720F5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StandFigureCamera_TypeInfo);
    byte_4E720F5 = 1;
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
          (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
    return;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  for ( i = v10; ; BasicHelper__SetActiveSafely((UnityEngine_Component_o *)i.fields._current[1].monitor, 1, 0) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields._current )
      sub_1D0F30C(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    sub_1D0F30C(figureCollectDictionary, *(_QWORD *)&needNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 1, 0);
LABEL_16:
  v9 = value;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__SetupEffects((System_Collections_Generic_List_StandFigureCollect__o *)v9, 0);
}


void SelectGrandServantComponent__EndGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Action_UserServantEntity__o *effectEndCallback; // x8

  SelectGrandServantComponent__ReleaseGrandServantSelectEffect(this, method);
  effectEndCallback = this->fields.effectEndCallback;
  if ( !effectEndCallback )
    sub_1D0F30C(v3, v4);
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

  if ( (byte_4E720FE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_UserServantEntity___);
    sub_1D0F0B4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_1__);
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12859/*"SelectGrandConfirmServantDialog"*/);
    this = (SelectGrandServantComponent_o *)sub_1D0F0B4(&StringLiteral_12860/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/);
    byte_4E720FE = 1;
  }
  if ( !userServantEntity )
    goto LABEL_29;
  if ( UserServantEntity__IsExtra1(userServantEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
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
        _9__63_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__63_0,
          v7,
          Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__,
          0);
        static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
        static_fields->__9__63_0 = (struct System_Func_UserServantEntity__bool__o *)_9__63_0;
        p__9__63_0 = &static_fields->__9__63_0;
LABEL_24:
        sub_1D0F058(p__9__63_0, _9__63_0);
        goto LABEL_25;
      }
      goto LABEL_25;
    }
LABEL_29:
    sub_1D0F30C(this, userServantEntity);
  }
  if ( !UserServantEntity__IsExtra2(userServantEntity, 0) )
  {
LABEL_27:
    v13 = &StringLiteral_12859/*"SelectGrandConfirmServantDialog"*/;
    return (System_String_o *)*v13;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
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
    _9__63_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantEntity__bool__TypeInfo);
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
  if ( !System_Linq_Enumerable__Any_object__52817792(
          (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
          (System_Func_TSource__bool__o *)_9__63_0,
          (const MethodInfo_325EF80 *)Method_System_Linq_Enumerable_Any_UserServantEntity___) )
    goto LABEL_27;
  v13 = &StringLiteral_12860/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/;
  return (System_String_o *)*v13;
}


void SelectGrandServantComponent__LoadGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x20
  AssetLoader_LoadEndDataHandler_o *v4; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4E72102 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__);
    byte_4E72102 = 1;
  }
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  v4 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(GrandServantSelectEffectPrefabFolderPath, v4, 1, 0, 0) )
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, v5);
}


void SelectGrandServantComponent__OnAfterGenerateFigure(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4E720F4 & 1) == 0 )
  {
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E720F4 = 1;
  }
  if ( this->fields.isAtTransition )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      sub_1D0F30C(Instance, v4);
    CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    this->fields.isAtTransition = 0;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_73343984(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
    0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/, 0.1, 0);
}


void SelectGrandServantComponent__OnCenterFinished(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  const MethodInfo *v4; // x2
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_Object_o *mCenteredObject; // x20
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *currentIcon; // x20
  struct GrandServantIconComponent_o **p_currentIcon; // x20
  struct GrandServantIconComponent_o *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_Action_object__o *v12; // x22
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4E720F0 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    this = (SelectGrandServantComponent_o *)sub_1D0F0B4(&Method_SelectGrandServantComponent__OnCenterFinished_b__49_0__);
    byte_4E720F0 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_26;
  this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
  if ( !this )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, cachedIconList->fields._size > 1, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(v2, 1, v4);
  centerChild = v2->fields.centerChild;
  v2->fields.isClickNavigating = 0;
  if ( !centerChild )
    goto LABEL_26;
  mCenteredObject = (UnityEngine_Object_o *)centerChild->fields.mCenteredObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SelectGrandServantComponent_o *)UnityEngine_Object__op_Equality(mCenteredObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !mCenteredObject )
      goto LABEL_26;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)mCenteredObject,
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( v2->fields.isDragging )
        goto LABEL_18;
      currentIcon = (UnityEngine_Object_o *)v2->fields.currentIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, currentIcon, 0) )
      {
LABEL_18:
        p_currentIcon = &v2->fields.currentIcon;
        v2->fields.isDragging = 0;
        v2->fields.currentIcon = (struct GrandServantIconComponent_o *)Component_object;
        sub_1D0F058(&v2->fields.currentIcon, Component_object);
        this = (SelectGrandServantComponent_o *)v2->fields.currentIcon;
        if ( this )
        {
          GrandServantIconComponent__OnSelected((GrandServantIconComponent_o *)this, 0);
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
                UICommonButton__SetButtonEnable(
                  (UICommonButton_o *)this,
                  v10->fields._CanSelectGrand_k__BackingField,
                  1,
                  0);
                v11 = (System_Collections_Generic_List_object__o *)v2->fields.cachedIconList;
                v12 = (System_Action_object__o *)sub_1D0F300(System_Action_GrandServantIconComponent__TypeInfo);
                System_Action_object____ctor(
                  v12,
                  (Il2CppObject *)v2,
                  Method_SelectGrandServantComponent__OnCenterFinished_b__49_0__,
                  0);
                if ( v11 )
                {
                  System_Collections_Generic_List_object___ForEach(
                    v11,
                    (System_Action_T__o *)v12,
                    (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
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
LABEL_26:
        sub_1D0F30C(this, method);
      }
    }
  }
}


void SelectGrandServantComponent__OnClickBack(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4E720FA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnClickBack__);
    byte_4E720FA = 1;
  }
  v3 = Method_SelectGrandServantComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
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
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v14; // x0
  SelectGrandConfirmServantDialog_o *v15; // x20
  GrandGraphEntity_o *grandGraphEntity; // x21
  const MethodInfo *v17; // x1
  UserServantEntity_o *v18; // x22
  SelectGrandConfirmServantDialog_ClickDelegate_o *v19; // x23

  if ( (byte_4E720FD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnClickDecide__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent__OnClickDecide_b__62_0__);
    sub_1D0F0B4(&StringLiteral_7240/*"GrandServantList"*/);
    byte_4E720FD = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    v4 = Method_SelectGrandServantComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7240/*"GrandServantList"*/, 0);
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v7);
    SelectGrandConfirmServantDialogName = SelectGrandServantComponent__GetSelectGrandConfirmServantDialogName(
                                            (SelectGrandServantComponent_o *)CurrentUserServantEntity,
                                            CurrentUserServantEntity,
                                            v9);
    if ( !AssetStorage )
      goto LABEL_17;
    SelectGrandConfirmServantDialogName = (System_String_o *)AssetData__GetObject_object__52624444(
                                                               AssetStorage,
                                                               SelectGrandConfirmServantDialogName,
                                                               (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !SelectGrandConfirmServantDialogName )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)SelectGrandConfirmServantDialogName,
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
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
    v14 = UnityEngine_Object__Instantiate_object__53335036(
            Component_object,
            transform,
            (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    this->fields.confirmServantDialog = (struct SelectGrandConfirmServantDialog_o *)v14;
    sub_1D0F058(&this->fields.confirmServantDialog, v14);
    v15 = this->fields.confirmServantDialog;
    grandGraphEntity = this->fields.grandGraphEntity;
    v18 = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v17);
    v19 = (SelectGrandConfirmServantDialog_ClickDelegate_o *)sub_1D0F300(SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    SelectGrandConfirmServantDialog_ClickDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_SelectGrandServantComponent__OnClickDecide_b__62_0__,
      0);
    if ( !v15 )
LABEL_17:
      sub_1D0F30C(SelectGrandConfirmServantDialogName, v11);
    SelectGrandConfirmServantDialog__OpenConfirm(v15, grandGraphEntity, v18, v19, 0);
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
  int32_t v8; // w20
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v9; // x8
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4E720FC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnClickLeftArrow__);
    this = (SelectGrandServantComponent_o *)sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E720FC = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_21;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    v2->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_73343984(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
      0);
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
          v6 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickLeftArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_1D0F098(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_395D0B0 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v8 = (_DWORD)this - 1;
          if ( (int)this - 1 < 0 )
          {
            v9 = v2->fields.cachedIconList;
            if ( !v9 )
              goto LABEL_21;
            v8 = v9->fields._size - 1;
          }
          SelectGrandServantComponent__ResetDisplay(v2, method);
          this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
          if ( this )
          {
            centerChild = v2->fields.centerChild;
            this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v8,
                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
            if ( this )
            {
              this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( centerChild )
              {
                UICenterOnChild__CenterOn_50548992(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1D0F30C(this, method);
  }
  v4 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickLeftArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v4, v4[4]);
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
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v8; // x8
  int32_t size; // w21
  int v10; // w20
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4E720FB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnClickRightArrow__);
    this = (SelectGrandServantComponent_o *)sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E720FB = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_19;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    v2->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_73343984(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
      0);
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
          v6 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickRightArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_1D0F098(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_395D0B0 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v8 = v2->fields.cachedIconList;
          if ( v8 )
          {
            size = v8->fields._size;
            v10 = (int)this;
            SelectGrandServantComponent__ResetDisplay(v2, method);
            this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
            if ( this )
            {
              centerChild = v2->fields.centerChild;
              this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        (v10 + 1) % size,
                                                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
              if ( this )
              {
                this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_50548992(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1D0F30C(this, method);
  }
  v4 = Method_SelectGrandServantComponent_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent_OnClickRightArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
}


void SelectGrandServantComponent__OnDecideGrandServantSelect(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4E72101 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__);
    sub_1D0F0B4(&SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
    byte_4E72101 = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5[1].klass = (Il2CppClass *)this;
  sub_1D0F058(&v5[1], this);
  v5[1].monitor = userServantEntity;
  sub_1D0F058(&v5[1].monitor, userServantEntity);
  bitEffectRoot = this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(bitEffectRoot, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    v5,
    Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__,
    0);
  if ( !v10 )
LABEL_9:
    sub_1D0F30C(bitEffectRoot, v7);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0);
}


void SelectGrandServantComponent__OnDisable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct UnityEngine_GameObject_o **p_auroraInstance; // x20
  UnityEngine_Object_o *auroraInstance; // x21
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_GameObject_o **p_shinyInstance; // x20
  UnityEngine_Object_o *shinyInstance; // x21
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceBack; // x20
  UnityEngine_Object_o *particleInstanceBack; // x21
  UnityEngine_Object_o *v12; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceFront; // x19
  UnityEngine_Object_o *v14; // x20
  struct UnityEngine_GameObject_o *particleInstanceFront; // t1
  UnityEngine_Object_o *v16; // x20

  if ( (byte_4E72107 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E72107 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_73343984(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
    0);
  SelectGrandServantComponent__CleanUpStandFigures(this, v3);
  p_auroraInstance = &this->fields.auroraInstance;
  auroraInstance = (UnityEngine_Object_o *)this->fields.auroraInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(auroraInstance, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_auroraInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v6, 0);
    *p_auroraInstance = 0;
    sub_1D0F058(&this->fields.auroraInstance, 0);
  }
  p_shinyInstance = &this->fields.shinyInstance;
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shinyInstance, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)*p_shinyInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v9, 0);
    *p_shinyInstance = 0;
    sub_1D0F058(&this->fields.shinyInstance, 0);
  }
  p_particleInstanceBack = &this->fields.particleInstanceBack;
  particleInstanceBack = (UnityEngine_Object_o *)this->fields.particleInstanceBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceBack, 0, 0) )
  {
    v12 = (UnityEngine_Object_o *)*p_particleInstanceBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v12, 0);
    *p_particleInstanceBack = 0;
    sub_1D0F058(&this->fields.particleInstanceBack, 0);
  }
  particleInstanceFront = this->fields.particleInstanceFront;
  p_particleInstanceFront = &this->fields.particleInstanceFront;
  v14 = (UnityEngine_Object_o *)particleInstanceFront;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    v16 = (UnityEngine_Object_o *)*p_particleInstanceFront;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v16, 0);
    *p_particleInstanceFront = 0;
    sub_1D0F058(p_particleInstanceFront, 0);
  }
}


void SelectGrandServantComponent__OnDragStarted(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4E720F6 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E720F6 = 1;
  }
  this->fields.isDragging = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_73343984(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
    0);
  SelectGrandServantComponent__ResetDisplay(this, v3);
}


void SelectGrandServantComponent__OnEnable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  UnityEngine_Transform_o *Child; // x0
  Il2CppObject *auroraEffect; // x21
  UnityEngine_Transform_o *v9; // x20
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x0

  if ( (byte_4E72108 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject____80459208);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4E72108 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_18;
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)Instance,
                                   1,
                                   (const MethodInfo_3245E0C *)Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
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
          if ( UnityEngine_Transform__get_childCount(transform, 0) < 1 )
            return;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
          if ( transform )
          {
            Child = UnityEngine_Transform__GetChild(transform, 0, 0);
            auroraEffect = (Il2CppObject *)this->fields.auroraEffect;
            v9 = Child;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v10 = UnityEngine_Object__Instantiate_object__53335036(
                    auroraEffect,
                    v9,
                    (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GameObject____80459208);
            this->fields.auroraInstance = (struct UnityEngine_GameObject_o *)v10;
            sub_1D0F058(&this->fields.auroraInstance, v10);
            v11 = UnityEngine_Object__Instantiate_object__53335036(
                    (Il2CppObject *)this->fields.shinyEffect,
                    v9,
                    (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GameObject____80459208);
            this->fields.shinyInstance = (struct UnityEngine_GameObject_o *)v11;
            sub_1D0F058(&this->fields.shinyInstance, v11);
            v12 = UnityEngine_Object__Instantiate_object__53335036(
                    (Il2CppObject *)this->fields.particleEffectFront,
                    v9,
                    (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GameObject____80459208);
            this->fields.particleInstanceFront = (struct UnityEngine_GameObject_o *)v12;
            sub_1D0F058(&this->fields.particleInstanceFront, v12);
            v13 = UnityEngine_Object__Instantiate_object__53335036(
                    (Il2CppObject *)this->fields.particleEffectBack,
                    v9,
                    (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GameObject____80459208);
            this->fields.particleInstanceBack = (struct UnityEngine_GameObject_o *)v13;
            sub_1D0F058(&this->fields.particleInstanceBack, v13);
            return;
          }
        }
      }
LABEL_18:
      sub_1D0F30C(transform, v5);
    }
  }
}


void SelectGrandServantComponent__OnEndGrandSetupRequest(
        SelectGrandServantComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v8; // x0
  intptr_t v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_4E72100 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__);
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E72100 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22648/*"ng"*/, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    v9 = Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__;
  }
  else
  {
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    v9 = Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__;
  }
  v10 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, v9, 0);
  if ( !confirmServantDialog )
LABEL_9:
    sub_1D0F30C(Instance, v6);
  BaseDialog__SafeClose(confirmServantDialog, v10, 0);
}


void SelectGrandServantComponent__OnValidate(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4E720EC & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Application_TypeInfo);
    byte_4E720EC = 1;
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
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v7; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x3
  struct SelectGrandServantEffectComponent_o *selectGrandServantEffectComponent; // x20
  System_Action_o *v11; // x21
  struct System_Action_o **p_endAct; // x20

  if ( (byte_4E72103 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject____80459208);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_EndGrandServantSelectEffect__);
    byte_4E72103 = 1;
  }
  grandServantSelectEffectAssetData = this->fields.grandServantSelectEffectAssetData;
  if ( !grandServantSelectEffectAssetData )
    goto LABEL_7;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              grandServantSelectEffectAssetData,
                              this->fields.GrandServantSelectEffectPrefabName,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__52624444, 0, 0) )
  {
    bitEffectRoot = this->fields.bitEffectRoot;
    if ( !bitEffectRoot )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(bitEffectRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object__53335036(
           Object_object__52624444,
           transform,
           (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GameObject____80459208);
    this->fields.grandServantSelectEffectObj = (struct UnityEngine_GameObject_o *)v7;
    sub_1D0F058(&this->fields.grandServantSelectEffectObj, v7);
    bitEffectRoot = this->fields.grandServantSelectEffectObj;
    if ( !bitEffectRoot )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         bitEffectRoot,
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    this->fields.selectGrandServantEffectComponent = (struct SelectGrandServantEffectComponent_o *)Component_object;
    sub_1D0F058(&this->fields.selectGrandServantEffectComponent, Component_object);
    bitEffectRoot = (UnityEngine_GameObject_o *)this->fields.selectGrandServantEffectComponent;
    if ( !bitEffectRoot
      || (SelectGrandServantEffectComponent__Setup(
            (SelectGrandServantEffectComponent_o *)bitEffectRoot,
            this->fields.beforeUserServantEntity,
            this->fields.selectUserServantEntity,
            v9),
          selectGrandServantEffectComponent = this->fields.selectGrandServantEffectComponent,
          v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_SelectGrandServantComponent_EndGrandServantSelectEffect__,
            0),
          !selectGrandServantEffectComponent) )
    {
LABEL_15:
      sub_1D0F30C(bitEffectRoot, method);
    }
    selectGrandServantEffectComponent->fields.endAct = v11;
    p_endAct = &selectGrandServantEffectComponent->fields.endAct;
    *((_BYTE *)p_endAct - 8) = 1;
    sub_1D0F058(p_endAct, v11);
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
  __int64 v11; // x1
  UserServantEntity_o **v12; // x20
  SelectGrandServantComponent___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__71_0; // x20
  Il2CppObject *v16; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x21
  System_Func_object__bool__o *v19; // x22
  CommonUI_c *klass; // x8
  CommonUI_o *v21; // x21
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  bool IsSelected_k__BackingField; // w10
  __int64 v28; // x8
  bool v29; // w24
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  GrandServantIconComponent_o *v37; // x0
  __int64 v38; // x1
  GrandServantIconComponent_o *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  const MethodInfo *v44; // x2

  if ( (byte_4E72105 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    sub_1D0F0B4(&System_Func_GrandServantIconComponent__bool__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__);
    sub_1D0F0B4(&SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    byte_4E72105 = 1;
  }
  v9 = (Il2CppObject *)sub_1D0F300(SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_49;
  v9[1].klass = (Il2CppClass *)userServantEntity;
  v12 = (UserServantEntity_o **)&v9[1];
  sub_1D0F058(&v9[1], userServantEntity);
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = SelectGrandServantComponent___c_TypeInfo;
    v14 = Instance;
    if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
      v13 = SelectGrandServantComponent___c_TypeInfo;
    }
    _9__71_0 = v13->static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = SelectGrandServantComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__71_0 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        _9__71_0,
        v16,
        Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__,
        0);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
      static_fields->__9__71_0 = _9__71_0;
      Instance = (CommonUI_o *)sub_1D0F058(&static_fields->__9__71_0, _9__71_0);
    }
    if ( v14 )
    {
      CommonUI__CloseServantStatusDialog(v14, _9__71_0, 0);
      return;
    }
LABEL_49:
    sub_1D0F30C(Instance, v11);
  }
  if ( isModify )
  {
    cachedIconList = this->fields.cachedIconList;
    v19 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_GrandServantIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      v9,
      Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      0);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Where_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)cachedIconList,
                               (System_Func_TSource__bool__o *)v19,
                               (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    if ( !Instance )
      goto LABEL_49;
    klass = Instance->klass;
    v21 = Instance;
    v22 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_GrandServantIconComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_19:
      v24 = sub_1CE5430(Instance, System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(CommonUI_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( !v26 )
      sub_1D0F30C(0, v25);
    IsSelected_k__BackingField = 0;
    while ( 1 )
    {
      v28 = *(_QWORD *)v26;
      v29 = IsSelected_k__BackingField;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_27;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_27:
        v32 = sub_1CE5430(v26, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v26, *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      v33 = *(_QWORD *)v26;
      v34 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_GrandServantIconComponent__c **)v35 - 1) != System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_34;
        }
        v36 = v33 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_34:
        v36 = sub_1CE5430(v26, System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, 0);
      }
      v37 = (GrandServantIconComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v26, *(_QWORD *)(v36 + 8));
      v39 = v37;
      if ( !v37 )
        sub_1D0F30C(0, v38);
      GrandServantIconComponent__SetServant(v37, *v12, 0);
      IsSelected_k__BackingField = 1;
      if ( !v29 )
        IsSelected_k__BackingField = v39->fields._IsSelected_k__BackingField;
    }
    v40 = *(_QWORD *)v26;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_43;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_43:
      v43 = sub_1CE5430(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
    if ( v29 )
      SelectGrandServantComponent__SetFigure(this, *v12, v44);
  }
}


void SelectGrandServantComponent__ReleaseGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x19

  if ( (byte_4E72104 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    byte_4E72104 = 1;
  }
  this->fields.selectGrandServantEffectComponent = 0;
  sub_1D0F058(&this->fields.selectGrandServantEffectComponent, 0);
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(GrandServantSelectEffectPrefabFolderPath, 0);
}


void SelectGrandServantComponent__ResetDisplay(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x20
  __int64 v4; // x1
  void *scrollView; // x0
  System_Collections_Generic_List_object__o *cachedIconList; // x20
  System_Action_object__o *v7; // x21
  Il2CppObject *v8; // x22
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4E720F7 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__);
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    byte_4E720F7 = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentIcon, 0, 0) )
  {
    scrollView = this->fields.currentIcon;
    if ( !scrollView )
      goto LABEL_17;
    GrandServantIconComponent__OnUnselected((GrandServantIconComponent_o *)scrollView, 0);
  }
  cachedIconList = (System_Collections_Generic_List_object__o *)this->fields.cachedIconList;
  scrollView = SelectGrandServantComponent___c_TypeInfo;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    scrollView = SelectGrandServantComponent___c_TypeInfo;
  }
  v7 = *(System_Action_object__o **)(*((_QWORD *)scrollView + 23) + 16LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)scrollView + 56) )
    {
      j_il2cpp_runtime_class_init_0(scrollView);
      scrollView = SelectGrandServantComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)scrollView + 23);
    v7 = (System_Action_object__o *)sub_1D0F300(System_Action_GrandServantIconComponent__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__, 0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Action_GrandServantIconComponent__o *)v7;
    scrollView = (void *)sub_1D0F058(&static_fields->__9__56_0, v7);
  }
  if ( !cachedIconList
    || (System_Collections_Generic_List_object___ForEach(
          cachedIconList,
          (System_Action_T__o *)v7,
          (const MethodInfo_395CE50 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.glowEffect, 0, 0),
        (scrollView = this->fields.scrollView) == 0) )
  {
LABEL_17:
    sub_1D0F30C(scrollView, v4);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(this, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent__SetBackButtonColliderEnable(
        SelectGrandServantComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *backButtonObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x19

  if ( (byte_4E720F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E720F8 = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       backButtonObject,
                       (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1D0F30C(backButtonObject, isEnable);
  v7 = UnityEngine_GameObject__GetComponent_object_(
         backButtonObject,
         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
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
  void *Master_object; // x0
  __int64 v6; // x1
  SvtMultiPortraitMaster_o *v7; // x23
  int32_t ServantId; // w20
  int32_t v9; // w22
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x21
  UIStandFigureR_o *v11; // x21
  System_Action_o *v12; // x23
  UnityEngine_Object_o *v13; // x21
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x2
  int32_t size; // w20
  SelectGrandServantComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  char v19; // w22
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w23
  SvtMultiPortraitEntity_o *v22; // x24
  int32_t v23; // w25
  UnityEngine_Component_o *v24; // x26
  int32_t portraitImageId; // w27
  System_Action_o *v26; // x28
  UnityEngine_Object_o *gameObject; // x25
  Il2CppObject *v28; // x0
  struct System_Int32_array *commonPosition; // x8
  struct System_Int32_array *v30; // x8
  UnityEngine_GameObject_o *figureRoot; // x27
  int32_t v32; // w26
  System_Action_o *v33; // x28
  UnityEngine_Component_o *v34; // x25
  struct System_Int32_array *v35; // x8
  struct System_Int32_array *v36; // x8
  System_Collections_Generic_List_object__o *v37; // x26
  StandFigureCollect_o *v38; // x27
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Collections_IEnumerator_o *MultiPortrait; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  UnityEngine_GameObject_o *v45; // x21
  System_Action_o *v46; // x23
  UIStandFigureR_o *RenderPrefabWithEffect; // x22
  System_Collections_Generic_List_object__o *v48; // x21
  StandFigureCollect_o *v49; // x20
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *value; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *v56; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4E720F3 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_First_StandFigureCollect___);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnAfterGenerateFigure__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1D0F0B4(&StandFigureCollect_TypeInfo);
    sub_1D0F0B4(&StringLiteral_13222/*"StandFigureR({0})"*/);
    byte_4E720F3 = 1;
  }
  value = 0;
  v56 = 0;
  SelectGrandServantComponent__CleanUpStandFigures(this, (const MethodInfo *)userServantEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !userServantEntity )
    goto LABEL_59;
  v7 = (SvtMultiPortraitMaster_o *)Master_object;
  ServantId = UserServantEntity__GetServantId(userServantEntity, -1, 0);
  Master_object = (void *)UserServantEntity__GetFigureImage(userServantEntity, 1, -1, 0);
  if ( !v7 )
    goto LABEL_59;
  v9 = (int)Master_object;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(v7, ServantId, (int32_t)Master_object, 3, 0);
  GameObjectHelper__SetActiveSafely(this->fields.figureRoot, 1, 0);
  Master_object = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityListOrderBy, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( EntityListOrderBy )
    {
      size = EntityListOrderBy->fields._size;
      Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
      if ( Master_object )
      {
        *((_DWORD *)Master_object + 18) = size;
        Master_object = this->fields.figureCollectDictionary;
        if ( Master_object )
        {
          v17 = (SelectGrandServantComponent_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                                   size,
                                                   &v56,
                                                   (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
          v19 = (char)v17;
          if ( ((unsigned __int8)v17 & 1) == 0 )
          {
            v20 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v20,
              (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
            v56 = (Il2CppObject *)v20;
            Master_object = this->fields.figureCollectDictionary;
            if ( !Master_object )
              goto LABEL_59;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
              size,
              (Il2CppObject *)v20,
              (const MethodInfo_35A81F4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          }
          if ( EntityListOrderBy->fields._size < 1 )
          {
LABEL_50:
            MultiPortrait = SelectGrandServantComponent__WaitLoadMultiPortrait(
                              v17,
                              (System_Collections_Generic_List_StandFigureCollect__o *)v56,
                              v18);
            started = UnityEngine_MonoBehaviour__StartCoroutine_73344676(
                        (UnityEngine_MonoBehaviour_o *)this,
                        MultiPortrait,
                        0);
            this->fields.waitLoadCoroutine = started;
            sub_1D0F058(&this->fields.waitLoadCoroutine, started);
            goto LABEL_58;
          }
          v21 = 0;
          while ( 1 )
          {
            Master_object = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)EntityListOrderBy,
                              v21,
                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
            if ( !Master_object )
              break;
            v22 = (SvtMultiPortraitEntity_o *)Master_object;
            v23 = *((_DWORD *)Master_object + 9) + 1;
            if ( (v19 & 1) != 0 )
            {
              Master_object = v56;
              if ( !v56 )
                break;
              Master_object = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)v56,
                                v21,
                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !Master_object )
                break;
              v24 = (UnityEngine_Component_o *)*((_QWORD *)Master_object + 3);
              BasicHelper__SetActiveSafely(v24, 1, 0);
              portraitImageId = v22->fields.portraitImageId;
              v26 = 0;
              if ( v21 == EntityListOrderBy->fields._size - 1 )
              {
                v26 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0);
              }
              if ( !v24 )
                break;
              UIStandFigureR__SetCharacterForImageIdWithEffect(
                (UIStandFigureR_o *)v24,
                portraitImageId,
                8,
                0,
                0,
                v21,
                v26,
                0,
                1,
                1,
                0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)v24, v23, 0);
              v24[5].fields.m_CachedPtr = (intptr_t)v22;
              sub_1D0F058(&v24[5].fields, v22);
              gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
              v54 = v22->fields.portraitImageId;
              v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
              Master_object = System_String__Format((System_String_o *)StringLiteral_13222/*"StandFigureR({0})"*/, v28, 0);
              if ( !gameObject )
                break;
              UnityEngine_Object__set_name(gameObject, (System_String_o *)Master_object, 0);
              commonPosition = v22->fields.commonPosition;
              if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
              {
                Master_object = UnityEngine_Component__get_gameObject(v24, 0);
                v30 = v22->fields.commonPosition;
                if ( !v30 )
                  break;
                if ( LODWORD(v30->max_length) < 2 )
                  goto LABEL_60;
                GameObjectExtensions__SetLocalPosition_37343212(
                  (UnityEngine_GameObject_o *)Master_object,
                  (float)v30->m_Items[0],
                  (float)v30->m_Items[1],
                  0);
              }
            }
            else
            {
              figureRoot = this->fields.figureRoot;
              v32 = *((_DWORD *)Master_object + 8);
              if ( v21 == EntityListOrderBy->fields._size - 1 )
              {
                v33 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v33,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0);
              }
              else
              {
                v33 = 0;
              }
              Master_object = StandFigureManager__CreatePrefabForImageIdWithEffect(
                                figureRoot,
                                v32,
                                8,
                                0,
                                v23,
                                v21,
                                v33,
                                0,
                                -1,
                                0,
                                0,
                                1,
                                0);
              if ( !Master_object )
                break;
              v34 = (UnityEngine_Component_o *)Master_object;
              *((_QWORD *)Master_object + 17) = v22;
              sub_1D0F058((char *)Master_object + 136, v22);
              v35 = v22->fields.commonPosition;
              if ( v35 && SLODWORD(v35->max_length) >= 2 )
              {
                Master_object = UnityEngine_Component__get_gameObject(v34, 0);
                v36 = v22->fields.commonPosition;
                if ( !v36 )
                  break;
                if ( LODWORD(v36->max_length) < 2 )
LABEL_60:
                  sub_1D0F314(Master_object);
                GameObjectExtensions__SetLocalPosition_37343212(
                  (UnityEngine_GameObject_o *)Master_object,
                  (float)v36->m_Items[0],
                  (float)v36->m_Items[1],
                  0);
              }
              v37 = (System_Collections_Generic_List_object__o *)v56;
              v38 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
              StandFigureCollect___ctor(v38, v22, (UIStandFigureR_o *)v34, 0);
              if ( !v37 )
                break;
              items = v37->fields._items;
              v40 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              v41 = v37->fields._size;
              if ( (unsigned int)v41 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v38,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v42 = &items->obj.klass + v41;
                v37->fields._size = v41 + 1;
                v42[4] = (Il2CppClass *)v38;
                v17 = (SelectGrandServantComponent_o *)sub_1D0F058(v42 + 4, v38);
              }
            }
            if ( ++v21 >= EntityListOrderBy->fields._size )
              goto LABEL_50;
          }
        }
      }
    }
LABEL_59:
    sub_1D0F30C(Master_object, v6);
  }
  Master_object = this->fields.figureCollectDictionary;
  if ( !Master_object )
    goto LABEL_59;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
          1,
          &value,
          (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
  {
    v45 = this->fields.figureRoot;
    v46 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0);
    RenderPrefabWithEffect = StandFigureManager__CreateRenderPrefabWithEffect(
                               v45,
                               ServantId,
                               v9,
                               8,
                               0,
                               1,
                               v46,
                               0,
                               -1,
                               0,
                               0);
    v48 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    v49 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v49, 0, RenderPrefabWithEffect, 0);
    if ( v48 )
    {
      v50 = v48->fields._items;
      v51 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v48->fields._version;
      if ( v50 )
      {
        v52 = v48->fields._size;
        if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            (Il2CppObject *)v49,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &v50->obj.klass + v52;
          v48->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v49;
          sub_1D0F058(v53 + 4, v49);
        }
        value = (Il2CppObject *)v48;
        Master_object = this->fields.figureCollectDictionary;
        if ( Master_object )
        {
          size = 1;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
            1,
            (Il2CppObject *)v48,
            (const MethodInfo_35A81F4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          goto LABEL_58;
        }
      }
    }
    goto LABEL_59;
  }
  Master_object = System_Linq_Enumerable__First_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)value,
                    (const MethodInfo_3276030 *)Method_System_Linq_Enumerable_First_StandFigureCollect___);
  if ( !Master_object )
    goto LABEL_59;
  v11 = (UIStandFigureR_o *)*((_QWORD *)Master_object + 3);
  v12 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0);
  if ( !v11 )
    goto LABEL_59;
  UIStandFigureR__SetCharacterWithEffect(v11, ServantId, v9, 8, 0, 0, 0.0, v12, 0, 0);
  UIStandFigureR__SetDepth(v11, 1, 0);
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
  v54 = ServantId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  Master_object = System_String__Format((System_String_o *)StringLiteral_13222/*"StandFigureR({0})"*/, v14, 0);
  if ( !v13 )
    goto LABEL_59;
  UnityEngine_Object__set_name(v13, (System_String_o *)Master_object, 0);
  size = 1;
LABEL_58:
  SelectGrandServantComponent__DisplayFigureWithEffect(this, size, v15);
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

  if ( (byte_4E720ED & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnDecideGrandServantSelect__);
    sub_1D0F0B4(&StandFigureCamera_TypeInfo);
    byte_4E720ED = 1;
  }
  this->fields.onClickBackAction = onClickBack;
  sub_1D0F058(&this->fields.onClickBackAction, onClickBack);
  v11 = (System_Action_object__o *)sub_1D0F300(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDecideGrandServantSelect__,
    0);
  this->fields.onDecideGrandAction = (struct System_Action_UserServantEntity__o *)v11;
  sub_1D0F058(&this->fields.onDecideGrandAction, v11);
  this->fields.effectEndCallback = onDecideGrand;
  sub_1D0F058(&this->fields.effectEndCallback, onDecideGrand);
  this->fields.selectUserServantEntity = 0;
  sub_1D0F058(&this->fields.selectUserServantEntity, 0);
  this->fields.beforeUserServantEntity = 0;
  sub_1D0F058(&this->fields.beforeUserServantEntity, 0);
  this->fields.grandGraphEntity = grandGraphEntity;
  sub_1D0F058(&this->fields.grandGraphEntity, grandGraphEntity);
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
  Il2CppObject *v7; // x1
  SelectGrandServantComponent___c_c *v8; // x0
  System_Func_object__int__o *_9__48_0; // x21
  Il2CppObject *v10; // x22
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
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
  Il2CppClass *klass; // x8
  _QWORD *v45; // x9
  __int64 monitor_low; // x10
  __int64 v47; // x8
  unsigned int v48; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UICenterOnChild_o *centerChild; // x20
  _QWORD *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v54; // x22
  System_Delegate_o *v55; // x0
  System_Delegate_o *v56; // x8
  SpringPanel_OnFinished_c *v57; // x1
  struct UIScrollView_o *scrollView; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v60; // x22
  System_Delegate_o *v61; // x0
  UIScrollView_OnDragNotification_c *v62; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8

  if ( (byte_4E720EF & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_int__TypeInfo);
    sub_1D0F0B4(&System_Action_bool__int__UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Comparison_SelectGrandServantInfo__TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    sub_1D0F0B4(&System_Func_SelectGrandServantInfo__int__TypeInfo);
    sub_1D0F0B4(&Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1D0F0B4(&SpringPanel_OnFinished_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_CompareUserServant__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnCenterFinished__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnDragStarted__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__SetUpServantInfo_b__48_0__);
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    byte_4E720EF = 1;
  }
  v5 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_SelectGrandServantInfo__TypeInfo);
  System_Comparison_object____ctor(v5, (Il2CppObject *)this, Method_SelectGrandServantComponent_CompareUserServant__, 0);
  if ( !servantInfos )
    goto LABEL_70;
  System_Collections_Generic_List_object___Sort_60153556(
    (System_Collections_Generic_List_object__o *)servantInfos,
    v5,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
  v8 = SelectGrandServantComponent___c_TypeInfo;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    v8 = SelectGrandServantComponent___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v8->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = SelectGrandServantComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_SelectGrandServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__48_0,
      v10,
      Method_SelectGrandServantComponent___c__SetUpServantInfo_b__48_0__,
      0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_SelectGrandServantInfo__int__o *)_9__48_0;
    sub_1D0F058(&static_fields->__9__48_0, _9__48_0);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfos,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
  v13 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v12,
                                                       (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  if ( !v13 )
    goto LABEL_70;
  if ( v13->fields._size >= 1 )
  {
    v16 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               v16,
               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
      v7 = Item;
      if ( !v16 || (v16 & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_70;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v24 = v22[4];
          v25 = v14;
          goto LABEL_26;
        }
        v20 = &items->obj.klass + size;
        v14->fields._size = size + 1;
      }
      else
      {
        if ( !v15 )
          goto LABEL_70;
        v17 = v15->fields._items;
        v18 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v15->fields._version;
        if ( !v17 )
          goto LABEL_70;
        v19 = v15->fields._size;
        if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
        {
          v24 = v18[4];
          v25 = v15;
LABEL_26:
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            v7,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v24 + 192) + 112LL));
          continue;
        }
        v20 = &v17->obj.klass + v19;
        v15->fields._size = v19 + 1;
      }
      v20[4] = (Il2CppClass *)v7;
      sub_1D0F058(v20 + 4, v7);
    }
    while ( ++v16 < v13->fields._size );
  }
  v26 = System_Linq_Enumerable__AsEnumerable_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (const MethodInfo_325FBC0 *)Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
  v27 = System_Linq_Enumerable__Reverse_object_(
          v26,
          (const MethodInfo_32801C0 *)Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
  v28 = System_Linq_Enumerable__Concat_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          v27,
          (const MethodInfo_326C084 *)Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
  Item = (Il2CppObject *)System_Linq_Enumerable__ToArray_object_(
                           v28,
                           (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
  if ( !Item )
LABEL_70:
    sub_1D0F30C(Item, v7);
  monitor = Item[1].monitor;
  minimumRequiredElementNum = this->fields.minimumRequiredElementNum;
  v31 = Item;
  v32 = (int)monitor;
  if ( minimumRequiredElementNum > (int)monitor && (int)monitor > 1 )
  {
    v33 = (float)minimumRequiredElementNum;
    if ( !byte_4E71327 )
    {
      sub_1D0F0B4(&System_Math_TypeInfo);
      byte_4E71327 = 1;
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
      sub_1D0F314(Item);
    v36 = 0;
    v37 = 1;
    while ( 1 )
    {
      Item = (Il2CppObject *)this->fields.wrapContent;
      if ( !Item )
        goto LABEL_70;
      v38 = (SelectGrandServantInfo_o *)*((_QWORD *)&v31[2].klass + v36);
      grandServantIconComponent = (Il2CppObject *)this->fields.grandServantIconComponent;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__Instantiate_object__53335036(
              grandServantIconComponent,
              transform,
              (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v41, 1, 0);
      v42 = (System_Action_int__o *)sub_1D0F300(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v42,
        (Il2CppObject *)this,
        (intptr_t)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__,
        0);
      v43 = (System_Action_T1__T2__T3__o *)sub_1D0F300(System_Action_bool__int__UserServantEntity__TypeInfo);
      System_Action_bool__int__object____ctor(
        v43,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__,
        0);
      if ( !v41 )
        goto LABEL_70;
      GrandServantIconComponent__Init(
        (GrandServantIconComponent_o *)v41,
        v38,
        v37 - 1,
        v42,
        (System_Action_bool__int__UserServantEntity__o *)v43,
        0);
      Item = (Il2CppObject *)this->fields.cachedIconList;
      if ( !Item )
        goto LABEL_70;
      klass = Item[1].klass;
      v45 = Method_System_Collections_Generic_List_GrandServantIconComponent__Add__;
      ++HIDWORD(Item[1].monitor);
      if ( !klass )
        goto LABEL_70;
      monitor_low = SLODWORD(Item[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v41,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = (__int64)klass + 8 * monitor_low;
        LODWORD(Item[1].monitor) = monitor_low + 1;
        *(_QWORD *)(v47 + 32) = v41;
        Item = (Il2CppObject *)sub_1D0F058(v47 + 32, v41);
      }
      if ( v32 == v37 )
        break;
      v48 = (unsigned int)v31[1].monitor;
      v36 = v37 % (int)v48;
      ++v37;
      if ( v36 >= v48 )
        goto LABEL_52;
    }
  }
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_70;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_32A9F2C *)Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
  this->fields.centerChild = (struct UICenterOnChild_o *)Component_object;
  Item = (Il2CppObject *)sub_1D0F058(&this->fields.centerChild, Component_object);
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_70;
  onFinished = (System_Delegate_o *)centerChild->fields.onFinished;
  p_onFinished = &centerChild->fields.onFinished;
  v54 = (SpringPanel_OnFinished_o *)sub_1D0F300(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v54, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnCenterFinished__, 0);
  v55 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v54, 0);
  v56 = v55;
  if ( v55 )
  {
    v57 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v55->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_65;
    *p_onFinished = v55;
    if ( (SpringPanel_OnFinished_c *)v55->klass != v57 )
      goto LABEL_65;
  }
  else
  {
    *p_onFinished = 0;
  }
  sub_1D0F058(p_onFinished, v55);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.wrapContent, 1, 0);
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_70;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)Item, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_70;
  onDragStarted = (System_Delegate_o *)scrollView->fields.onDragStarted;
  p_onFinished = &scrollView->fields.onDragStarted;
  v60 = (UIScrollView_OnDragNotification_o *)sub_1D0F300(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v60,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDragStarted__,
    0);
  v61 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v60, 0);
  v56 = v61;
  if ( !v61 )
    goto LABEL_66;
  v62 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v61->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v61, (UIScrollView_OnDragNotification_c *)v61->klass != v62) )
  {
LABEL_65:
    sub_1D0F6A8(v56);
LABEL_66:
    *p_onFinished = v56;
  }
  Item = (Il2CppObject *)sub_1D0F058(p_onFinished, v56);
  cachedIconList = this->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_70;
  Item = (Il2CppObject *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_70;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, cachedIconList->fields._size > 1, 0);
}


void SelectGrandServantComponent__SetUpUI(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UILabel_o *headerMessageLabel; // x20
  System_String_o *bitEffectRoot; // x0
  __int64 v5; // x1
  UISprite_o *headerMessageBgSprite; // x20
  struct UISprite_array *arrowSprite; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x23
  UISprite_o *v10; // x20
  struct UICommonButton_o *decideButton; // x8
  unsigned __int128 v12; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4E720EE & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_411/*"#606060"*/);
    sub_1D0F0B4(&StringLiteral_20943/*"img_selected_frame"*/);
    sub_1D0F0B4(&StringLiteral_9503/*"Name_BG_Gradation"*/);
    sub_1D0F0B4(&StringLiteral_11707/*"SELECT_GRAND_HEADER_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_21062/*"img_txt_grand_class"*/);
    sub_1D0F0B4(&StringLiteral_20683/*"img_arrow"*/);
    byte_4E720EE = 1;
  }
  v12 = 0u;
  AndroidBackKeyManager__AddBackKeyTarget(this->fields.backButtonObject, 0);
  headerMessageLabel = this->fields.headerMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bitEffectRoot = LocalizationManager__Get((System_String_o *)StringLiteral_11707/*"SELECT_GRAND_HEADER_MESSAGE"*/, 0);
  if ( !headerMessageLabel )
    goto LABEL_20;
  UILabel__set_text(headerMessageLabel, bitEffectRoot, 0);
  headerMessageBgSprite = this->fields.headerMessageBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(headerMessageBgSprite, (System_String_o *)StringLiteral_21062/*"img_txt_grand_class"*/, 0);
  bitEffectRoot = (System_String_o *)this->fields.headerMessageBgSprite;
  if ( !bitEffectRoot )
    goto LABEL_20;
  ((void (__fastcall *)(System_String_o *, void *))bitEffectRoot->klass[1]._1.generic_class)(
    bitEffectRoot,
    bitEffectRoot->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetGrandServantListImage(this->fields.nameBgSprite, (System_String_o *)StringLiteral_9503/*"Name_BG_Gradation"*/, 0);
  bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                       this->fields.glowSprite,
                                       (System_String_o *)StringLiteral_20943/*"img_selected_frame"*/,
                                       0);
  arrowSprite = this->fields.arrowSprite;
  if ( !arrowSprite )
    goto LABEL_20;
  max_length = arrowSprite->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1D0F314(bitEffectRoot);
      v10 = arrowSprite->m_Items[v9];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                           v10,
                                           (System_String_o *)StringLiteral_20683/*"img_arrow"*/,
                                           0);
      LODWORD(max_length) = arrowSprite->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  bitEffectRoot = (System_String_o *)this->fields.bitEffectRoot;
  if ( !bitEffectRoot
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitEffectRoot, 0, 0),
        bitEffectRoot = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             (System_String_o *)StringLiteral_411/*"#606060"*/,
                                             (UnityEngine_Color_o *)&v12,
                                             0),
        (decideButton = this->fields.decideButton) == 0) )
  {
LABEL_20:
    sub_1D0F30C(bitEffectRoot, v5);
  }
  decideButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v12;
}


System_Collections_IEnumerator_o *SelectGrandServantComponent__WaitLoadMultiPortrait(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  __int64 v4; // x20

  if ( (byte_4E72106 & 1) == 0 )
  {
    sub_1D0F0B4(&SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
    byte_4E72106 = 1;
  }
  v4 = sub_1D0F300(SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = collectList;
  sub_1D0F058(v4 + 32, collectList);
  return (System_Collections_IEnumerator_o *)v4;
}


void SelectGrandServantComponent___LoadGrandServantSelectEffect_b__67_0(
        SelectGrandServantComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.grandServantSelectEffectAssetData = assetData;
  sub_1D0F058(&this->fields.grandServantSelectEffectAssetData, assetData);
  SelectGrandServantComponent__PlayGrandServantSelectEffect(this, v4);
}


void SelectGrandServantComponent___OnCenterFinished_b__49_0(
        SelectGrandServantComponent_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentIcon; // x0

  currentIcon = (UnityEngine_Component_o *)this->fields.currentIcon;
  if ( !currentIcon
    || (currentIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentIcon, 0), !elm) )
  {
    sub_1D0F30C(currentIcon, elm);
  }
  GrandServantIconComponent__ApplyOffset(elm, (UnityEngine_Transform_o *)currentIcon, 0);
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
  const MethodInfo *v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  struct GrandGraphEntity_o *grandGraphEntity; // x8
  int32_t id; // w21
  SetupGrandServantRequest_o *v12; // x20
  __int128 v13; // q1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_4E7210B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent_OnEndGrandSetupRequest__);
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E7210B = 1;
  }
  if ( isDecide )
  {
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(
                                 this,
                                 (const MethodInfo *)isDecide);
    v6 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_44524940(v6, CurrentUserServantEntity, 0);
    this->fields.beforeUserServantEntity = v6;
    sub_1D0F058(&this->fields.beforeUserServantEntity, v6);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_OnEndGrandSetupRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager__getRequest_object_(
                            v9,
                            (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
      grandGraphEntity = this->fields.grandGraphEntity;
      if ( grandGraphEntity )
      {
        id = grandGraphEntity->fields.id;
        v12 = (SetupGrandServantRequest_o *)Instance;
        Instance = (int64_t)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v8);
        if ( Instance )
        {
          v13 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v17.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v17;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v16, 0);
          if ( v12 )
          {
            SetupGrandServantRequest__beginRequest(v12, id, Instance, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1D0F30C(Instance, v8);
  }
  confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
  v15 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
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

  if ( (byte_4E7210C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_ActionExtensions_Call_UserServantEntity___);
    byte_4E7210C = 1;
  }
  SelectGrandServantComponent__DestroycOnfirmServantDialog(this, method);
  onDecideGrandAction = (System_Action_T__o *)this->fields.onDecideGrandAction;
  CurrentUserServantEntity = (Il2CppObject *)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v4);
  ActionExtensions__Call_object_(
    onDecideGrandAction,
    CurrentUserServantEntity,
    (const MethodInfo_31932D8 *)Method_ActionExtensions_Call_UserServantEntity___);
}


void SelectGrandServantComponent___SetUpServantInfo_g__OnClickIcon_48_1(
        SelectGrandServantComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x21
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  struct GrandServantIconComponent_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  UICenterOnChild_o *centerChild; // x20

  if ( (byte_4E7210A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
    sub_1D0F0B4(&StringLiteral_2182/*"AdjustIconToCenter"*/);
    byte_4E7210A = 1;
  }
  if ( !this->fields.isDragging )
  {
    currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    scrollView = (UIScrollView_o *)UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
    if ( ((unsigned __int8)scrollView & 1) != 0 )
    {
      v8 = this->fields.currentIcon;
      if ( !v8 )
        goto LABEL_18;
      if ( v8->fields._Index_k__BackingField == index )
        return;
    }
    this->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_73343984(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2182/*"AdjustIconToCenter"*/,
      0);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__Press(scrollView, 0, 0);
      scrollView = this->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0);
        v9 = Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1D0F0CC(Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
        v10 = (System_Reflection_MethodBase_o *)sub_1D0F098(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0);
        SelectGrandServantComponent__ResetDisplay(this, v11);
        scrollView = (UIScrollView_o *)this->fields.cachedIconList;
        if ( scrollView )
        {
          centerChild = this->fields.centerChild;
          scrollView = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)scrollView,
                                           index,
                                           (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
          if ( scrollView )
          {
            scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)scrollView,
                                             0);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_50548992(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1D0F30C(scrollView, v7);
  }
}


UserServantEntity_o *SelectGrandServantComponent__get_CurrentUserServantEntity(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x20
  __int64 v4; // x1
  bool v5; // w8
  UserServantEntity_o *result; // x0
  struct GrandServantIconComponent_o *v7; // x8

  if ( (byte_4E720EB & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E720EB = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
  result = 0;
  if ( v5 )
  {
    v7 = this->fields.currentIcon;
    if ( !v7 )
      sub_1D0F30C(0, v4);
    return v7->fields._UserServantEntity_k__BackingField;
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
  if ( (byte_4E72111 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Func_bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__);
    sub_1D0F0B4(&SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)sub_1D0F0B4(&UnityEngine_WaitUntil_TypeInfo);
    byte_4E72111 = 1;
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
                                                                               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    v4 = (Il2CppObject *)sub_1D0F300(SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct SelectGrandServantComponent___c__DisplayClass73_0_o *)v4;
    sub_1D0F058(&v2->fields.__8__1, v4);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)v2->fields.__8__1;
    if ( this )
    {
      collectList = v2->fields.collectList;
      *(_QWORD *)&this->fields.__1__state = collectList;
      sub_1D0F058(&this->fields, collectList);
      v6 = (Il2CppObject *)v2->fields.__8__1;
      v7 = (System_Func_bool__o *)sub_1D0F300(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        v6,
        Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__,
        0);
      v8 = (UnityEngine_WaitUntil_o *)sub_1D0F300(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0);
      v2->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &v2->fields.__2__current;
      sub_1D0F058(p__2__current, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_14:
    sub_1D0F30C(this, method);
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

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
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

  if ( (byte_4E7210D & 1) == 0 )
  {
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    byte_4E7210D = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(SelectGrandServantComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantComponent___c_o *)v1;
  sub_1D0F058(SelectGrandServantComponent___c_TypeInfo->static_fields, v1);
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
    sub_1D0F30C(this, 0);
  return UserServantEntity__IsExtra1(e, 0);
}


bool SelectGrandServantComponent___c___GetSelectGrandConfirmServantDialogName_b__63_1(
        SelectGrandServantComponent___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1D0F30C(this, 0);
  return UserServantEntity__IsExtra2(e, 0);
}


void SelectGrandServantComponent___c___RefreshDisplayAfterEndShowServantStatus_b__71_0(
        SelectGrandServantComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4E7210E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E7210E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void SelectGrandServantComponent___c___ResetDisplay_b__56_0(
        SelectGrandServantComponent___c_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm )
    sub_1D0F30C(this, 0);
  GrandServantIconComponent__ResetOffset(elm, 0);
}


int32_t SelectGrandServantComponent___c___SetUpServantInfo_b__48_0(
        SelectGrandServantComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1D0F30C(this, 0);
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
    sub_1D0F30C(this, x);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (userServantEntity = this->fields.userServantEntity,
        v4 = this,
        _4__this->fields.selectUserServantEntity = userServantEntity,
        sub_1D0F058(&_4__this->fields.selectUserServantEntity, userServantEntity),
        (this = (SelectGrandServantComponent___c__DisplayClass66_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1D0F30C(this, method);
  }
  SelectGrandServantComponent__LoadGrandServantSelectEffect((SelectGrandServantComponent_o *)this, method);
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
  if ( (byte_4E7210F & 1) == 0 )
  {
    this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7210F = 1;
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
  this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                                                  &v11,
                                                                  0);
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_9:
    sub_1D0F30C(this, icon);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v8;
  return this == (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
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

  if ( (byte_4E72110 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_All_StandFigureCollect___);
    sub_1D0F0B4(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_1D0F0B4(&Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__);
    sub_1D0F0B4(&SelectGrandServantComponent___c_TypeInfo);
    byte_4E72110 = 1;
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
    _9__73_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_StandFigureCollect__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__73_1,
      v6,
      Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__,
      0);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__73_1 = (struct System_Func_StandFigureCollect__bool__o *)_9__73_1;
    sub_1D0F058(&static_fields->__9__73_1, _9__73_1);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)collectList,
           (System_Func_TSource__bool__o *)_9__73_1,
           (const MethodInfo_32597C8 *)Method_System_Linq_Enumerable_All_StandFigureCollect___);
}