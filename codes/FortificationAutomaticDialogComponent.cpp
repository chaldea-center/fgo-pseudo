void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00161 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A00161 = 1;
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
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_object__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  const MethodInfo *v58; // x3
  __int64 v59; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_HashSet_int__o *v64; // x19
  int32_t v65; // w2
  int32_t v66; // w3
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v70; // x25
  FortificationAutomaticDialogComponent___c_c *v71; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v73; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x0
  Il2CppObject *v78; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v79; // x23
  __int64 v80; // x1
  __int64 v81; // x2
  System_Func_object__int__o *v82; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v83; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v89; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v92; // x26
  _BOOL8 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  int32_t v96; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v98; // x22
  __int64 v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  __int64 v106; // x23
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x27
  __int64 v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  __int64 v117; // x8
  __int64 v118; // x9
  int *v119; // x10
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 *v122; // x26
  int32_t v123; // w2
  int32_t v124; // w3
  __int64 v125; // x1
  __int64 v126; // x2
  System_Func_object__bool__o *v127; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  System_Collections_Generic_List_TSource__o *v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  FortificationAutomaticDialogComponent___c_c *v132; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v135; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v136; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x0
  Il2CppObject *v140; // x0
  Il2CppObject *v141; // x27
  Il2CppClass *v142; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v144; // x28
  __int64 v145; // x0
  _BOOL8 v146; // x0
  __int64 v147; // x8
  Il2CppObject v148; // q0
  Il2CppObject v149; // q1
  int32_t v150; // w27
  int32_t v151; // w28
  int64_t v152; // x29
  __int64 v153; // x1
  __int64 v154; // x2
  EnterUserSvtInfo_o *v155; // x26
  __int64 v156; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  struct System_Object_array *items; // x8
  _QWORD *v160; // x9
  __int64 size; // x10
  Il2CppClass **v162; // x0
  __int64 v163; // x8
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  _QWORD *v167; // x0
  System_Reflection_MethodBase_o *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x2
  NetworkManager_ResultCallbackFunc_o *v171; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v173; // x21
  const MethodInfo *v174; // x3
  FortificationAutomaticDialogComponent_o *v175; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_4A0015C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&EnterUserSvtInfo_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent_AutoSet__, v18);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v19);
    sub_1B640C8(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v20);
    sub_1B640C8(&System_Func_UserServantEntity__int__TypeInfo, v21);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1B640C8(&System_IDisposable_TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v27);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v28);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v30);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v33);
    sub_1B640C8(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v34);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventFortificationRequest___, v35);
    sub_1B640C8(&NetworkManager_TypeInfo, v36);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v39);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v40);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v41);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v42);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v43);
    sub_1B640C8(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v44);
    sub_1B640C8(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v45);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v46);
    sub_1B640C8(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v47);
    sub_1B640C8(&FortificationAutomaticDialogComponent___c_TypeInfo, v48);
    byte_4A0015C = 1;
  }
  entities = 0LL;
  memset(&v180, 0, sizeof(v180));
  v49 = sub_1B64314(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, isSet, method);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_93;
  *(_QWORD *)(v49 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 24), (int32_t)this, v51, v52);
  *(_BYTE *)(v49 + 32) = isSet;
  v55 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v49 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v49;
  if ( *(_BYTE *)(v49 + 32) )
  {
    v59 = sub_1B64314(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v56, v57);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    if ( v59 )
    {
      *(_QWORD *)(v59 + 24) = v49;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 24), v49, v60, v61);
      v64 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v62,
                                                           v63);
      System_Collections_Generic_HashSet_int____ctor(
        v64,
        (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v64;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setSvtIdList, (int32_t)v64, v65, v66);
      v175 = this;
      v70 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v67);
      v71 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v71 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v71->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v71->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v71);
          v71 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v73 = (Il2CppObject *)v71->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1B64314(
                                                   System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                                   v68,
                                                   v69);
        System_Func_object__int____ctor(
          _9__18_1,
          v73,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v75, v76);
      }
      v77 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v70,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v78 = *(Il2CppObject **)(v59 + 24);
      v79 = v77;
      v82 = (System_Func_object__int__o *)sub_1B64314(
                                            System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo,
                                            v80,
                                            v81);
      System_Func_object__int____ctor(
        v82,
        v78,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v83 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v79,
              (System_Func_TSource__TKey__o *)v82,
              (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v85 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v59 + 16) = v85;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 16), (int32_t)v85, v86, v87);
        if ( v83 )
        {
          klass = v83->klass;
          v89 = *(unsigned __int16 *)(&v83->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v83->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v89;
              p_offset += 4;
              if ( !v89 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1BB60A8(
                         v83,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v106 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v83,
                   *(_QWORD *)(p_method + 8));
          if ( !v106 )
            sub_1B64324(0LL);
          while ( 1 )
          {
            v107 = *(_QWORD *)v106;
            v108 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
            {
              v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v109 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v108;
                v109 += 4;
                if ( !v108 )
                  goto LABEL_41;
              }
              v110 = v107 + 16LL * *v109 + 312;
            }
            else
            {
LABEL_41:
              v110 = sub_1BB60A8(v106, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8)) & 1) == 0 )
              break;
            v113 = sub_1B64314(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v111, v112);
            System_Object___ctor((Il2CppObject *)v113, 0LL);
            if ( !v113 )
              sub_1B64324(v114);
            *(_QWORD *)(v113 + 24) = v59;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v113 + 24), v59, v115, v116);
            v117 = *(_QWORD *)v106;
            v118 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
            {
              v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v119
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v118;
                v119 += 4;
                if ( !v118 )
                  goto LABEL_49;
              }
              v120 = v117 + 16LL * *v119 + 312;
            }
            else
            {
LABEL_49:
              v120 = sub_1BB60A8(
                       v106,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v121 = (*(__int64 (__fastcall **)(__int64, _QWORD))v120)(v106, *(_QWORD *)(v120 + 8));
            *(_QWORD *)(v113 + 16) = v121;
            v122 = (__int64 *)(v113 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v113 + 16), v121, v123, v124);
            v127 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v125, v126);
            System_Func_object__bool____ctor(
              v127,
              (Il2CppObject *)v113,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v128 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v127,
                     (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v129 = System_Linq_Enumerable__ToList_object_(
                     v128,
                     (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v132 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v133 = (System_Collections_Generic_IEnumerable_TSource__o *)v129;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v132 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v132->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v132->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v132);
                v132 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v135 = (Il2CppObject *)v132->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1B64314(
                                                         System_Func_UserServantEntity__int__TypeInfo,
                                                         v130,
                                                         v131);
              System_Func_object__int____ctor(
                _9__18_4,
                v135,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v136 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v136->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v136->__9__18_4, (int32_t)_9__18_4, v137, v138);
            }
            v139 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v133,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v140 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v139,
                     (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v141 = v140;
            if ( v140 )
            {
              v142 = v140[5].klass;
              monitor = v140[5].monitor;
              v144 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v182.fields.currentCryptoKey = v142;
              *(_QWORD *)&v182.fields.fakeValue = monitor;
              v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v182, 0LL);
              if ( !v144 )
                sub_1B64324(v145);
              v146 = System_Collections_Generic_HashSet_int___Add(
                       v144,
                       v145,
                       (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v147 = *v122;
              if ( !*v122 )
                sub_1B64324(v146);
              v148 = v141[1];
              v149 = v141[2];
              v151 = *(_DWORD *)(v147 + 16);
              v150 = *(_DWORD *)(v147 + 20);
              *(Il2CppObject *)&v179.fields.currentCryptoKey = v148;
              *(Il2CppObject *)&v179.fields.fakeValue = v149;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v178 = v179;
              v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v178, 0LL);
              v155 = (EnterUserSvtInfo_o *)sub_1B64314(EnterUserSvtInfo_TypeInfo, v153, v154);
              EnterUserSvtInfo___ctor(v155, v151, v150, v152, 0LL);
              if ( !v55 )
                sub_1B64324(v156);
              items = v55->fields._items;
              v160 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v55->fields._version;
              if ( !items )
                sub_1B64324(v156);
              size = v55->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v55,
                  (Il2CppObject *)v155,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
              }
              else
              {
                v162 = &items->obj.klass + size;
                v55->fields._size = size + 1;
                v162[4] = (Il2CppClass *)v155;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v162 + 4), (int32_t)v155, v157, v158);
              }
            }
          }
          v163 = *(_QWORD *)v106;
          v164 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
          {
            v165 = (int *)(*(_QWORD *)(v163 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v165 - 1) != System_IDisposable_TypeInfo )
            {
              --v164;
              v165 += 4;
              if ( !v164 )
                goto LABEL_73;
            }
            v166 = v163 + 16LL * *v165 + 312;
          }
          else
          {
LABEL_73:
            v166 = sub_1BB60A8(v106, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v166)(v106, *(_QWORD *)(v166 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3364040 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v92 = v175;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1B64324(Master_object);
  }
  v92 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v58);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v179,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v180.fields._list = *(_OWORD *)&v179.fields.currentCryptoKey;
  v180.fields._current = (Il2CppObject *)v179.fields.fakeValue;
  while ( 1 )
  {
    v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v180,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v93 )
      break;
    if ( !v180.fields._current )
      sub_1B64324(v93);
    v96 = (int32_t)v180.fields._current[1].klass;
    klass_high = HIDWORD(v180.fields._current[1].klass);
    v98 = (EnterUserSvtInfo_o *)sub_1B64314(EnterUserSvtInfo_TypeInfo, v94, v95);
    EnterUserSvtInfo___ctor(v98, v96, klass_high, 0LL, 0LL);
    if ( !v55 )
      sub_1B64324(v99);
    v102 = v55->fields._items;
    v103 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v55->fields._version;
    if ( !v102 )
      sub_1B64324(v99);
    v104 = v55->fields._size;
    if ( (unsigned int)v104 >= v102->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v55,
        (Il2CppObject *)v98,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    }
    else
    {
      v105 = &v102->obj.klass + v104;
      v55->fields._size = v104 + 1;
      v105[4] = (Il2CppClass *)v98;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)v98, v100, v101);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v180,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v167 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v167 = (_QWORD *)sub_1B640E0(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v168 = (System_Reflection_MethodBase_o *)sub_1B640AC(v167, v167[4]);
  OverwriteAssetSoundName__PlaySystemSe(v168, 8, 0LL);
  v171 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v169, v170);
  NetworkManager_ResultCallbackFunc___ctor(
    v171,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v171,
                                                  (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v55 )
    goto LABEL_93;
  eventId = v92->fields.eventId;
  v173 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v55,
                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v173 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v173, eventId, (EnterUserSvtInfo_array *)Master_object, v174);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A0015F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v4);
    byte_4A0015F = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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

  if ( (byte_4A0015E & 1) == 0 )
  {
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_4A0015E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x20

  if ( (byte_4A0015B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, onDecide);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_6419/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v9);
    sub_1B640C8(&StringLiteral_6420/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v10);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1B640C8(&StringLiteral_6421/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v12);
    sub_1B640C8(&StringLiteral_6422/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v13);
    byte_4A0015B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (int32_t)closeCallBack,
      (int32_t)method);
    this->fields.closeCallBack = closeCallBack;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)closeCallBack, v14, v15);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6422/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v17, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6419/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v17, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6421/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v17, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6420/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v17, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1B64324(v17);
    }
    UILabel__set_text(cancelButtonLb, v17, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  EventFortificationSvtMaster_o *v29; // x24
  _BOOL8 v30; // x0
  Il2CppObject *current; // x22
  int64_t UserId; // x2
  _BOOL8 v33; // x0
  _BOOL8 v34; // x0
  Il2CppObject *v35; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  int v38; // w26
  int monitor; // w27
  int v40; // w28
  __int64 v41; // x25
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x26
  __int64 v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  __int64 v56; // x25
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  System_Object_array *setSvtInfos; // x27
  System_Func_object__bool__o *v61; // x28
  Il2CppObject *object; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  Il2CppObject *v65; // x26
  __int64 monitor_low; // x1
  int v67; // w28
  int v68; // w27
  int v69; // w26
  __int64 v70; // x25
  __int64 v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  __int64 v77; // x8
  int v78; // w27
  int v79; // w28
  int klass_high; // w26
  __int64 v81; // x0
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  int v86; // w28
  int v87; // w27
  int klass; // w26
  __int64 v89; // x0
  Il2CppClass **v90; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v93; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v96; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v97; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4A0015D & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_1B640C8(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_1B640C8(&System_Func_SetSvtInfo__bool__TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v22);
    sub_1B640C8(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v25);
    sub_1B640C8(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v26);
    byte_4A0015D = 1;
  }
  memset(&v101, 0, sizeof(v101));
  entity = 0LL;
  entities = 0LL;
  memset(&v98, 0, sizeof(v98));
  v96 = 0LL;
  v97 = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                                                       teamList,
                                                       isSet);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v93 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1B64324(v28);
  v29 = (EventFortificationSvtMaster_o *)v28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v101 = v95;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v101,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v30 )
      break;
    current = v101.fields._current;
    if ( !v101.fields._current )
      sub_1B64324(v30);
    if ( !v93 )
      sub_1B64324(0LL);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v93,
           &entities,
           (int32_t)v101.fields._current[1].klass,
           HIDWORD(v101.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_object )
        sub_1B64324(0LL);
      v33 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v33 )
      {
        if ( !entity )
          sub_1B64324(v33);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v95,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v98 = v95;
          while ( 1 )
          {
LABEL_31:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v98,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_28;
            v51 = sub_1B64314(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v49, v50);
            System_Object___ctor((Il2CppObject *)v51, 0LL);
            if ( !v51 )
              sub_1B64324(v52);
            v55 = (int32_t)v98.fields._current;
            *(_QWORD *)(v51 + 16) = v98.fields._current;
            v56 = v51 + 16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 16), v55, v53, v54);
            if ( !entity )
              sub_1B64324(v57);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v61 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SetSvtInfo__bool__TypeInfo, v58, v59);
            System_Func_object__bool____ctor(
              v61,
              (Il2CppObject *)v51,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v61,
                       (const MethodInfo_2E2543C *)Method_BasicHelper_Find_SetSvtInfo___);
            v65 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v77 = *(_QWORD *)v56;
              if ( !*(_QWORD *)v56 )
                sub_1B64324(0LL);
              v78 = *(_DWORD *)(v77 + 24);
              v79 = *(_DWORD *)(v77 + 40);
              klass_high = HIDWORD(current[1].klass);
              v70 = sub_1B64314(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v63, v64);
              System_Object___ctor((Il2CppObject *)v70, 0LL);
              *(_DWORD *)(v70 + 16) = klass_high;
              *(_DWORD *)(v70 + 20) = v78;
              *(_DWORD *)(v70 + 24) = v79;
              if ( !v27 )
                sub_1B64324(v81);
              items = v27->fields._items;
              v75 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1B64324(v81);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_61:
                v90 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v90[4] = (Il2CppClass *)v70;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v90 + 4), v70, v72, v73);
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
                sub_1B64324(0LL);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v29 )
                sub_1B64324(object);
              v83 = EventFortificationSvtMaster__TryGetEntity(
                      v29,
                      &v96,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v83 )
              {
                if ( !*(_QWORD *)v56 )
                  sub_1B64324(v83);
                v86 = *(_DWORD *)(*(_QWORD *)v56 + 40LL);
                v87 = HIDWORD(current[1].klass);
                klass = (int)v65[1].klass;
                v70 = sub_1B64314(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v84, v85);
                System_Object___ctor((Il2CppObject *)v70, 0LL);
                *(_DWORD *)(v70 + 16) = v87;
                *(_DWORD *)(v70 + 20) = klass;
                *(_DWORD *)(v70 + 24) = v86;
                if ( !v27 )
                  sub_1B64324(v89);
                items = v27->fields._items;
                v75 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1B64324(v89);
                size = v27->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_61;
                goto LABEL_62;
              }
            }
          }
          if ( !*(_QWORD *)v56 )
            sub_1B64324(object);
          v67 = *(_DWORD *)(*(_QWORD *)v56 + 40LL);
          v68 = HIDWORD(current[1].klass);
          v69 = (int)object[1].klass;
          v70 = sub_1B64314(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, monitor_low, v64);
          System_Object___ctor((Il2CppObject *)v70, 0LL);
          *(_DWORD *)(v70 + 16) = v68;
          *(_DWORD *)(v70 + 20) = v69;
          *(_DWORD *)(v70 + 24) = v67;
          if ( !v27 )
            sub_1B64324(v71);
          items = v27->fields._items;
          v75 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1B64324(v71);
          size = v27->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_61;
