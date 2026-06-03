void FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E717F0 & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    byte_4E717F0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v5; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x24
  System_Collections_Generic_HashSet_int__o *v11; // x19
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v13; // x25
  FortificationAutomaticDialogComponent___c_c *v14; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v16; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  Il2CppObject *monitor; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x23
  System_Func_object__int__o *v21; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v24; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  FortificationAutomaticDialogComponent_o *v29; // x26
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x1
  __int64 v42; // x23
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  Il2CppObject *v47; // x27
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  Il2CppObject *v55; // x26
  System_Func_object__bool__o *v56; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_List_TSource__o *v58; // x0
  FortificationAutomaticDialogComponent___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v62; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  Il2CppObject *v65; // x0
  Il2CppObject *v66; // x27
  Il2CppClass *v67; // x19
  void *v68; // x29
  System_Collections_Generic_HashSet_int__o *v69; // x28
  __int64 v70; // x0
  _BOOL8 v71; // x0
  __int64 v72; // x1
  Il2CppClass *v73; // x8
  Il2CppObject v74; // q0
  Il2CppObject v75; // q1
  int32_t name_high; // w27
  int32_t name; // w28
  int64_t v78; // x29
  EnterUserSvtInfo_o *v79; // x26
  __int64 v80; // x0
  __int64 v81; // x1
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  NetworkManager_ResultCallbackFunc_o *v92; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v94; // x21
  const MethodInfo *v95; // x3
  FortificationAutomaticDialogComponent_o *v96; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4E717EB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&EnterUserSvtInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_1D0F0B4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4E717EB = 1;
  }
  entities = 0;
  memset(&v101, 0, sizeof(v101));
  v5 = sub_1D0F300(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_93;
  *(_QWORD *)(v5 + 24) = this;
  sub_1D0F058(v5 + 24, this);
  *(_BYTE *)(v5 + 32) = isSet;
  v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v5 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0) )
    return;
  object = (Il2CppObject *)v5;
  if ( *(_BYTE *)(v5 + 32) )
  {
    v10 = (Il2CppObject *)sub_1D0F300(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor(v10, 0);
    if ( v10 )
    {
      v10[1].monitor = (void *)v5;
      sub_1D0F058(&v10[1].monitor, v5);
      v11 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v11,
        (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v11;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1D0F058(&this->fields.setSvtIdList, v11);
      v96 = this;
      v13 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v12);
      v14 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v14 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v14->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v16,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1D0F058(&static_fields->__9__18_1, _9__18_1);
      }
      v18 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      monitor = (Il2CppObject *)v10[1].monitor;
      v20 = v18;
      v21 = (System_Func_object__int__o *)sub_1D0F300(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v21,
        monitor,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0);
      v22 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v20,
              (System_Func_TSource__TKey__o *)v21,
              (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0);
        v24 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantClassMaster___);
        v10[1].klass = (Il2CppClass *)v24;
        Master_object = (EventFortificationMaster_o *)sub_1D0F058(&v10[1], v24);
        if ( v22 )
        {
          klass = v22->klass;
          v26 = *(unsigned __int16 *)&v22->klass->_2.rank;
          if ( *(_WORD *)&v22->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v26;
              p_offset += 4;
              if ( !v26 )
                goto LABEL_24;
            }
            v28 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_24:
            v28 = sub_1CE5430(
                    v22,
                    System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                    0);
          }
          v42 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v28)(
                  v22,
                  *(_QWORD *)(v28 + 8));
          if ( !v42 )
            sub_1D0F30C(0, v41);
          while ( 1 )
          {
            v43 = *(_QWORD *)v42;
            v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
            {
              v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v44;
                v45 += 4;
                if ( !v44 )
                  goto LABEL_41;
              }
              v46 = v43 + 16LL * *v45 + 312;
            }
            else
            {
LABEL_41:
              v46 = sub_1CE5430(v42, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
              break;
            v47 = (Il2CppObject *)sub_1D0F300(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor(v47, 0);
            if ( !v47 )
              sub_1D0F30C(v48, v49);
            v47[1].monitor = v10;
            sub_1D0F058(&v47[1].monitor, v10);
            v50 = *(_QWORD *)v42;
            v51 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
            {
              v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v52
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v51;
                v52 += 4;
                if ( !v51 )
                  goto LABEL_49;
              }
              v53 = v50 + 16LL * *v52 + 312;
            }
            else
            {
LABEL_49:
              v53 = sub_1CE5430(
                      v42,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0);
            }
            v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v42, *(_QWORD *)(v53 + 8));
            v47[1].klass = (Il2CppClass *)v54;
            v55 = v47 + 1;
            sub_1D0F058(&v47[1], v54);
            v56 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v56,
              v47,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0);
            v57 = System_Linq_Enumerable__Where_object_(
                    OrganizationList,
                    (System_Func_TSource__bool__o *)v56,
                    (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v58 = System_Linq_Enumerable__ToList_object_(
                    v57,
                    (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v58;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v59->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v59->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v59);
                v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v62 = (Il2CppObject *)v59->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1D0F300(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v62,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0);
              v63 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v63->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1D0F058(&v63->__9__18_4, _9__18_4);
            }
            v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                         v60,
                                                                         (System_Func_TSource__TKey__o *)_9__18_4,
                                                                         (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v65 = System_Linq_Enumerable__FirstOrDefault_object_(
                    v64,
                    (const MethodInfo_3277A14 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v66 = v65;
            if ( v65 )
            {
              v67 = v65[5].klass;
              v68 = v65[5].monitor;
              v69 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v103.fields.currentCryptoKey = v67;
              *(_QWORD *)&v103.fields.fakeValue = v68;
              v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v103, 0);
              if ( !v69 )
                sub_1D0F30C(v70, (unsigned int)v70);
              v71 = System_Collections_Generic_HashSet_int___Add(
                      v69,
                      v70,
                      (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v73 = v55->klass;
              if ( !v55->klass )
                sub_1D0F30C(v71, v72);
              v74 = v66[1];
              v75 = v66[2];
              name = (int32_t)v73->_1.name;
              name_high = HIDWORD(v73->_1.name);
              *(Il2CppObject *)&v100.fields.currentCryptoKey = v74;
              *(Il2CppObject *)&v100.fields.fakeValue = v75;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v99 = v100;
              v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v99, 0);
              v79 = (EnterUserSvtInfo_o *)sub_1D0F300(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v79, name, name_high, v78, 0);
              if ( !v8 )
                sub_1D0F30C(v80, v81);
              items = v8->fields._items;
              v83 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v8->fields._version;
              if ( !items )
                sub_1D0F30C(v80, v81);
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v79,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
              }
              else
              {
                v85 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v85[4] = (Il2CppClass *)v79;
                sub_1D0F058(v85 + 4, v79);
              }
            }
          }
          v86 = *(_QWORD *)v42;
          v87 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
          {
            v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
            {
              --v87;
              v88 += 4;
              if ( !v87 )
                goto LABEL_73;
            }
            v89 = v86 + 16LL * *v88 + 312;
          }
          else
          {
LABEL_73:
            v89 = sub_1CE5430(v42, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v89)(v42, *(_QWORD *)(v89 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3800E04 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v29 = v96;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1D0F30C(Master_object, v7);
  }
  v29 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v9);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v101.fields._list = *(_OWORD *)&v100.fields.currentCryptoKey;
  v101.fields._current = (Il2CppObject *)v100.fields.fakeValue;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v101,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v30 )
      break;
    if ( !v101.fields._current )
      sub_1D0F30C(v30, v31);
    v32 = (int32_t)v101.fields._current[1].klass;
    klass_high = HIDWORD(v101.fields._current[1].klass);
    v34 = (EnterUserSvtInfo_o *)sub_1D0F300(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v34, v32, klass_high, 0, 0);
    if ( !v8 )
      sub_1D0F30C(v35, v36);
    v37 = v8->fields._items;
    v38 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v8->fields._version;
    if ( !v37 )
      sub_1D0F30C(v35, v36);
    v39 = v8->fields._size;
    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v34,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v8->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v34;
      sub_1D0F058(v40 + 4, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v101,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v90 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v90 = (_QWORD *)sub_1D0F0CC(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v91 = (System_Reflection_MethodBase_o *)sub_1D0F098(v90, v90[4]);
  OverwriteAssetSoundName__PlaySystemSe(v91, 8, 0, 0);
  v92 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v92,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v92,
                                                  (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v8 )
    goto LABEL_93;
  eventId = v29->fields.eventId;
  v94 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v94 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v94, eventId, (EnterUserSvtInfo_array *)Master_object, v95);
}


void FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4E717EE & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_4E717EE = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4E717ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_4E717ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FortificationAutomaticDialogComponent__Close(this, v5);
  }
}


void FortificationAutomaticDialogComponent__OnClickRemove(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 0, v2);
  }
}


