void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EF4D & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EF4D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v5; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  const MethodInfo *v11; // x3
  __int64 v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_HashSet_int__o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v19; // x25
  FortificationAutomaticDialogComponent___c_c *v20; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v22; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  Il2CppObject *v27; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x23
  System_Func_object__int__o *v29; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v39; // x26
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x1
  __int64 v54; // x23
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x27
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  System_Func_object__bool__o *v72; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_List_TSource__o *v74; // x0
  FortificationAutomaticDialogComponent___c_c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v78; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x27
  Il2CppClass *v85; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v87; // x28
  __int64 v88; // x0
  _BOOL8 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x8
  Il2CppObject v92; // q0
  Il2CppObject v93; // q1
  int32_t v94; // w27
  int32_t v95; // w28
  int64_t v96; // x29
  EnterUserSvtInfo_o *v97; // x26
  __int64 v98; // x0
  __int64 v99; // x1
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Object_array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  Il2CppClass **v105; // x0
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  NetworkManager_ResultCallbackFunc_o *v112; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v114; // x21
  FortificationAutomaticDialogComponent_o *v115; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4A5EF48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EnterUserSvtInfo_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_1B885B0(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_1B885B0(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_1B885B0(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_1B885B0(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_1B885B0(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4A5EF48 = 1;
  }
  entities = 0LL;
  memset(&v120, 0, sizeof(v120));
  v5 = sub_1B887FC(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_93;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 32) = isSet;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v5 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v5;
  if ( *(_BYTE *)(v5 + 32) )
  {
    v12 = sub_1B887FC(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 24) = v5;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 24), v5, v13, v14);
      v15 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v15,
        (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v15;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setSvtIdList, (int32_t)v15, v16, v17);
      v115 = this;
      v19 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v18);
      v20 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v20 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v20->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v22,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v24, v25);
      }
      v26 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v27 = *(Il2CppObject **)(v12 + 24);
      v28 = v26;
      v29 = (System_Func_object__int__o *)sub_1B887FC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v29,
        v27,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v30 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v28,
              (System_Func_TSource__TKey__o *)v29,
              (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v32 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v12 + 16) = v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v32, v33, v34);
        if ( v30 )
        {
          klass = v30->klass;
          v36 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v36;
              p_offset += 4;
              if ( !v36 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1BDA590(
                         v30,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v54 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v30,
                  *(_QWORD *)(p_method + 8));
          if ( !v54 )
            sub_1B8880C(0LL, v53);
          while ( 1 )
          {
            v55 = *(_QWORD *)v54;
            v56 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
            {
              v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_41;
              }
              v58 = v55 + 16LL * *v57 + 312;
            }
            else
            {
LABEL_41:
              v58 = sub_1BDA590(v54, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) == 0 )
              break;
            v59 = sub_1B887FC(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v59, 0LL);
            if ( !v59 )
              sub_1B8880C(v60, v61);
            *(_QWORD *)(v59 + 24) = v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 24), v12, v62, v63);
            v64 = *(_QWORD *)v54;
            v65 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
            {
              v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v66
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v65;
                v66 += 4;
                if ( !v65 )
                  goto LABEL_49;
              }
              v67 = v64 + 16LL * *v66 + 312;
            }
            else
            {
LABEL_49:
              v67 = sub_1BDA590(
                      v54,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0LL);
            }
            v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v54, *(_QWORD *)(v67 + 8));
            *(_QWORD *)(v59 + 16) = v68;
            v69 = (__int64 *)(v59 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 16), v68, v70, v71);
            v72 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v72,
              (Il2CppObject *)v59,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v73 = System_Linq_Enumerable__Where_object_(
                    OrganizationList,
                    (System_Func_TSource__bool__o *)v72,
                    (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v74 = System_Linq_Enumerable__ToList_object_(
                    v73,
                    (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v75 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v76 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v75 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v75->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v75->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v75);
                v75 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v78 = (Il2CppObject *)v75->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v78,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v79 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v79->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v79->__9__18_4, (int32_t)_9__18_4, v80, v81);
            }
            v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                         v76,
                                                                         (System_Func_TSource__TKey__o *)_9__18_4,
                                                                         (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v83 = System_Linq_Enumerable__FirstOrDefault_object_(
                    v82,
                    (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v84 = v83;
            if ( v83 )
            {
              v85 = v83[5].klass;
              monitor = v83[5].monitor;
              v87 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v122.fields.currentCryptoKey = v85;
              *(_QWORD *)&v122.fields.fakeValue = monitor;
              v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v122, 0LL);
              if ( !v87 )
                sub_1B8880C(v88, (unsigned int)v88);
              v89 = System_Collections_Generic_HashSet_int___Add(
                      v87,
                      v88,
                      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v91 = *v69;
              if ( !*v69 )
                sub_1B8880C(v89, v90);
              v92 = v84[1];
              v93 = v84[2];
              v95 = *(_DWORD *)(v91 + 16);
              v94 = *(_DWORD *)(v91 + 20);
              *(Il2CppObject *)&v119.fields.currentCryptoKey = v92;
              *(Il2CppObject *)&v119.fields.fakeValue = v93;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v118 = v119;
              v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v118, 0LL);
              v97 = (EnterUserSvtInfo_o *)sub_1B887FC(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v97, v95, v94, v96, 0LL);
              if ( !v10 )
                sub_1B8880C(v98, v99);
              items = v10->fields._items;
              v103 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v10->fields._version;
              if ( !items )
                sub_1B8880C(v98, v99);
              size = v10->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  (Il2CppObject *)v97,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
              }
              else
              {
                v105 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v105[4] = (Il2CppClass *)v97;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)v97, v100, v101);
              }
            }
          }
          v106 = *(_QWORD *)v54;
          v107 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
          {
            v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
            {
              --v107;
              v108 += 4;
              if ( !v107 )
                goto LABEL_73;
            }
            v109 = v106 + 16LL * *v108 + 312;
          }
          else
          {
LABEL_73:
            v109 = sub_1BDA590(v54, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v109)(v54, *(_QWORD *)(v109 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_33B3210 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v39 = v115;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1B8880C(Master_object, v7);
  }
  v39 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v11);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v119,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v120.fields._list = *(_OWORD *)&v119.fields.currentCryptoKey;
  v120.fields._current = (Il2CppObject *)v119.fields.fakeValue;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v120,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v40 )
      break;
    if ( !v120.fields._current )
      sub_1B8880C(v40, v41);
    v42 = (int32_t)v120.fields._current[1].klass;
    klass_high = HIDWORD(v120.fields._current[1].klass);
    v44 = (EnterUserSvtInfo_o *)sub_1B887FC(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v44, v42, klass_high, 0LL, 0LL);
    if ( !v10 )
      sub_1B8880C(v45, v46);
    v49 = v10->fields._items;
    v50 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v10->fields._version;
    if ( !v49 )
      sub_1B8880C(v45, v46);
    v51 = v10->fields._size;
    if ( (unsigned int)v51 >= v49->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v44,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &v49->obj.klass + v51;
      v10->fields._size = v51 + 1;
      v52[4] = (Il2CppClass *)v44;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v44, v47, v48);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v120,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v110 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v110 = (_QWORD *)sub_1B885C8(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v111 = (System_Reflection_MethodBase_o *)sub_1B88594(v110, v110[4]);
  OverwriteAssetSoundName__PlaySystemSe(v111, 8, 0LL);
  v112 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v112,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v112,
                                                  (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v10 )
    goto LABEL_93;
  eventId = v39->fields.eventId;
  v114 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v114 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v114, eventId, (EnterUserSvtInfo_array *)Master_object, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5EF4B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_4A5EF4B = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5EF4A & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_4A5EF4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    FortificationAutomaticDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickRemove(
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


void __fastcall FortificationAutomaticDialogComponent__OnClickSet(
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


void __fastcall FortificationAutomaticDialogComponent__Open(
        FortificationAutomaticDialogComponent_o *this,
        System_Action_o *onDecide,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  UILabel_o *titleLb; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v16; // x20

  if ( (byte_4A5EF47 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6447/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6448/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6449/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_1B885B0(&StringLiteral_6450/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_4A5EF47 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (int32_t)closeCallBack,
      (int32_t)method);
    this->fields.closeCallBack = closeCallBack;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)closeCallBack, v7, v8);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6450/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v10, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6447/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v10, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6449/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v10, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v10, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1B8880C(v10, v11);
    }
    UILabel__set_text(cancelButtonLb, v10, 0LL);
    this->fields.state = 1;
    v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
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
  int64_t UserId; // x2
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x25
  int v20; // w26
  int monitor; // w27
  int v22; // w28
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  __int64 v32; // x26
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  __int64 v38; // x25
  __int64 v39; // x0
  __int64 v40; // x1
  System_Object_array *setSvtInfos; // x27
  System_Func_object__bool__o *v42; // x28
  Il2CppObject *object; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x26
  __int64 monitor_low; // x1
  int v47; // w28
  int v48; // w27
  int v49; // w26
  __int64 v50; // x25
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  __int64 v58; // x8
  int v59; // w27
  int v60; // w28
  int klass_high; // w26
  __int64 v62; // x0
  __int64 v63; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v65; // x0
  __int64 v66; // x1
  int v67; // w28
  int v68; // w27
  int klass; // w26
  __int64 v70; // x0
  __int64 v71; // x1
  Il2CppClass **v72; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v75; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v78; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v79; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4A5EF49 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_1B885B0(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_1B885B0(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_4A5EF49 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  entity = 0LL;
  entities = 0LL;
  memset(&v80, 0, sizeof(v80));
  v78 = 0LL;
  v79 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v75 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1B8880C(v7, v8);
  v9 = (EventFortificationSvtMaster_o *)v7;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v83 = v77;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v83.fields._current;
    if ( !v83.fields._current )
      sub_1B8880C(v10, v11);
    if ( !v75 )
      sub_1B8880C(0LL, v11);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v75,
           &entities,
           (int32_t)v83.fields._current[1].klass,
           HIDWORD(v83.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_object )
        sub_1B8880C(0LL, v13);
      v15 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v15 )
      {
        if ( !entity )
          sub_1B8880C(v15, v16);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1B8880C(0LL, v16);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v77,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v80 = v77;
          while ( 1 )
          {
LABEL_31:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v80,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_28;
            v32 = sub_1B887FC(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v32, 0LL);
            if ( !v32 )
              sub_1B8880C(v33, v34);
            v37 = (int32_t)v80.fields._current;
            *(_QWORD *)(v32 + 16) = v80.fields._current;
            v38 = v32 + 16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 16), v37, v35, v36);
            if ( !entity )
              sub_1B8880C(v39, v40);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v42 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v42,
              (Il2CppObject *)v32,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v42,
                       (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_SetSvtInfo___);
            v45 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v58 = *(_QWORD *)v38;
              if ( !*(_QWORD *)v38 )
                sub_1B8880C(0LL, v44);
              v59 = *(_DWORD *)(v58 + 24);
              v60 = *(_DWORD *)(v58 + 40);
              klass_high = HIDWORD(current[1].klass);
              v50 = sub_1B887FC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v50, 0LL);
              *(_DWORD *)(v50 + 16) = klass_high;
              *(_DWORD *)(v50 + 20) = v59;
              *(_DWORD *)(v50 + 24) = v60;
              if ( !v6 )
                sub_1B8880C(v62, v63);
              items = v6->fields._items;
              v56 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_1B8880C(v62, v63);
              size = v6->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_61:
                v72 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v72[4] = (Il2CppClass *)v50;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 4), v50, v53, v54);
                continue;
              }
              goto LABEL_62;
            }
            monitor_low = LODWORD(object[1].monitor);
            if ( !(_DWORD)monitor_low && v4 )
              break;
            if ( (_DWORD)monitor_low && !HIDWORD(object[1].klass) && v4 )
            {
              setSvtIdList = this->fields.setSvtIdList;
              if ( !setSvtIdList )
                sub_1B8880C(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v9 )
                sub_1B8880C(object, monitor_low);
              v65 = EventFortificationSvtMaster__TryGetEntity(
                      v9,
                      &v78,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v65 )
              {
                if ( !*(_QWORD *)v38 )
                  sub_1B8880C(v65, v66);
                v67 = *(_DWORD *)(*(_QWORD *)v38 + 40LL);
                v68 = HIDWORD(current[1].klass);
                klass = (int)v45[1].klass;
                v50 = sub_1B887FC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v50, 0LL);
                *(_DWORD *)(v50 + 16) = v68;
                *(_DWORD *)(v50 + 20) = klass;
                *(_DWORD *)(v50 + 24) = v67;
                if ( !v6 )
                  sub_1B8880C(v70, v71);
                items = v6->fields._items;
                v56 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v6->fields._version;
                if ( !items )
                  sub_1B8880C(v70, v71);
                size = v6->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_61;
                goto LABEL_62;
              }
            }
          }
          if ( !*(_QWORD *)v38 )
            sub_1B8880C(object, monitor_low);
          v47 = *(_DWORD *)(*(_QWORD *)v38 + 40LL);
          v48 = HIDWORD(current[1].klass);
          v49 = (int)object[1].klass;
          v50 = sub_1B887FC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v50, 0LL);
          *(_DWORD *)(v50 + 16) = v48;
          *(_DWORD *)(v50 + 20) = v49;
          *(_DWORD *)(v50 + 24) = v47;
          if ( !v6 )
            sub_1B8880C(v51, v52);
          items = v6->fields._items;
          v56 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1B8880C(v51, v52);
          size = v6->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_61;
