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
    sub_1BCAA3C(v5, v6);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0LL);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1BCA784(
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *IsHighPriorityThanBaseStageBgm; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v36; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v38; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v51; // x1
  __int64 v52; // x19
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  BattleFieldEnvironmentData_BGMData_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x23
  __int64 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  System_Int32_array *BuffIndividuality; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Func_object__bool__o *v80; // x25
  Il2CppObject *v81; // x0
  const MethodInfo *v82; // x2
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0

  if ( (byte_4B18819 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___,
      fieldEnv,
      addBgm);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v7, v8);
    sub_1BCA7E0(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__, v21, v22);
    sub_1BCA7E0(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__, v23, v24);
    sub_1BCA7E0(&AddBgmArgument___c__DisplayClass3_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&AddBgmArgument___c_TypeInfo, v27, v28);
    byte_4B18819 = 1;
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
                                                                                            v30);
    if ( ((unsigned __int8)IsHighPriorityThanBaseStageBgm & 1) != 0 )
    {
      if ( !fieldEnv )
        goto LABEL_47;
      bgmList = fieldEnv->fields.bgmList;
      v36 = AddBgmArgument___c_TypeInfo;
      if ( !AddBgmArgument___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo, v32);
        v36 = AddBgmArgument___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__bool__o *)v36->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36, v32);
          v36 = AddBgmArgument___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v36->static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                   v32,
                                                   v33,
                                                   v34);
        System_Func_object__bool____ctor(
          _9__3_0,
          v38,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0LL);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
          (int64_t)_9__3_0,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1BCAA3C(IsHighPriorityThanBaseStageBgm, v32);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v47 = IsHighPriorityThanBaseStageBgm;
      v48 = *(unsigned __int16 *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsHighPriorityThanBaseStageBgm->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v48;
          p_offset += 4;
          if ( !v48 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1C1C7C0(
                     IsHighPriorityThanBaseStageBgm,
                     System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                     0LL);
      }
      v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v47,
              *(_QWORD *)(p_method + 8));
      if ( !v52 )
        sub_1BCAA3C(0LL, v51);
      while ( 1 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_24;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_24:
          v56 = sub_1C1C7C0(v52, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
          break;
        v57 = *(_QWORD *)v52;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v59 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_31;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_31:
          v60 = sub_1C1C7C0(
                  v52,
                  System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo,
                  0LL);
        }
        v61 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(
                                                        v52,
                                                        *(_QWORD *)(v60 + 8));
        v65 = sub_1BCAA2C(AddBgmArgument___c__DisplayClass3_0_TypeInfo, v62, v63, v64);
        System_Object___ctor((Il2CppObject *)v65, 0LL);
        if ( !v61 )
          sub_1BCAA3C(v66, v67);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v61, fieldEnv, v68);
        if ( !v65 )
          sub_1BCAA3C(BuffIndividuality, BuffIndividuality);
        *(_QWORD *)(v65 + 16) = BuffIndividuality;
        sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 16), (int64_t)BuffIndividuality, v70, v71, v72, v73, v74, v75);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v80 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo,
                                               v77,
                                               v78,
                                               v79);
        System_Func_object__bool____ctor(
          v80,
          (Il2CppObject *)v65,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0LL);
        v81 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v80,
                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v81 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v81,
            v61,
            v82);
      }
      v83 = *(_QWORD *)v52;
      v84 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
        {
          --v84;
          v85 += 4;
          if ( !v84 )
            goto LABEL_41;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_41:
        v86 = sub_1C1C7C0(v52, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v86)(v52, *(_QWORD *)(v86 + 8));
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
  __int64 v7; // x2
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v15; // x21
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v20; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_4B1881A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, fieldEnv, addBgm);
    this = (AddBgmArgument_o *)sub_1BCA7E0(
                                 &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__,
                                 v6,
                                 v7);
    byte_4B1881A = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v15 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
  v16 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this[1].klass);
  if ( !controlOtherBgmPriorityAtOverStageBgmArray )
    goto LABEL_14;
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= controlOtherBgmPriorityAtOverStageBgmArray->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)addBgm,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v15->fields._size = klass_low + 1;
    v18[4] = (Il2CppClass *)addBgm;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)addBgm, v8, v9, v10, v11, v12, v13);
  }
  BattleFieldEnvironmentData__SortBGM_43518552(fieldEnv, v15, v19);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v15,
                               0,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v20 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0LL
    || !addBgm
    || (comData = addBgm->fields.comData) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(this, fieldEnv);
  }
  return v20->max_length == comData->fields.addOrder;
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1881B & 1) == 0 )
  {
    sub_1BCA7E0(&AddBgmArgument___c_TypeInfo, v1, v2);
    byte_4B1881B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AddBgmArgument___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AddBgmArgument___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}