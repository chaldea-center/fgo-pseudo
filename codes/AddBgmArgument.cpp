void __fastcall AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dataVal )
    sub_1B64324(v5);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0LL);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields,
    (int32_t)ControlOtherBgmPriorityAtOverStageBgmArray,
    v7,
    v8);
}


void __fastcall AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *IsHighPriorityThanBaseStageBgm; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v24; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v26; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x19
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  BattleFieldEnvironmentData_BGMData_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x23
  __int64 v48; // x0
  const MethodInfo *v49; // x2
  System_Int32_array *BuffIndividuality; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  System_Func_object__bool__o *v56; // x25
  Il2CppObject *v57; // x0
  const MethodInfo *v58; // x2
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0

  if ( (byte_49FE98A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___, fieldEnv);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v7);
    sub_1B640C8(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__, v14);
    sub_1B640C8(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__, v15);
    sub_1B640C8(&AddBgmArgument___c__DisplayClass3_0_TypeInfo, v16);
    sub_1B640C8(&AddBgmArgument___c_TypeInfo, v17);
    byte_49FE98A = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray,
                    0LL);
  if ( !IsNullOrEmpty )
  {
    IsHighPriorityThanBaseStageBgm = (System_Collections_Generic_IEnumerable_TSource__o *)AddBgmArgument__IsHighPriorityThanBaseStageBgm(
                                                                                            (AddBgmArgument_o *)IsNullOrEmpty,
                                                                                            fieldEnv,
                                                                                            addBgm,
                                                                                            v19);
    if ( ((unsigned __int8)IsHighPriorityThanBaseStageBgm & 1) != 0 )
    {
      if ( !fieldEnv )
        goto LABEL_47;
      bgmList = fieldEnv->fields.bgmList;
      v24 = AddBgmArgument___c_TypeInfo;
      if ( !AddBgmArgument___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo);
        v24 = AddBgmArgument___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__bool__o *)v24->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = AddBgmArgument___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                   System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                   v21,
                                                   v22);
        System_Func_object__bool____ctor(
          _9__3_0,
          v26,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0LL);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v28, v29);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1B64324(IsHighPriorityThanBaseStageBgm);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v31 = IsHighPriorityThanBaseStageBgm;
      v32 = *(unsigned __int16 *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1BB60A8(
                     IsHighPriorityThanBaseStageBgm,
                     System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                     0LL);
      }
      v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v31,
              *(_QWORD *)(p_method + 8));
      if ( !v35 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v36 = *(_QWORD *)v35;
        v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v37;
            v38 += 4;
            if ( !v37 )
              goto LABEL_24;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_24:
          v39 = sub_1BB60A8(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
          break;
        v40 = *(_QWORD *)v35;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_31;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_31:
          v43 = sub_1BB60A8(
                  v35,
                  System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo,
                  0LL);
        }
        v44 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(
                                                        v35,
                                                        *(_QWORD *)(v43 + 8));
        v47 = sub_1B64314(AddBgmArgument___c__DisplayClass3_0_TypeInfo, v45, v46);
        System_Object___ctor((Il2CppObject *)v47, 0LL);
        if ( !v44 )
          sub_1B64324(v48);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v44, fieldEnv, v49);
        if ( !v47 )
          sub_1B64324(BuffIndividuality);
        *(_QWORD *)(v47 + 16) = BuffIndividuality;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 16), (int32_t)BuffIndividuality, v51, v52);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v56 = (System_Func_object__bool__o *)sub_1B64314(
                                               System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo,
                                               v54,
                                               v55);
        System_Func_object__bool____ctor(
          v56,
          (Il2CppObject *)v47,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0LL);
        v57 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v56,
                (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v57 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v57,
            v44,
            v58);
      }
      v59 = *(_QWORD *)v35;
      v60 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_41;
        }
        v62 = v59 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_41:
        v62 = sub_1BB60A8(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v35, *(_QWORD *)(v62 + 8));
    }
  }
}


bool __fastcall AddBgmArgument__IsHighPriorityThanBaseStageBgm(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v10; // x21
  _QWORD *v11; // x9
  __int64 klass_low; // x10
  Il2CppClass **v13; // x0
  const MethodInfo *v14; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v15; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_49FE98B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, fieldEnv);
    this = (AddBgmArgument_o *)sub_1B640C8(
                                 &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__,
                                 v6);
    byte_49FE98B = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v10 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
  v11 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this[1].klass);
  if ( !controlOtherBgmPriorityAtOverStageBgmArray )
    goto LABEL_14;
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= controlOtherBgmPriorityAtOverStageBgmArray->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)addBgm,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v10->fields._size = klass_low + 1;
    v13[4] = (Il2CppClass *)addBgm;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)addBgm, v7, v8);
  }
  BattleFieldEnvironmentData__SortBGM_42405060(fieldEnv, v10, v14);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v10,
                               0,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v15 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0LL
    || !addBgm
    || (comData = addBgm->fields.comData) == 0LL )
  {
LABEL_14:
    sub_1B64324(this);
  }
  return v15->max_length == comData->fields.addOrder;
}


// attributes: thunk
void __fastcall AddBgmArgument__PrevAddBgmProc(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(this, fieldEnv, addBgm, method);
}


void __fastcall AddBgmArgument___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE98C & 1) == 0 )
  {
    sub_1B640C8(&AddBgmArgument___c_TypeInfo, v1);
    byte_49FE98C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AddBgmArgument___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AddBgmArgument___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall AddBgmArgument___c___ctor(AddBgmArgument___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AddBgmArgument___c___ControlOtherBgmPriorityAtOverStageBgm_b__3_0(
        AddBgmArgument___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.method)(
            x,
            x->klass->vtable._6_UpdateActive.methodPtr,
            method) & 1) == 0;
}


void __fastcall AddBgmArgument___c__DisplayClass3_0___ctor(
        AddBgmArgument___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AddBgmArgument___c__DisplayClass3_0___ControlOtherBgmPriorityAtOverStageBgm_b__1(
        AddBgmArgument___c__DisplayClass3_0_o *this,
        ControlOtherBgmPriorityAtOverStageBgm_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return Individuality__CheckSignedIndividualities(this->fields.buffIndividuality, x->fields.individuality, 0LL);
}