void FortificationAutomaticDialogComponent__OnClickSet(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 1, v2);
  }
}


void FortificationAutomaticDialogComponent__Open(
        FortificationAutomaticDialogComponent_o *this,
        System_Action_o *onDecide,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  UILabel_o *titleLb; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v14; // x20

  if ( (byte_4E717EA & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6551/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_1D0F0B4(&StringLiteral_6552/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_6553/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_6554/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_4E717EA = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1D0F058(&this->fields.onDecide, onDecide);
    this->fields.closeCallBack = closeCallBack;
    sub_1D0F058(&this->fields.closeCallBack, closeCallBack);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6554/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v8, 0);
    descriptionLb = this->fields.descriptionLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6551/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v8, 0);
    setButtonLb = this->fields.setButtonLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6553/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v8, 0),
          removeButtonLb = this->fields.removeButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6552/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v8, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3724/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1D0F30C(v8, v9);
    }
    UILabel__set_text(cancelButtonLb, v8, 0);
    this->fields.state = 1;
    v14 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, 0);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  System_Collections_Generic_List_object__o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  EventFortificationSvtMaster_o *v9; // x24
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  __int64 v13; // x1
  NetworkManager_c *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x26
  int v20; // w27
  int monitor; // w28
  int v22; // w29
  __int64 v23; // x26
  __int64 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  Il2CppObject *v30; // x27
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x1
  Il2CppObject *v34; // x26
  __int64 v35; // x0
  __int64 v36; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v38; // x29
  Il2CppObject *object; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x27
  __int64 monitor_low; // x1
  unsigned int v43; // w29
  int v44; // w28
  int v45; // w27
  __int64 v46; // x26
  __int64 v47; // x0
  __int64 v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w28
  unsigned int bits; // w29
  int klass_high; // w27
  __int64 v56; // x0
  __int64 v57; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v59; // x0
  __int64 v60; // x1
  unsigned int v61; // w29
  int v62; // w28
  int v63; // w27
  __int64 v64; // x0
  __int64 v65; // x1
  Il2CppClass **v66; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v69; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v72; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v73; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4E717EC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_1D0F0B4(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_4E717EC = 1;
  }
  memset(&v77, 0, sizeof(v77));
  entity = 0;
  entities = 0;
  memset(&v74, 0, sizeof(v74));
  v72 = 0;
  v73 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v69 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1D0F30C(v7, v8);
  v9 = (EventFortificationSvtMaster_o *)v7;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v77 = v71;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v77.fields._current;
    if ( !v77.fields._current )
      sub_1D0F30C(v10, v11);
    if ( !v69 )
      sub_1D0F30C(0, v11);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v69,
           &entities,
           (int32_t)v77.fields._current[1].klass,
           HIDWORD(v77.fields._current[1].klass),
           0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4E710BF )
      {
        sub_1D0F0B4(&NetworkManager_TypeInfo);
        byte_4E710BF = 1;
      }
      v14 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1D0F30C(v14, v13);
      v15 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v14->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0);
      if ( v15 )
      {
        if ( !entity )
          sub_1D0F30C(v15, v16);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1D0F30C(0, v16);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v71,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v74 = v71;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v74,
                    (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v30 = (Il2CppObject *)sub_1D0F300(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor(v30, 0);
            if ( !v30 )
              sub_1D0F30C(v31, v32);
            v33 = v74.fields._current;
            v30[1].klass = (Il2CppClass *)v74.fields._current;
            v34 = v30 + 1;
            v35 = sub_1D0F058(&v30[1], v33);
            if ( !entity )
              sub_1D0F30C(v35, v36);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v38 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v38,
              v30,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v38,
                       (const MethodInfo_3238EB8 *)Method_BasicHelper_Find_SetSvtInfo___);
            v41 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              klass = v34->klass;
              if ( !v34->klass )
                sub_1D0F30C(0, v40);
              namespaze = (int)klass->_1.namespaze;
              bits = klass->_1.byval_arg.bits;
              klass_high = HIDWORD(current[1].klass);
              v46 = sub_1D0F300(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v46, 0);
              *(_DWORD *)(v46 + 16) = klass_high;
              *(_DWORD *)(v46 + 20) = namespaze;
              *(_DWORD *)(v46 + 24) = bits;
              if ( !v6 )
                sub_1D0F30C(v56, v57);
              items = v6->fields._items;
              v50 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_1D0F30C(v56, v57);
              size = v6->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
              {
LABEL_65:
                v66 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v66[4] = (Il2CppClass *)v46;
                sub_1D0F058(v66 + 4, v46);
                continue;
              }
              goto LABEL_66;
            }
            monitor_low = LODWORD(object[1].monitor);
            if ( !(_DWORD)monitor_low && v4 )
              break;
            if ( (_DWORD)monitor_low && !HIDWORD(object[1].klass) && v4 )
            {
              setSvtIdList = this->fields.setSvtIdList;
              if ( !setSvtIdList )
                sub_1D0F30C(0, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v9 )
                sub_1D0F30C(object, monitor_low);
              v59 = EventFortificationSvtMaster__TryGetEntity(
                      v9,
                      &v72,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0);
              if ( !v59 )
              {
                if ( !v34->klass )
                  sub_1D0F30C(v59, v60);
                v61 = v34->klass->_1.byval_arg.bits;
                v62 = HIDWORD(current[1].klass);
                v63 = (int)v41[1].klass;
                v46 = sub_1D0F300(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v46, 0);
                *(_DWORD *)(v46 + 16) = v62;
                *(_DWORD *)(v46 + 20) = v63;
                *(_DWORD *)(v46 + 24) = v61;
                if ( !v6 )
                  sub_1D0F30C(v64, v65);
                items = v6->fields._items;
                v50 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v6->fields._version;
                if ( !items )
                  sub_1D0F30C(v64, v65);
                size = v6->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !v34->klass )
            sub_1D0F30C(object, monitor_low);
          v43 = v34->klass->_1.byval_arg.bits;
          v44 = HIDWORD(current[1].klass);
          v45 = (int)object[1].klass;
          v46 = sub_1D0F300(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v46, 0);
          *(_DWORD *)(v46 + 16) = v44;
          *(_DWORD *)(v46 + 20) = v45;
          *(_DWORD *)(v46 + 24) = v43;
          if ( !v6 )
            sub_1D0F30C(v47, v48);
          items = v6->fields._items;
          v50 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1D0F30C(v47, v48);
          size = v6->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v46,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1D0F30C(0, v16);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v74 = v71;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v74,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v17 )
          break;
        v19 = v74.fields._current;
        if ( !v74.fields._current )
          sub_1D0F30C(v17, v18);
        if ( !v9 )
          sub_1D0F30C(v17, v18);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v9,
                &v73,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v74.fields._current[1].monitor,
                0)
          && v4 )
        {
          v20 = HIDWORD(current[1].klass);
          monitor = (int)v19[1].monitor;
          v22 = (int)v19[2].monitor;
          v23 = sub_1D0F300(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0);
          *(_DWORD *)(v23 + 16) = v20;
          *(_DWORD *)(v23 + 20) = monitor;
          *(_DWORD *)(v23 + 24) = v22;
          if ( !v6 )
            sub_1D0F30C(v24, v25);
          v26 = v6->fields._items;
          v27 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !v26 )
            sub_1D0F30C(v24, v25);
          v28 = v6->fields._size;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v23,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &v26->obj.klass + v28;
            v6->fields._size = v28 + 1;
            v29[4] = (Il2CppClass *)v23;
            sub_1D0F058(v29 + 4, v23);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v74,
        (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v6;
}


