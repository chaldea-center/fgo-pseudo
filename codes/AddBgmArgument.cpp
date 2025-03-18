void __fastcall AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dataVal )
    sub_1C3B9C0(v5, v6);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0LL);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)ControlOtherBgmPriorityAtOverStageBgmArray,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v23; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v25; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v38; // x1
  __int64 v39; // x19
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  BattleFieldEnvironmentData_BGMData_o *v48; // x22
  __int64 v49; // x23
  __int64 v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  System_Int32_array *BuffIndividuality; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  System_Func_object__bool__o *v61; // x25
  Il2CppObject *v62; // x0
  const MethodInfo *v63; // x2
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_4C246D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___, fieldEnv);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v7);
    sub_1C3B764(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo, v8);
    sub_1C3B764(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v9);
    sub_1C3B764(&System_IDisposable_TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, v12);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1C3B764(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__, v14);
    sub_1C3B764(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__, v15);
    sub_1C3B764(&AddBgmArgument___c__DisplayClass3_0_TypeInfo, v16);
    sub_1C3B764(&AddBgmArgument___c_TypeInfo, v17);
    byte_4C246D9 = 1;
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
      v23 = AddBgmArgument___c_TypeInfo;
      if ( !AddBgmArgument___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo);
        v23 = AddBgmArgument___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__bool__o *)v23->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = AddBgmArgument___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_0,
          v25,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0LL);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
          (int64_t)_9__3_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1C3B9C0(IsHighPriorityThanBaseStageBgm, v21);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v34 = IsHighPriorityThanBaseStageBgm;
      v35 = *(unsigned __int16 *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v35;
          p_offset += 4;
          if ( !v35 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1C8D744(
                     IsHighPriorityThanBaseStageBgm,
                     System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                     0LL);
      }
      v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v34,
              *(_QWORD *)(p_method + 8));
      if ( !v39 )
        sub_1C3B9C0(0LL, v38);
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_24;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_24:
          v43 = sub_1C8D744(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v46 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_31;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_31:
          v47 = sub_1C8D744(
                  v39,
                  System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo,
                  0LL);
        }
        v48 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(
                                                        v39,
                                                        *(_QWORD *)(v47 + 8));
        v49 = sub_1C3B9B0(AddBgmArgument___c__DisplayClass3_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0LL);
        if ( !v48 )
          sub_1C3B9C0(v50, v51);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v48, fieldEnv, v52);
        if ( !v49 )
          sub_1C3B9C0(BuffIndividuality, BuffIndividuality);
        *(_QWORD *)(v49 + 16) = BuffIndividuality;
        sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)BuffIndividuality, v54, v55, v56, v57, v58, v59);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v61 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v61,
          (Il2CppObject *)v49,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0LL);
        v62 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v61,
                (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v62 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v62,
            v48,
            v63);
      }
      v64 = *(_QWORD *)v39;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_41;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_41:
        v67 = sub_1C8D744(v39, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v39, *(_QWORD *)(v67 + 8));
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v14; // x21
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v19; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_4C246DA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, fieldEnv);
    this = (AddBgmArgument_o *)sub_1C3B764(
                                 &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__,
                                 v6);
    byte_4C246DA = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v14 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
  v15 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this[1].klass);
  if ( !controlOtherBgmPriorityAtOverStageBgmArray )
    goto LABEL_14;
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= controlOtherBgmPriorityAtOverStageBgmArray->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)addBgm,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v14->fields._size = klass_low + 1;
    v17[4] = (Il2CppClass *)addBgm;
    sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)addBgm, v7, v8, v9, v10, v11, v12);
  }
  BattleFieldEnvironmentData__SortBGM_44330004(fieldEnv, v14, v18);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v14,
                               0,
                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v19 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0LL
    || !addBgm
    || (comData = addBgm->fields.comData) == 0LL )
  {
LABEL_14:
    sub_1C3B9C0(this, fieldEnv);
  }
  return v19->max_length == comData->fields.addOrder;
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C246DB & 1) == 0 )
  {
    sub_1C3B764(&AddBgmArgument___c_TypeInfo, v1);
    byte_4C246DB = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(AddBgmArgument___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)AddBgmArgument___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}