LABEL_62:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v50,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          goto LABEL_31;
        }
      }
      if ( !entities )
        sub_1B8880C(0LL, v16);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v77,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v80 = v77;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v80,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v17 )
          break;
        v19 = v80.fields._current;
        if ( !v80.fields._current )
          sub_1B8880C(v17, v18);
        if ( !v9 )
          sub_1B8880C(v17, v18);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v9,
                &v79,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v80.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v20 = HIDWORD(current[1].klass);
          monitor = (int)v19[1].monitor;
          v22 = (int)v19[2].monitor;
          v23 = sub_1B887FC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0LL);
          *(_DWORD *)(v23 + 16) = v20;
          *(_DWORD *)(v23 + 20) = monitor;
          *(_DWORD *)(v23 + 24) = v22;
          if ( !v6 )
            sub_1B8880C(v24, v25);
          v28 = v6->fields._items;
          v29 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !v28 )
            sub_1B8880C(v24, v25);
          v30 = v6->fields._size;
          if ( (unsigned int)v30 >= v28->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v23,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v6->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), v23, v26, v27);
          }
        }
      }
LABEL_28:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v80,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v6;
}


void __fastcall FortificationAutomaticDialogComponent__SerializeFieldNotNullCheck(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationAutomaticDialogComponent___Close_b__23_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  FortificationAutomaticDialogComponent__Init(this, this->fields.eventId, v3);
}


