void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0C9DD & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0C9DD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_List_object__o *v54; // x20
  const MethodInfo *v55; // x3
  __int64 v56; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_HashSet_int__o *v59; // x19
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v63; // x25
  FortificationAutomaticDialogComponent___c_c *v64; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v66; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x0
  Il2CppObject *v71; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x23
  System_Func_object__int__o *v73; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v74; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v83; // x26
  _BOOL8 v84; // x0
  __int64 v85; // x1
  int32_t v86; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v88; // x22
  __int64 v89; // x0
  __int64 v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  __int64 v97; // x1
  __int64 v98; // x23
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  __int64 v103; // x27
  __int64 v104; // x0
  __int64 v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  __int64 v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 *v113; // x26
  int32_t v114; // w2
  int32_t v115; // w3
  System_Func_object__bool__o *v116; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_List_TSource__o *v118; // x0
  FortificationAutomaticDialogComponent___c_c *v119; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v120; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v122; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  Il2CppObject *v127; // x0
  Il2CppObject *v128; // x27
  Il2CppClass *v129; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v131; // x28
  __int64 v132; // x0
  _BOOL8 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x8
  Il2CppObject v136; // q0
  Il2CppObject v137; // q1
  int32_t v138; // w27
  int32_t v139; // w28
  int64_t v140; // x29
  EnterUserSvtInfo_o *v141; // x26
  __int64 v142; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  int32_t v145; // w3
  struct System_Object_array *items; // x8
  _QWORD *v147; // x9
  __int64 size; // x10
  Il2CppClass **v149; // x0
  __int64 v150; // x8
  __int64 v151; // x9
  int *v152; // x10
  __int64 v153; // x0
  _QWORD *v154; // x0
  System_Reflection_MethodBase_o *v155; // x0
  NetworkManager_ResultCallbackFunc_o *v156; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v158; // x21
  FortificationAutomaticDialogComponent_o *v159; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4A0C9D8 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&EnterUserSvtInfo_TypeInfo, v8);
    sub_1B686D4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1B686D4(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_1B686D4(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent_AutoSet__, v18);
    sub_1B686D4(&System_Func_UserServantEntity__bool__TypeInfo, v19);
    sub_1B686D4(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v20);
    sub_1B686D4(&System_Func_UserServantEntity__int__TypeInfo, v21);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1B686D4(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1B686D4(&System_IDisposable_TypeInfo, v26);
    sub_1B686D4(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v27);
    sub_1B686D4(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v28);
    sub_1B686D4(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1B686D4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v30);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v31);
    sub_1B686D4(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v32);
    sub_1B686D4(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v33);
    sub_1B686D4(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v34);
    sub_1B686D4(&Method_NetworkManager_getRequest_EventFortificationRequest___, v35);
    sub_1B686D4(&NetworkManager_TypeInfo, v36);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v39);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v40);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v41);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v42);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v43);
    sub_1B686D4(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v44);
    sub_1B686D4(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v45);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v46);
    sub_1B686D4(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v47);
    sub_1B686D4(&FortificationAutomaticDialogComponent___c_TypeInfo, v48);
    byte_4A0C9D8 = 1;
  }
  entities = 0LL;
  memset(&v164, 0, sizeof(v164));
  v49 = sub_1B68920(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_93;
  *(_QWORD *)(v49 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v49 + 24), (int32_t)this, v52, v53);
  *(_BYTE *)(v49 + 32) = isSet;
  v54 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v49 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v49;
  if ( *(_BYTE *)(v49 + 32) )
  {
    v56 = sub_1B68920(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v56, 0LL);
    if ( v56 )
    {
      *(_QWORD *)(v56 + 24) = v49;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v56 + 24), v49, v57, v58);
      v59 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v59,
        (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v59;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setSvtIdList, (int32_t)v59, v60, v61);
      v159 = this;
      v63 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v62);
      v64 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v64 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v64->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          v64 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v66 = (Il2CppObject *)v64->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1B68920(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v66,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v68, v69);
      }
      v70 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v63,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_2E73D50 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v71 = *(Il2CppObject **)(v56 + 24);
      v72 = v70;
      v73 = (System_Func_object__int__o *)sub_1B68920(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v73,
        v71,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v74 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v72,
              (System_Func_TSource__TKey__o *)v73,
              (const MethodInfo_2E81864 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v76 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v56 + 16) = v76;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v56 + 16), (int32_t)v76, v77, v78);
        if ( v74 )
        {
          klass = v74->klass;
          v80 = *(unsigned __int16 *)(&v74->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v74->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v80;
              p_offset += 4;
              if ( !v80 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1BBA6B4(
                         v74,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v98 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v74,
                  *(_QWORD *)(p_method + 8));
          if ( !v98 )
            sub_1B68930(0LL, v97);
          while ( 1 )
          {
            v99 = *(_QWORD *)v98;
            v100 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
            {
              v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v101 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v100;
                v101 += 4;
                if ( !v100 )
                  goto LABEL_41;
              }
              v102 = v99 + 16LL * *v101 + 312;
            }
            else
            {
LABEL_41:
              v102 = sub_1BBA6B4(v98, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v98, *(_QWORD *)(v102 + 8)) & 1) == 0 )
              break;
            v103 = sub_1B68920(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v103, 0LL);
            if ( !v103 )
              sub_1B68930(v104, v105);
            *(_QWORD *)(v103 + 24) = v56;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 24), v56, v106, v107);
            v108 = *(_QWORD *)v98;
            v109 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
            {
              v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v110
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v109;
                v110 += 4;
                if ( !v109 )
                  goto LABEL_49;
              }
              v111 = v108 + 16LL * *v110 + 312;
            }
            else
            {
LABEL_49:
              v111 = sub_1BBA6B4(
                       v98,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v112 = (*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v98, *(_QWORD *)(v111 + 8));
            *(_QWORD *)(v103 + 16) = v112;
            v113 = (__int64 *)(v103 + 16);
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 16), v112, v114, v115);
            v116 = (System_Func_object__bool__o *)sub_1B68920(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v116,
              (Il2CppObject *)v103,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v117 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v116,
                     (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v118 = System_Linq_Enumerable__ToList_object_(
                     v117,
                     (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v119 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v120 = (System_Collections_Generic_IEnumerable_TSource__o *)v118;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v119 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v119->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v119->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v119);
                v119 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v122 = (Il2CppObject *)v119->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1B68920(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v122,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v123 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v123->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1B68678((ServantStatusBattleListViewItem_o *)&v123->__9__18_4, (int32_t)_9__18_4, v124, v125);
            }
            v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v120,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_2E74214 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v127 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v126,
                     (const MethodInfo_2E6D524 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v128 = v127;
            if ( v127 )
            {
              v129 = v127[5].klass;
              monitor = v127[5].monitor;
              v131 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v166.fields.currentCryptoKey = v129;
              *(_QWORD *)&v166.fields.fakeValue = monitor;
              v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v166, 0LL);
              if ( !v131 )
                sub_1B68930(v132, (unsigned int)v132);
              v133 = System_Collections_Generic_HashSet_int___Add(
                       v131,
                       v132,
                       (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v135 = *v113;
              if ( !*v113 )
                sub_1B68930(v133, v134);
              v136 = v128[1];
              v137 = v128[2];
              v139 = *(_DWORD *)(v135 + 16);
              v138 = *(_DWORD *)(v135 + 20);
              *(Il2CppObject *)&v163.fields.currentCryptoKey = v136;
              *(Il2CppObject *)&v163.fields.fakeValue = v137;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v162 = v163;
              v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v162, 0LL);
              v141 = (EnterUserSvtInfo_o *)sub_1B68920(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v141, v139, v138, v140, 0LL);
              if ( !v54 )
                sub_1B68930(v142, v143);
              items = v54->fields._items;
              v147 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v54->fields._version;
              if ( !items )
                sub_1B68930(v142, v143);
              size = v54->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v54,
                  (Il2CppObject *)v141,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
              }
              else
              {
                v149 = &items->obj.klass + size;
                v54->fields._size = size + 1;
                v149[4] = (Il2CppClass *)v141;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v149 + 4), (int32_t)v141, v144, v145);
              }
            }
          }
          v150 = *(_QWORD *)v98;
          v151 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
          {
            v152 = (int *)(*(_QWORD *)(v150 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v152 - 1) != System_IDisposable_TypeInfo )
            {
              --v151;
              v152 += 4;
              if ( !v151 )
                goto LABEL_73;
            }
            v153 = v150 + 16LL * *v152 + 312;
          }
          else
          {
LABEL_73:
            v153 = sub_1BBA6B4(v98, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v153)(v98, *(_QWORD *)(v153 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3375180 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v83 = v159;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1B68930(Master_object, v51);
  }
  v83 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v55);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v163,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v164.fields._list = *(_OWORD *)&v163.fields.currentCryptoKey;
  v164.fields._current = (Il2CppObject *)v163.fields.fakeValue;
  while ( 1 )
  {
    v84 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v164,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v84 )
      break;
    if ( !v164.fields._current )
      sub_1B68930(v84, v85);
    v86 = (int32_t)v164.fields._current[1].klass;
    klass_high = HIDWORD(v164.fields._current[1].klass);
    v88 = (EnterUserSvtInfo_o *)sub_1B68920(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v88, v86, klass_high, 0LL, 0LL);
    if ( !v54 )
      sub_1B68930(v89, v90);
    v93 = v54->fields._items;
    v94 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v54->fields._version;
    if ( !v93 )
      sub_1B68930(v89, v90);
    v95 = v54->fields._size;
    if ( (unsigned int)v95 >= v93->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        (Il2CppObject *)v88,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v96 = &v93->obj.klass + v95;
      v54->fields._size = v95 + 1;
      v96[4] = (Il2CppClass *)v88;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 4), (int32_t)v88, v91, v92);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v164,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v154 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v154 = (_QWORD *)sub_1B686EC(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v155 = (System_Reflection_MethodBase_o *)sub_1B686B8(v154, v154[4]);
  OverwriteAssetSoundName__PlaySystemSe(v155, 8, 0LL);
  v156 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v156,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v156,
                                                  (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v54 )
    goto LABEL_93;
  eventId = v83->fields.eventId;
  v158 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v54,
                                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v158 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v158, eventId, (EnterUserSvtInfo_array *)Master_object, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A0C9DB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v3);
    byte_4A0C9DB = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
    sub_1B68930(0LL, v6);
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

  if ( (byte_4A0C9DA & 1) == 0 )
  {
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_4A0C9DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UILabel_o *titleLb; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v23; // x20

  if ( (byte_4A0C9D7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, onDecide);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v7);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_6421/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v9);
    sub_1B686D4(&StringLiteral_6422/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v10);
    sub_1B686D4(&StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1B686D4(&StringLiteral_6423/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v12);
    sub_1B686D4(&StringLiteral_6424/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v13);
    byte_4A0C9D7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (int32_t)closeCallBack,
      (int32_t)method);
    this->fields.closeCallBack = closeCallBack;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)closeCallBack, v14, v15);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6424/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v17, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6421/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v17, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6423/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v17, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6422/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v17, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1B68930(v17, v18);
    }
    UILabel__set_text(cancelButtonLb, v17, 0LL);
    this->fields.state = 1;
    v23 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  __int64 v6; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *v27; // x19
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  EventFortificationSvtMaster_o *v30; // x24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x22
  __int64 v34; // x1
  int64_t UserId; // x2
  _BOOL8 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x25
  int v41; // w26
  int monitor; // w27
  int v43; // w28
  __int64 v44; // x25
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x26
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  __int64 v59; // x25
  __int64 v60; // x0
  __int64 v61; // x1
  System_Object_array *setSvtInfos; // x27
  System_Func_object__bool__o *v63; // x28
  Il2CppObject *object; // x0
  __int64 v65; // x1
  Il2CppObject *v66; // x26
  __int64 monitor_low; // x1
  int v68; // w28
  int v69; // w27
  int v70; // w26
  __int64 v71; // x25
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  __int64 v79; // x8
  int v80; // w27
  int v81; // w28
  int klass_high; // w26
  __int64 v83; // x0
  __int64 v84; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v86; // x0
  __int64 v87; // x1
  int v88; // w28
  int v89; // w27
  int klass; // w26
  __int64 v91; // x0
  __int64 v92; // x1
  Il2CppClass **v93; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v96; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v99; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v100; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4A0C9D9 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_1B686D4(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_1B686D4(&DataManager_TypeInfo, v9);
    sub_1B686D4(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_1B686D4(&System_Func_SetSvtInfo__bool__TypeInfo, v17);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v21);
    sub_1B686D4(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v22);
    sub_1B686D4(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v23);
    sub_1B686D4(&NetworkManager_TypeInfo, v24);
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v25);
    sub_1B686D4(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v26);
    byte_4A0C9D9 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  entity = 0LL;
  entities = 0LL;
  memset(&v101, 0, sizeof(v101));
  v99 = 0LL;
  v100 = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v96 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1B68930(v28, v29);
  v30 = (EventFortificationSvtMaster_o *)v28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v98,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v104 = v98;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v104.fields._current;
    if ( !v104.fields._current )
      sub_1B68930(v31, v32);
    if ( !v96 )
      sub_1B68930(0LL, v32);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v96,
           &entities,
           (int32_t)v104.fields._current[1].klass,
           HIDWORD(v104.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_object )
        sub_1B68930(0LL, v34);
      v36 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v36 )
      {
        if ( !entity )
          sub_1B68930(v36, v37);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1B68930(0LL, v37);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v98,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v101 = v98;
          while ( 1 )
          {
LABEL_31:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v101,
                    (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_28;
            v53 = sub_1B68920(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v53, 0LL);
            if ( !v53 )
              sub_1B68930(v54, v55);
            v58 = (int32_t)v101.fields._current;
            *(_QWORD *)(v53 + 16) = v101.fields._current;
            v59 = v53 + 16;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v53 + 16), v58, v56, v57);
            if ( !entity )
              sub_1B68930(v60, v61);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v63 = (System_Func_object__bool__o *)sub_1B68920(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v63,
              (Il2CppObject *)v53,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v63,
                       (const MethodInfo_2E35D1C *)Method_BasicHelper_Find_SetSvtInfo___);
            v66 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v79 = *(_QWORD *)v59;
              if ( !*(_QWORD *)v59 )
                sub_1B68930(0LL, v65);
              v80 = *(_DWORD *)(v79 + 24);
              v81 = *(_DWORD *)(v79 + 40);
              klass_high = HIDWORD(current[1].klass);
              v71 = sub_1B68920(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v71, 0LL);
              *(_DWORD *)(v71 + 16) = klass_high;
              *(_DWORD *)(v71 + 20) = v80;
              *(_DWORD *)(v71 + 24) = v81;
              if ( !v27 )
                sub_1B68930(v83, v84);
              items = v27->fields._items;
              v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1B68930(v83, v84);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_61:
                v93 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v93[4] = (Il2CppClass *)v71;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v93 + 4), v71, v74, v75);
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
                sub_1B68930(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v30 )
                sub_1B68930(object, monitor_low);
              v86 = EventFortificationSvtMaster__TryGetEntity(
                      v30,
                      &v99,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v86 )
              {
                if ( !*(_QWORD *)v59 )
                  sub_1B68930(v86, v87);
                v88 = *(_DWORD *)(*(_QWORD *)v59 + 40LL);
                v89 = HIDWORD(current[1].klass);
                klass = (int)v66[1].klass;
                v71 = sub_1B68920(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v71, 0LL);
                *(_DWORD *)(v71 + 16) = v89;
                *(_DWORD *)(v71 + 20) = klass;
                *(_DWORD *)(v71 + 24) = v88;
                if ( !v27 )
                  sub_1B68930(v91, v92);
                items = v27->fields._items;
                v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1B68930(v91, v92);
                size = v27->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_61;
                goto LABEL_62;
              }
            }
          }
          if ( !*(_QWORD *)v59 )
            sub_1B68930(object, monitor_low);
          v68 = *(_DWORD *)(*(_QWORD *)v59 + 40LL);
          v69 = HIDWORD(current[1].klass);
          v70 = (int)object[1].klass;
          v71 = sub_1B68920(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v71, 0LL);
          *(_DWORD *)(v71 + 16) = v69;
          *(_DWORD *)(v71 + 20) = v70;
          *(_DWORD *)(v71 + 24) = v68;
          if ( !v27 )
            sub_1B68930(v72, v73);
          items = v27->fields._items;
          v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1B68930(v72, v73);
          size = v27->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_61;