LABEL_62:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v70,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          goto LABEL_31;
        }
      }
      if ( !entities )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v95,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v98 = v95;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v98,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v34 )
          break;
        v35 = v98.fields._current;
        if ( !v98.fields._current )
          sub_1B64324(v34);
        if ( !v29 )
          sub_1B64324(v34);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v29,
                &v97,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v98.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v38 = HIDWORD(current[1].klass);
          monitor = (int)v35[1].monitor;
          v40 = (int)v35[2].monitor;
          v41 = sub_1B64314(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v36, v37);
          System_Object___ctor((Il2CppObject *)v41, 0LL);
          *(_DWORD *)(v41 + 16) = v38;
          *(_DWORD *)(v41 + 20) = monitor;
          *(_DWORD *)(v41 + 24) = v40;
          if ( !v27 )
            sub_1B64324(v42);
          v45 = v27->fields._items;
          v46 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !v45 )
            sub_1B64324(v42);
          v47 = v27->fields._size;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v41,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v27->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v41;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), v41, v43, v44);
          }
        }
      }
LABEL_28:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v98,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v101,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A00160 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00160 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00162 & 1) == 0 )
  {
    sub_1B640C8(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4A00162 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FortificationAutomaticDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  const MethodInfo *v10; // x1

  v4 = this;
  if ( (byte_4A00163 & 1) == 0 )
  {
    sub_1B640C8(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1B640C8(&StringLiteral_16807/*"ar200"*/, v6);
    byte_4A00163 = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16807/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, v10);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1B64324(this);
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
  if ( (byte_4A00164 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1B640C8(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4A00164 = 1;
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1B64324(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B64324(this);
  return info->fields.position == detail->fields.position;
}