void FortificationAutomaticDialogComponent__SerializeFieldNotNullCheck(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FortificationAutomaticDialogComponent___Close_b__23_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  ActionExtensions__Call(this->fields.closeCallBack, 0);
  FortificationAutomaticDialogComponent__Init(this, this->fields.eventId, v3);
}


void FortificationAutomaticDialogComponent___Open_b__16_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *FortificationAutomaticDialogComponent__get_closeBtnObject(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4E717EF & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E717EF = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1D0F30C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void FortificationAutomaticDialogComponent_DetailInfo___ctor(
        FortificationAutomaticDialogComponent_DetailInfo_o *this,
        int32_t idx,
        int32_t position,
        int32_t classId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.classId = classId;
}


void FortificationAutomaticDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4E717F1 & 1) == 0 )
  {
    sub_1D0F0B4(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4E717F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_1D0F058(FortificationAutomaticDialogComponent___c_TypeInfo->static_fields, v1);
}


void FortificationAutomaticDialogComponent___c___ctor(
        FortificationAutomaticDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FortificationAutomaticDialogComponent___c___AutoSet_b__18_1(
        FortificationAutomaticDialogComponent___c_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.idx;
}


int32_t FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.lv;
}


void FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4E717F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1D0F0B4(&StringLiteral_17100/*"ar200"*/);
    byte_4E717F2 = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1D0F0CC(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_17100/*"ar200"*/,
                                                                              0,
                                                                              0);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_65598092(result, (System_String_o *)StringLiteral_22648/*"ng"*/, 0) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1D0F30C(this, result);
  FortificationAutomaticDialogComponent__Close(
    (FortificationAutomaticDialogComponent_o *)this,
    (const MethodInfo *)result);
}