LABEL_62:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v71,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          goto LABEL_31;
        }
      }
      if ( !entities )
        sub_1B68930(0LL, v37);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v98,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v101 = v98;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v101,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v38 )
          break;
        v40 = v101.fields._current;
        if ( !v101.fields._current )
          sub_1B68930(v38, v39);
        if ( !v30 )
          sub_1B68930(v38, v39);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v30,
                &v100,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v101.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v41 = HIDWORD(current[1].klass);
          monitor = (int)v40[1].monitor;
          v43 = (int)v40[2].monitor;
          v44 = sub_1B68920(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v44, 0LL);
          *(_DWORD *)(v44 + 16) = v41;
          *(_DWORD *)(v44 + 20) = monitor;
          *(_DWORD *)(v44 + 24) = v43;
          if ( !v27 )
            sub_1B68930(v45, v46);
          v49 = v27->fields._items;
          v50 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !v49 )
            sub_1B68930(v45, v46);
          v51 = v27->fields._size;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v44,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v27->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v44;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v52 + 4), v44, v47, v48);
          }
        }
      }
LABEL_28:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v101,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v27;
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

  if ( (byte_4A0C9DC & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0C9DC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B68930(0LL, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0C9DE & 1) == 0 )
  {
    sub_1B686D4(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4A0C9DE = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4A0C9DF & 1) == 0 )
  {
    sub_1B686D4(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1B686D4(&StringLiteral_16810/*"ar200"*/, v6);
    byte_4A0C9DF = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B686EC(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16810/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61427784(result, (System_String_o *)StringLiteral_21981/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1B68930(this, result);
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
    sub_1B68930(this, 0LL);
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
  __int64 v5; // x1
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v11; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4A0C9E0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1B686D4(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4A0C9E0 = 1;
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
  v11 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  _4__this = v11->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_20;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v15 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1B68930(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_33751E0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B68930(this, info);
  return info->fields.position == detail->fields.position;
}