void __fastcall FortificationAutomaticDialogComponent___Open_b__16_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationAutomaticDialogComponent__get_closeBtnObject(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5EF4C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF4C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent_DetailInfo___ctor(
        FortificationAutomaticDialogComponent_DetailInfo_o *this,
        int32_t idx,
        int32_t position,
        int32_t classId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.classId = classId;
}


void __fastcall FortificationAutomaticDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EF4E & 1) == 0 )
  {
    sub_1B885B0(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4A5EF4E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall FortificationAutomaticDialogComponent___c___ctor(
        FortificationAutomaticDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_1(
        FortificationAutomaticDialogComponent___c_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.lv;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4A5EF4F & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1B885B0(&StringLiteral_16876/*"ar200"*/);
    byte_4A5EF4F = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_16876/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1B8880C(this, result);
  FortificationAutomaticDialogComponent__Close(
    (FortificationAutomaticDialogComponent_o *)this,
    (const MethodInfo *)result);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1B8880C(this, 0LL);
  classId = x->fields.classId;
  if ( classId == this->fields.typeAll )
    return -1;
  if ( classId == this->fields.typeExtra )
    return 0;
  return x->fields.classId;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___AutoSet_b__3(
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
  if ( (byte_4A5EF50 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EF50 = 1;
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
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0, 0LL);
    if ( !svtClassMst )
      goto LABEL_20;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0LL);
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                            v17,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1B8880C(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ReferenceDetailList_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *detail; // x8

  if ( !info || (detail = this->fields.detail) == 0LL )
    sub_1B8880C(this, info);
  return info->fields.position == detail->fields.position;
}