int32_t FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1D0F30C(this, 0);
  classId = x->fields.classId;
  if ( classId == this->fields.typeAll )
    return -1;
  if ( classId == this->fields.typeExtra )
    return 0;
  return x->fields.classId;
}


void FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FortificationAutomaticDialogComponent___c__DisplayClass18_2___AutoSet_b__3(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *v4; // x20
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v10; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4E717F3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E717F3 = 1;
  }
  detail = v4->fields.detail;
  if ( !detail )
    goto LABEL_20;
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_20;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  classId = detail->fields.classId;
  if ( classId != CS___8__locals1->fields.typeAll )
  {
    if ( !x )
      goto LABEL_20;
    svtClassMst = CS___8__locals2->fields.svtClassMst;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0, 0, 0);
    if ( !svtClassMst )
      goto LABEL_20;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0);
    if ( classId != (_DWORD)this )
      return 0;
    CS___8__locals2 = v4->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_20;
  }
  v10 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_20;
  _4__this = v10->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_20;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v14 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                            v17,
                                                                            0);
  if ( !setSvtIdList )
LABEL_20:
    sub_1D0F30C(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FortificationAutomaticDialogComponent___c__DisplayClass19_0___ReferenceDetailList_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *detail; // x8

  if ( !info || (detail = this->fields.detail) == 0 )
    sub_1D0F30C(this, info);
  return info->fields.position == detail->fields.position;
}