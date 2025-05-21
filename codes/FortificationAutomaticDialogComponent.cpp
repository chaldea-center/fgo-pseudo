void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48DBF & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B48DBF = 1;
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
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  CGThumbnailListItem_o *p_monitor; // x19
  System_Collections_Generic_List_object__o *v55; // x20
  const MethodInfo *v56; // x3
  __int64 v57; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_HashSet_int__o *v60; // x19
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v64; // x25
  FortificationAutomaticDialogComponent___c_c *v65; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v67; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  Il2CppObject *v72; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v73; // x23
  System_Func_object__int__o *v74; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v81; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _BOOL8 v84; // x0
  __int64 v85; // x1
  Il2CppClass *v86; // d8
  Il2CppObject *v87; // x22
  __int64 v88; // x0
  __int64 v89; // x1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  __int64 v96; // x1
  __int64 v97; // x23
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 v102; // x27
  __int64 v103; // x0
  __int64 v104; // x1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x26
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Func_object__bool__o *v115; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Collections_Generic_List_TSource__o *v117; // x0
  FortificationAutomaticDialogComponent___c_c *v118; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v121; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  Il2CppObject *v126; // x0
  Il2CppObject *v127; // x27
  Il2CppClass *v128; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v130; // x28
  __int64 v131; // x0
  _BOOL8 v132; // x0
  __int64 v133; // x1
  Il2CppObject v134; // q0
  Il2CppClass *v135; // d8
  int64_t v136; // x27
  Il2CppObject *v137; // x26
  __int64 v138; // x0
  __int64 v139; // x1
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  struct System_Object_array *items; // x8
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x0
  __int64 v146; // x8
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  _QWORD *v150; // x0
  System_Reflection_MethodBase_o *v151; // x0
  NetworkManager_ResultCallbackFunc_o *v152; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v154; // x21
  const MethodInfo *v155; // x3
  FortificationAutomaticDialogComponent_o *v156; // [xsp+8h] [xbp-E8h]
  Il2CppObject *object; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v161; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_4B48DBA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&EnterUserSvtInfo_TypeInfo, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent_AutoSet__, v18);
    sub_1BDB878(&System_Func_UserServantEntity__bool__TypeInfo, v19);
    sub_1BDB878(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v20);
    sub_1BDB878(&System_Func_UserServantEntity__int__TypeInfo, v21);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1BDB878(&System_IDisposable_TypeInfo, v26);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v27);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v28);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v30);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v33);
    sub_1BDB878(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v34);
    sub_1BDB878(&Method_NetworkManager_getRequest_EventFortificationRequest___, v35);
    sub_1BDB878(&NetworkManager_TypeInfo, v36);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v39);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v40);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v41);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v42);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v43);
    sub_1BDB878(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v44);
    sub_1BDB878(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v45);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v46);
    sub_1BDB878(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v47);
    sub_1BDB878(&FortificationAutomaticDialogComponent___c_TypeInfo, v48);
    byte_4B48DBA = 1;
  }
  entities = 0LL;
  memset(&v161, 0, sizeof(v161));
  v49 = (Il2CppObject *)sub_1BDBAC4(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v49, 0LL);
  if ( !v49 )
    goto LABEL_93;
  object = v49;
  v49[1].monitor = this;
  p_monitor = (CGThumbnailListItem_o *)&v49[1].monitor;
  sub_1BDB81C(p_monitor, (int32_t)this, v52, v53);
  LOBYTE(p_monitor->monitor) = isSet;
  v55 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  p_monitor[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  if ( LOBYTE(object[2].klass) )
  {
    v57 = sub_1BDBAC4(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v57, 0LL);
    if ( v57 )
    {
      *(_QWORD *)(v57 + 24) = object;
      sub_1BDB81C((CGThumbnailListItem_o *)(v57 + 24), (int32_t)object, v58, v59);
      v60 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v60,
        (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v60;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setSvtIdList, (int32_t)v60, v61, v62);
      v156 = this;
      v64 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v63);
      v65 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v65 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v65->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v67 = (Il2CppObject *)v65->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v67,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v69, v70);
      }
      v71 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v64,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v72 = *(Il2CppObject **)(v57 + 24);
      v73 = v71;
      v74 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v74,
        v72,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v75 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v73,
              (System_Func_TSource__TKey__o *)v74,
              (const MethodInfo_3070038 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v77 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v57 + 16) = v77;
        sub_1BDB81C((CGThumbnailListItem_o *)(v57 + 16), (int32_t)v77, v78, v79);
        if ( v75 )
        {
          klass = v75->klass;
          v81 = *(unsigned __int16 *)(&v75->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v75->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v81;
              p_offset += 4;
              if ( !v81 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1C2C00C(
                         v75,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v97 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v75,
                  *(_QWORD *)(p_method + 8));
          if ( !v97 )
            sub_1BDBAD4(0LL, v96);
          while ( 1 )
          {
            v98 = *(_QWORD *)v97;
            v99 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
            {
              v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v100 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v99;
                v100 += 4;
                if ( !v99 )
                  goto LABEL_41;
              }
              v101 = v98 + 16LL * *v100 + 312;
            }
            else
            {
LABEL_41:
              v101 = sub_1C2C00C(v97, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8)) & 1) == 0 )
              break;
            v102 = sub_1BDBAC4(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v102, 0LL);
            if ( !v102 )
              sub_1BDBAD4(v103, v104);
            *(_QWORD *)(v102 + 24) = v57;
            sub_1BDB81C((CGThumbnailListItem_o *)(v102 + 24), v57, v105, v106);
            v107 = *(_QWORD *)v97;
            v108 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
            {
              v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v109
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v108;
                v109 += 4;
                if ( !v108 )
                  goto LABEL_49;
              }
              v110 = v107 + 16LL * *v109 + 312;
            }
            else
            {
LABEL_49:
              v110 = sub_1C2C00C(
                       v97,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v111 = (*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v97, *(_QWORD *)(v110 + 8));
            *(_QWORD *)(v102 + 16) = v111;
            v112 = v102 + 16;
            sub_1BDB81C((CGThumbnailListItem_o *)(v102 + 16), v111, v113, v114);
            v115 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v115,
              (Il2CppObject *)v102,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v116 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v115,
                     (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v117 = System_Linq_Enumerable__ToList_object_(
                     v116,
                     (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v118 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v119 = (System_Collections_Generic_IEnumerable_TSource__o *)v117;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v118 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v118->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v118->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v118);
                v118 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v121 = (Il2CppObject *)v118->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v121,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v122 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v122->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1BDB81C((CGThumbnailListItem_o *)&v122->__9__18_4, (int32_t)_9__18_4, v123, v124);
            }
            v125 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v119,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v126 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v125,
                     (const MethodInfo_3058594 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v127 = v126;
            if ( v126 )
            {
              v128 = v126[5].klass;
              monitor = v126[5].monitor;
              v130 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v163.fields.currentCryptoKey = v128;
              *(_QWORD *)&v163.fields.fakeValue = monitor;
              v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v163, 0LL);
              if ( !v130 )
                sub_1BDBAD4(v131, (unsigned int)v131);
              v132 = System_Collections_Generic_HashSet_int___Add(
                       v130,
                       v131,
                       (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !*(_QWORD *)v112 )
                sub_1BDBAD4(v132, v133);
              v134 = v127[2];
              v135 = *(Il2CppClass **)(*(_QWORD *)v112 + 16LL);
              *(Il2CppObject *)&v160.fields.currentCryptoKey = v127[1];
              *(Il2CppObject *)&v160.fields.fakeValue = v134;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v159 = v160;
              v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v159, 0LL);
              v137 = (Il2CppObject *)sub_1BDBAC4(EnterUserSvtInfo_TypeInfo);
              System_Object___ctor(v137, 0LL);
              v137[1].klass = v135;
              v137[1].monitor = (void *)v136;
              if ( !v55 )
                sub_1BDBAD4(v138, v139);
              items = v55->fields._items;
              v143 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v55->fields._version;
              if ( !items )
                sub_1BDBAD4(v138, v139);
              size = v55->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v55,
                  v137,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
              }
              else
              {
                v145 = &items->obj.klass + size;
                v55->fields._size = size + 1;
                v145[4] = (Il2CppClass *)v137;
                sub_1BDB81C((CGThumbnailListItem_o *)(v145 + 4), (int32_t)v137, v140, v141);
              }
            }
          }
          v146 = *(_QWORD *)v97;
          v147 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
          {
            v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v148 - 1) != System_IDisposable_TypeInfo )
            {
              --v147;
              v148 += 4;
              if ( !v147 )
                goto LABEL_73;
            }
            v149 = v146 + 16LL * *v148 + 312;
          }
          else
          {
LABEL_73:
            v149 = sub_1C2C00C(v97, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v149)(v97, *(_QWORD *)(v149 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_358C034 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            this = v156;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1BDBAD4(Master_object, v51);
  }
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v56);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v160,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v161.fields._list = *(_OWORD *)&v160.fields.currentCryptoKey;
  v161.fields._current = (Il2CppObject *)v160.fields.fakeValue;
  while ( 1 )
  {
    v84 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v161,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v84 )
      break;
    if ( !v161.fields._current )
      sub_1BDBAD4(v84, v85);
    v86 = v161.fields._current[1].klass;
    v87 = (Il2CppObject *)sub_1BDBAC4(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor(v87, 0LL);
    v87[1].klass = v86;
    v87[1].monitor = 0LL;
    if ( !v55 )
      sub_1BDBAD4(v88, v89);
    v92 = v55->fields._items;
    v93 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v55->fields._version;
    if ( !v92 )
      sub_1BDBAD4(v88, v89);
    v94 = v55->fields._size;
    if ( (unsigned int)v94 >= v92->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v55,
        v87,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = &v92->obj.klass + v94;
      v55->fields._size = v94 + 1;
      v95[4] = (Il2CppClass *)v87;
      sub_1BDB81C((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v87, v90, v91);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v161,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v150 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v150 = (_QWORD *)sub_1BDB890(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v151 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v150, v150[4]);
  OverwriteAssetSoundName__PlaySystemSe(v151, 8, 0, 0LL);
  v152 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v152,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v152,
                                                  (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v55 )
    goto LABEL_93;
  eventId = this->fields.eventId;
  v154 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v55,
                                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v154 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v154, eventId, (EnterUserSvtInfo_array *)Master_object, v155);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B48DBD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v3);
    byte_4B48DBD = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
    sub_1BDBAD4(0LL, v6);
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

  if ( (byte_4B48DBC & 1) == 0 )
  {
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_4B48DBC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *titleLb; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v23; // x20

  if ( (byte_4B48DB9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, onDecide);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_6491/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v9);
    sub_1BDB878(&StringLiteral_6492/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v10);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1BDB878(&StringLiteral_6493/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v12);
    sub_1BDB878(&StringLiteral_6494/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v13);
    byte_4B48DB9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)closeCallBack, method);
    this->fields.closeCallBack = closeCallBack;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallBack, (int32_t)closeCallBack, v14, v15);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6494/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v17, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6491/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v17, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6493/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v17, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v17, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1BDBAD4(v17, v18);
    }
    UILabel__set_text(cancelButtonLb, v17, 0LL);
    this->fields.state = 1;
    v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x27
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  __int64 v59; // x26
  __int64 v60; // x0
  __int64 v61; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v63; // x29
  Il2CppObject *object; // x0
  __int64 v65; // x1
  Il2CppObject *v66; // x27
  __int64 monitor_low; // x1
  int v68; // w29
  int v69; // w28
  int v70; // w27
  __int64 v71; // x26
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  __int64 v79; // x8
  int v80; // w28
  int v81; // w29
  int klass_high; // w27
  __int64 v83; // x0
  __int64 v84; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v86; // x0
  __int64 v87; // x1
  int v88; // w29
  int v89; // w28
  int klass; // w27
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
  if ( (byte_4B48DBB & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_1BDB878(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_1BDB878(&System_Func_SetSvtInfo__bool__TypeInfo, v17);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v22);
    sub_1BDB878(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v23);
    sub_1BDB878(&NetworkManager_TypeInfo, v24);
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v25);
    sub_1BDB878(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v26);
    byte_4B48DBB = 1;
  }
  memset(&v104, 0, sizeof(v104));
  entity = 0LL;
  entities = 0LL;
  memset(&v101, 0, sizeof(v101));
  v99 = 0LL;
  v100 = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v96 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1BDBAD4(v28, v29);
  v30 = (EventFortificationSvtMaster_o *)v28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v98,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v104 = v98;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v104.fields._current;
    if ( !v104.fields._current )
      sub_1BDBAD4(v31, v32);
    if ( !v96 )
      sub_1BDBAD4(0LL, v32);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v96,
           &entities,
           (int32_t)v104.fields._current[1].klass,
           HIDWORD(v104.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v34);
        byte_4B3ED56 = 1;
      }
      v35 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v35 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1BDBAD4(v35, v34);
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
          sub_1BDBAD4(v36, v37);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1BDBAD4(0LL, v37);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v98,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v101 = v98;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v101,
                    (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v53 = sub_1BDBAC4(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v53, 0LL);
            if ( !v53 )
              sub_1BDBAD4(v54, v55);
            v58 = (int32_t)v101.fields._current;
            *(_QWORD *)(v53 + 16) = v101.fields._current;
            v59 = v53 + 16;
            sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 16), v58, v56, v57);
            if ( !entity )
              sub_1BDBAD4(v60, v61);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v63 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v63,
              (Il2CppObject *)v53,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v63,
                       (const MethodInfo_301D9C8 *)Method_BasicHelper_Find_SetSvtInfo___);
            v66 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v79 = *(_QWORD *)v59;
              if ( !*(_QWORD *)v59 )
                sub_1BDBAD4(0LL, v65);
              v80 = *(_DWORD *)(v79 + 24);
              v81 = *(_DWORD *)(v79 + 40);
              klass_high = HIDWORD(current[1].klass);
              v71 = sub_1BDBAC4(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v71, 0LL);
              *(_DWORD *)(v71 + 16) = klass_high;
              *(_DWORD *)(v71 + 20) = v80;
              *(_DWORD *)(v71 + 24) = v81;
              if ( !v27 )
                sub_1BDBAD4(v83, v84);
              items = v27->fields._items;
              v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1BDBAD4(v83, v84);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_65:
                v93 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v93[4] = (Il2CppClass *)v71;
                sub_1BDB81C((CGThumbnailListItem_o *)(v93 + 4), v71, v74, v75);
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
                sub_1BDBAD4(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v30 )
                sub_1BDBAD4(object, monitor_low);
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
                  sub_1BDBAD4(v86, v87);
                v88 = *(_DWORD *)(*(_QWORD *)v59 + 40LL);
                v89 = HIDWORD(current[1].klass);
                klass = (int)v66[1].klass;
                v71 = sub_1BDBAC4(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v71, 0LL);
                *(_DWORD *)(v71 + 16) = v89;
                *(_DWORD *)(v71 + 20) = klass;
                *(_DWORD *)(v71 + 24) = v88;
                if ( !v27 )
                  sub_1BDBAD4(v91, v92);
                items = v27->fields._items;
                v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1BDBAD4(v91, v92);
                size = v27->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !*(_QWORD *)v59 )
            sub_1BDBAD4(object, monitor_low);
          v68 = *(_DWORD *)(*(_QWORD *)v59 + 40LL);
          v69 = HIDWORD(current[1].klass);
          v70 = (int)object[1].klass;
          v71 = sub_1BDBAC4(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v71, 0LL);
          *(_DWORD *)(v71 + 16) = v69;
          *(_DWORD *)(v71 + 20) = v70;
          *(_DWORD *)(v71 + 24) = v68;
          if ( !v27 )
            sub_1BDBAD4(v72, v73);
          items = v27->fields._items;
          v77 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1BDBAD4(v72, v73);
          size = v27->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v71,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1BDBAD4(0LL, v37);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v98,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v101 = v98;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v101,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v38 )
          break;
        v40 = v101.fields._current;
        if ( !v101.fields._current )
          sub_1BDBAD4(v38, v39);
        if ( !v30 )
          sub_1BDBAD4(v38, v39);
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
          v44 = sub_1BDBAC4(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v44, 0LL);
          *(_DWORD *)(v44 + 16) = v41;
          *(_DWORD *)(v44 + 20) = monitor;
          *(_DWORD *)(v44 + 24) = v43;
          if ( !v27 )
            sub_1BDBAD4(v45, v46);
          v49 = v27->fields._items;
          v50 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !v49 )
            sub_1BDBAD4(v45, v46);
          v51 = v27->fields._size;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v44,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v27->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v44;
            sub_1BDB81C((CGThumbnailListItem_o *)(v52 + 4), v44, v47, v48);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v101,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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

  if ( (byte_4B48DBE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48DBE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B48DC0 & 1) == 0 )
  {
    sub_1BDB878(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4B48DC0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B48DC1 & 1) == 0 )
  {
    sub_1BDB878(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1BDB878(&StringLiteral_16865/*"ar200"*/, v6);
    byte_4B48DC1 = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16865/*"ar200"*/,
                                                                              0,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_62607564(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1BDBAD4(this, result);
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
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B48DC2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1BDB878(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4B48DC2 = 1;
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1BDBAD4(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1BDBAD4(this, info);
  return info->fields.position == detail->fields.position;
}