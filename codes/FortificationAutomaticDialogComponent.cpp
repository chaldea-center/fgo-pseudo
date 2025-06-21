void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B169CD & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B169CD = 1;
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
  Il2CppObject *v49; // x19
  EventFortificationMaster_o *Master_object; // x0
  __int64 v51; // x1
  void **p_monitor; // x19
  System_Collections_Generic_List_object__o *v53; // x20
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x24
  System_Collections_Generic_HashSet_int__o *v56; // x19
  const MethodInfo *v57; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v58; // x25
  FortificationAutomaticDialogComponent___c_c *v59; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v61; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x0
  Il2CppObject *monitor; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v65; // x23
  System_Func_object__int__o *v66; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v70; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _BOOL8 v73; // x0
  __int64 v74; // x1
  Il2CppClass *v75; // d8
  Il2CppObject *v76; // x22
  __int64 v77; // x0
  __int64 v78; // x1
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x1
  __int64 v84; // x23
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  Il2CppObject *v89; // x27
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  Il2CppObject *v96; // x26
  System_Func_object__bool__o *v97; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_List_TSource__o *v99; // x0
  FortificationAutomaticDialogComponent___c_c *v100; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v103; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v104; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  Il2CppObject *v106; // x0
  Il2CppObject *v107; // x27
  Il2CppClass *v108; // x19
  void *v109; // x29
  System_Collections_Generic_HashSet_int__o *v110; // x28
  __int64 v111; // x0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  Il2CppObject v114; // q0
  Il2CppClass *name; // d8
  int64_t v116; // x27
  Il2CppObject *v117; // x26
  __int64 v118; // x0
  __int64 v119; // x1
  struct System_Object_array *items; // x8
  _QWORD *v121; // x9
  __int64 size; // x10
  Il2CppClass **v123; // x0
  __int64 v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  _QWORD *v128; // x0
  System_Reflection_MethodBase_o *v129; // x0
  NetworkManager_ResultCallbackFunc_o *v130; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v132; // x21
  const MethodInfo *v133; // x3
  FortificationAutomaticDialogComponent_o *v134; // [xsp+8h] [xbp-E8h]
  Il2CppObject *object; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4B169C8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&EnterUserSvtInfo_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent_AutoSet__, v18);
    sub_1BCAFF8(&System_Func_UserServantEntity__bool__TypeInfo, v19);
    sub_1BCAFF8(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v20);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__TypeInfo, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v26);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v27);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v28);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v30);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v31);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v32);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v33);
    sub_1BCAFF8(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v34);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_EventFortificationRequest___, v35);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v36);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v39);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v40);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v41);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v42);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v43);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v44);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v45);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v46);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v47);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c_TypeInfo, v48);
    byte_4B169C8 = 1;
  }
  entities = 0LL;
  memset(&v139, 0, sizeof(v139));
  v49 = (Il2CppObject *)sub_1BCB244(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v49, 0LL);
  if ( !v49 )
    goto LABEL_93;
  object = v49;
  v49[1].monitor = this;
  p_monitor = &v49[1].monitor;
  sub_1BCAF9C(p_monitor);
  *((_BYTE *)p_monitor + 8) = isSet;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(p_monitor - 1) = (void *)0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  if ( LOBYTE(object[2].klass) )
  {
    v55 = (Il2CppObject *)sub_1BCB244(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor(v55, 0LL);
    if ( v55 )
    {
      v55[1].monitor = object;
      sub_1BCAF9C(&v55[1].monitor);
      v56 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v56,
        (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v56;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1BCAF9C(&this->fields.setSvtIdList);
      v134 = this;
      v58 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v57);
      v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v59->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v61 = (Il2CppObject *)v59->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v61,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1BCAF9C(&static_fields->__9__18_1);
      }
      v63 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v58,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      monitor = (Il2CppObject *)v55[1].monitor;
      v65 = v63;
      v66 = (System_Func_object__int__o *)sub_1BCB244(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v66,
        monitor,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v67 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v65,
              (System_Func_TSource__TKey__o *)v66,
              (const MethodInfo_3056B54 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v55[1].klass = (Il2CppClass *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantClassMaster___);
        Master_object = (EventFortificationMaster_o *)sub_1BCAF9C(&v55[1]);
        if ( v67 )
        {
          klass = v67->klass;
          v70 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v70;
              p_offset += 4;
              if ( !v70 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1C1B560(
                         v67,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v84 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v67,
                  *(_QWORD *)(p_method + 8));
          if ( !v84 )
            sub_1BCB254(0LL, v83);
          while ( 1 )
          {
            v85 = *(_QWORD *)v84;
            v86 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
            {
              v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v87 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v86;
                v87 += 4;
                if ( !v86 )
                  goto LABEL_41;
              }
              v88 = v85 + 16LL * *v87 + 312;
            }
            else
            {
LABEL_41:
              v88 = sub_1C1B560(v84, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8)) & 1) == 0 )
              break;
            v89 = (Il2CppObject *)sub_1BCB244(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor(v89, 0LL);
            if ( !v89 )
              sub_1BCB254(v90, v91);
            v89[1].monitor = v55;
            sub_1BCAF9C(&v89[1].monitor);
            v92 = *(_QWORD *)v84;
            v93 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
            {
              v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v94
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v93;
                v94 += 4;
                if ( !v93 )
                  goto LABEL_49;
              }
              v95 = v92 + 16LL * *v94 + 312;
            }
            else
            {
LABEL_49:
              v95 = sub_1C1B560(
                      v84,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0LL);
            }
            v89[1].klass = (Il2CppClass *)(*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v84, *(_QWORD *)(v95 + 8));
            v96 = v89 + 1;
            sub_1BCAF9C(&v89[1]);
            v97 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v97,
              v89,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v98 = System_Linq_Enumerable__Where_object_(
                    OrganizationList,
                    (System_Func_TSource__bool__o *)v97,
                    (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v99 = System_Linq_Enumerable__ToList_object_(
                    v98,
                    (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v100 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v101 = (System_Collections_Generic_IEnumerable_TSource__o *)v99;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v100 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v100->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v100->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v100);
                v100 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v103 = (Il2CppObject *)v100->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v103,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v104 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v104->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1BCAF9C(&v104->__9__18_4);
            }
            v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v101,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v106 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v105,
                     (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v107 = v106;
            if ( v106 )
            {
              v108 = v106[5].klass;
              v109 = v106[5].monitor;
              v110 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v141.fields.currentCryptoKey = v108;
              *(_QWORD *)&v141.fields.fakeValue = v109;
              v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v141, 0LL);
              if ( !v110 )
                sub_1BCB254(v111, (unsigned int)v111);
              v112 = System_Collections_Generic_HashSet_int___Add(
                       v110,
                       v111,
                       (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v96->klass )
                sub_1BCB254(v112, v113);
              v114 = v107[2];
              name = (Il2CppClass *)v96->klass->_1.name;
              *(Il2CppObject *)&v138.fields.currentCryptoKey = v107[1];
              *(Il2CppObject *)&v138.fields.fakeValue = v114;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v137 = v138;
              v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v137, 0LL);
              v117 = (Il2CppObject *)sub_1BCB244(EnterUserSvtInfo_TypeInfo);
              System_Object___ctor(v117, 0LL);
              v117[1].klass = name;
              v117[1].monitor = (void *)v116;
              if ( !v53 )
                sub_1BCB254(v118, v119);
              items = v53->fields._items;
              v121 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v53->fields._version;
              if ( !items )
                sub_1BCB254(v118, v119);
              size = v53->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v53,
                  v117,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
              }
              else
              {
                v123 = &items->obj.klass + size;
                v53->fields._size = size + 1;
                v123[4] = (Il2CppClass *)v117;
                sub_1BCAF9C(v123 + 4);
              }
            }
          }
          v124 = *(_QWORD *)v84;
          v125 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
          {
            v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v126 - 1) != System_IDisposable_TypeInfo )
            {
              --v125;
              v126 += 4;
              if ( !v125 )
                goto LABEL_73;
            }
            v127 = v124 + 16LL * *v126 + 312;
          }
          else
          {
LABEL_73:
            v127 = sub_1C1B560(v84, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v127)(v84, *(_QWORD *)(v127 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
            this = v134;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1BCB254(Master_object, v51);
  }
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v54);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v138,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v139.fields._list = *(_OWORD *)&v138.fields.currentCryptoKey;
  v139.fields._current = (Il2CppObject *)v138.fields.fakeValue;
  while ( 1 )
  {
    v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v139,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v73 )
      break;
    if ( !v139.fields._current )
      sub_1BCB254(v73, v74);
    v75 = v139.fields._current[1].klass;
    v76 = (Il2CppObject *)sub_1BCB244(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor(v76, 0LL);
    v76[1].klass = v75;
    v76[1].monitor = 0LL;
    if ( !v53 )
      sub_1BCB254(v77, v78);
    v79 = v53->fields._items;
    v80 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v53->fields._version;
    if ( !v79 )
      sub_1BCB254(v77, v78);
    v81 = v53->fields._size;
    if ( (unsigned int)v81 >= v79->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        v76,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v79->obj.klass + v81;
      v53->fields._size = v81 + 1;
      v82[4] = (Il2CppClass *)v76;
      sub_1BCAF9C(v82 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v139,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v128 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v128 = (_QWORD *)sub_1BCB010(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v129 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v128, v128[4]);
  OverwriteAssetSoundName__PlaySystemSe(v129, 8, 0, 0LL);
  v130 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v130,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v130,
                                                  (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v53 )
    goto LABEL_93;
  eventId = this->fields.eventId;
  v132 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v53,
                                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v132 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v132, eventId, (EnterUserSvtInfo_array *)Master_object, v133);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B169CB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v3);
    byte_4B169CB = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
    sub_1BCB254(0LL, v6);
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

  if ( (byte_4B169CA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_4B169CA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  UILabel_o *titleLb; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v21; // x20

  if ( (byte_4B169C7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, onDecide);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_6430/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v9);
    sub_1BCAFF8(&StringLiteral_6431/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v10);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1BCAFF8(&StringLiteral_6432/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v12);
    sub_1BCAFF8(&StringLiteral_6433/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v13);
    byte_4B169C7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCAF9C(&this->fields.onDecide);
    this->fields.closeCallBack = closeCallBack;
    sub_1BCAF9C(&this->fields.closeCallBack);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v15, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v15, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v15, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6431/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v15, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1BCB254(v15, v16);
    }
    UILabel__set_text(cancelButtonLb, v15, 0LL);
    this->fields.state = 1;
    v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
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
  NetworkManager_c *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x26
  int v41; // w27
  int monitor; // w28
  int v43; // w29
  __int64 v44; // x26
  __int64 v45; // x0
  __int64 v46; // x1
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  Il2CppObject *v51; // x27
  __int64 v52; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x26
  __int64 v55; // x0
  __int64 v56; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v58; // x29
  Il2CppObject *object; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x27
  __int64 monitor_low; // x1
  unsigned int v63; // w29
  int v64; // w28
  int v65; // w27
  __int64 v66; // x26
  __int64 v67; // x0
  __int64 v68; // x1
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w28
  unsigned int bits; // w29
  int klass_high; // w27
  __int64 v76; // x0
  __int64 v77; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v79; // x0
  __int64 v80; // x1
  unsigned int v81; // w29
  int v82; // w28
  int v83; // w27
  __int64 v84; // x0
  __int64 v85; // x1
  Il2CppClass **v86; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v89; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v92; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v93; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4B169C9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_1BCAFF8(&System_Func_SetSvtInfo__bool__TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v23);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v25);
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v26);
    byte_4B169C9 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  entity = 0LL;
  entities = 0LL;
  memset(&v94, 0, sizeof(v94));
  v92 = 0LL;
  v93 = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v89 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1BCB254(v28, v29);
  v30 = (EventFortificationSvtMaster_o *)v28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v97 = v91;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v97.fields._current;
    if ( !v97.fields._current )
      sub_1BCB254(v31, v32);
    if ( !v89 )
      sub_1BCB254(0LL, v32);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v89,
           &entities,
           (int32_t)v97.fields._current[1].klass,
           HIDWORD(v97.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v34);
        byte_4B165D1 = 1;
      }
      v35 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v35 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1BCB254(v35, v34);
      v36 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v35->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v36 )
      {
        if ( !entity )
          sub_1BCB254(v36, v37);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1BCB254(0LL, v37);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v91,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v94 = v91;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v94,
                    (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v51 = (Il2CppObject *)sub_1BCB244(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor(v51, 0LL);
            if ( !v51 )
              sub_1BCB254(v52, v53);
            v51[1].klass = (Il2CppClass *)v94.fields._current;
            v54 = v51 + 1;
            v55 = sub_1BCAF9C(&v51[1]);
            if ( !entity )
              sub_1BCB254(v55, v56);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v58 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v58,
              v51,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v58,
                       (const MethodInfo_3004AE8 *)Method_BasicHelper_Find_SetSvtInfo___);
            v61 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              klass = v54->klass;
              if ( !v54->klass )
                sub_1BCB254(0LL, v60);
              namespaze = (int)klass->_1.namespaze;
              bits = klass->_1.byval_arg.bits;
              klass_high = HIDWORD(current[1].klass);
              v66 = sub_1BCB244(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v66, 0LL);
              *(_DWORD *)(v66 + 16) = klass_high;
              *(_DWORD *)(v66 + 20) = namespaze;
              *(_DWORD *)(v66 + 24) = bits;
              if ( !v27 )
                sub_1BCB254(v76, v77);
              items = v27->fields._items;
              v70 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1BCB254(v76, v77);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_65:
                v86 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v86[4] = (Il2CppClass *)v66;
                sub_1BCAF9C(v86 + 4);
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
                sub_1BCB254(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v30 )
                sub_1BCB254(object, monitor_low);
              v79 = EventFortificationSvtMaster__TryGetEntity(
                      v30,
                      &v92,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v79 )
              {
                if ( !v54->klass )
                  sub_1BCB254(v79, v80);
                v81 = v54->klass->_1.byval_arg.bits;
                v82 = HIDWORD(current[1].klass);
                v83 = (int)v61[1].klass;
                v66 = sub_1BCB244(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v66, 0LL);
                *(_DWORD *)(v66 + 16) = v82;
                *(_DWORD *)(v66 + 20) = v83;
                *(_DWORD *)(v66 + 24) = v81;
                if ( !v27 )
                  sub_1BCB254(v84, v85);
                items = v27->fields._items;
                v70 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1BCB254(v84, v85);
                size = v27->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !v54->klass )
            sub_1BCB254(object, monitor_low);
          v63 = v54->klass->_1.byval_arg.bits;
          v64 = HIDWORD(current[1].klass);
          v65 = (int)object[1].klass;
          v66 = sub_1BCB244(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v66, 0LL);
          *(_DWORD *)(v66 + 16) = v64;
          *(_DWORD *)(v66 + 20) = v65;
          *(_DWORD *)(v66 + 24) = v63;
          if ( !v27 )
            sub_1BCB254(v67, v68);
          items = v27->fields._items;
          v70 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1BCB254(v67, v68);
          size = v27->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v66,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1BCB254(0LL, v37);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v91,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v94 = v91;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v94,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v38 )
          break;
        v40 = v94.fields._current;
        if ( !v94.fields._current )
          sub_1BCB254(v38, v39);
        if ( !v30 )
          sub_1BCB254(v38, v39);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v30,
                &v93,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v94.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v41 = HIDWORD(current[1].klass);
          monitor = (int)v40[1].monitor;
          v43 = (int)v40[2].monitor;
          v44 = sub_1BCB244(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v44, 0LL);
          *(_DWORD *)(v44 + 16) = v41;
          *(_DWORD *)(v44 + 20) = monitor;
          *(_DWORD *)(v44 + 24) = v43;
          if ( !v27 )
            sub_1BCB254(v45, v46);
          v47 = v27->fields._items;
          v48 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !v47 )
            sub_1BCB254(v45, v46);
          v49 = v27->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v44,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v27->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v44;
            sub_1BCAF9C(v50 + 4);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v94,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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

  if ( (byte_4B169CC & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B169CC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
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

  if ( (byte_4B169CE & 1) == 0 )
  {
    sub_1BCAFF8(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4B169CE = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v2;
  sub_1BCAF9C(FortificationAutomaticDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BCB254(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B169CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1BCAFF8(&StringLiteral_16718/*"ar200"*/, v6);
    byte_4B169CF = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16718/*"ar200"*/,
                                                                              0,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_62485728(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BCB254(this, result);
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
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B169D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1BCAFF8(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4B169D0 = 1;
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
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(
                                                                              x,
                                                                              0,
                                                                              0,
                                                                              0LL);
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1BCB254(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1BCB254(this, info);
  return info->fields.position == detail->fields.position;
}