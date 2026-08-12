void FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A6A2 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A6A2 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x22
  EventFortificationMaster_o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_monitor; // x22
  System_Collections_Generic_List_EnterUserSvtInfo__c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_c *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_HashSet_int__o *v27; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v37; // x25
  FortificationAutomaticDialogComponent___c_c *v38; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v41; // x27
  struct FortificationAutomaticDialogComponent___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x25
  Il2CppObject *v50; // x24
  System_Func_object__int__o *v51; // x26
  __int64 v52; // x1
  __int64 v53; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x25
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x24
  Il2CppObject *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 v66; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  int32_t v69; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x25
  Il2CppClass *v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x26
  __int64 v92; // x0
  __int64 v93; // x1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  __int64 v100; // x0
  __int64 v101; // x1
  Il2CppObject *v102; // x25
  Il2CppClass *v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 *v108; // x25
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_Func_object__bool__o *v115; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x26
  FortificationAutomaticDialogComponent___c_c *v120; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v121; // x8
  System_Func_object__int__o *_9__18_4; // x27
  Il2CppObject *v123; // x28
  struct FortificationAutomaticDialogComponent___c_StaticFields *v124; // x0
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  __int64 v132; // x2
  Il2CppObject *v133; // x26
  Il2CppClass *v134; // x28
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v136; // x27
  __int64 v137; // x0
  _BOOL8 v138; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x8
  Il2CppObject v142; // q0
  Il2CppObject v143; // q1
  int32_t v144; // w26
  int32_t v145; // w27
  int64_t v146; // x28
  EnterUserSvtInfo_o *v147; // x25
  __int64 v148; // x0
  __int64 v149; // x1
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  struct System_Object_array *items; // x8
  _QWORD *v157; // x9
  __int64 size; // x10
  Il2CppClass **v159; // x0
  Il2CppObject *v160; // x24
  Il2CppClass *v161; // x8
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  _QWORD *v165; // x0
  System_Reflection_MethodBase_o *v166; // x0
  NetworkManager_ResultCallbackFunc_o *v167; // x22
  __int64 v168; // x1
  __int64 v169; // x2
  EventFortificationRequest_o *v170; // x21
  int32_t eventId; // w19
  const MethodInfo *v172; // x3
  Il2CppObject *object; // [xsp+8h] [xbp-F8h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+40h] [xbp-C0h] BYREF
  __int64 v178; // [xsp+60h] [xbp-A0h]
  Il2CppObject **v179; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *v181; // [xsp+90h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  if ( (byte_596A69D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EnterUserSvtInfo_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_2213A60(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_2213A60(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_2213A60(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_2213A60(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_596A69D = 1;
  }
  v181 = 0;
  entities = 0;
  memset(&v180, 0, sizeof(v180));
  v4 = (Il2CppObject *)sub_2213CCC(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_98;
  object = v4;
  v4[1].monitor = this;
  p_monitor = (MissionNaviTransitionBoardItem_o *)&v4[1].monitor;
  sub_2213A04(p_monitor, (int32_t)this, v7, v8, v9, v10, v11, v12);
  v14 = System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo;
  LOBYTE(p_monitor->monitor) = isSet;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  v18 = DataManager_TypeInfo;
  *(_QWORD *)&p_monitor[-1].fields._BoardType_k__BackingField = 0x800000000LL;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0) )
    return;
  if ( LOBYTE(object[2].klass) )
  {
    v20 = sub_2213CCC(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 24) = object;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 24), (int32_t)object, v21, v22, v23, v24, v25, v26);
      v27 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v27,
        (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v27;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.setSvtIdList,
        (int32_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v37 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v34);
      v38 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !*(&FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo, v35, v36);
        v38 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__18_1 = (System_Func_object__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !*(&v38->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v38, v35, v36);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v41 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v41,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0);
        v42 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v42->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v42->__9__18_1,
          (int32_t)_9__18_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      v49 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v37,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v50 = *(Il2CppObject **)(v20 + 24);
      v51 = (System_Func_object__int__o *)sub_2213CCC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v51,
        v50,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0);
      v54 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v49,
              (System_Func_TSource__TKey__o *)v51,
              (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52, v53);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0);
        v56 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v20 + 16) = v56;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 16), (int32_t)v56, v57, v58, v59, v60, v61, v62);
        if ( v54 )
        {
          klass = v54->klass;
          v64 = *(unsigned __int16 *)&v54->klass->_2.rank;
          if ( *(_WORD *)&v54->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v64;
              p_offset += 4;
              if ( !v64 )
                goto LABEL_24;
            }
            v66 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_24:
            v66 = sub_224BC3C(
                    v54,
                    System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                    0);
          }
          v84 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v66)(
                                  v54,
                                  *(_QWORD *)(v66 + 8));
          v181 = v84;
          v178 = 0;
          v179 = &v181;
          if ( !v84 )
LABEL_72:
            sub_2213CDC(v84, v85);
          v86 = v84;
          while ( 1 )
          {
            v87 = v86->klass;
            v88 = *(unsigned __int16 *)&v86->klass->_2.rank;
            if ( *(_WORD *)&v86->klass->_2.rank )
            {
              v89 = &v87->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v88;
                v89 += 4;
                if ( !v88 )
                  goto LABEL_42;
              }
              v90 = (__int64)&v87->vtable[*v89];
            }
            else
            {
LABEL_42:
              v90 = sub_224BC3C(v86, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) & 1) == 0 )
              break;
            v91 = sub_2213CCC(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v91, 0);
            if ( !v91 )
              sub_2213CDC(v92, v93);
            *(_QWORD *)(v91 + 24) = v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 24), v20, v94, v95, v96, v97, v98, v99);
            v102 = v181;
            if ( !v181 )
              sub_2213CDC(v100, v101);
            v103 = v181->klass;
            v104 = *(unsigned __int16 *)&v181->klass->_2.rank;
            if ( *(_WORD *)&v181->klass->_2.rank )
            {
              v105 = &v103->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v105
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v104;
                v105 += 4;
                if ( !v104 )
                  goto LABEL_51;
              }
              v106 = (__int64)&v103->vtable[*v105];
            }
            else
            {
LABEL_51:
              v106 = sub_224BC3C(
                       v181,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0);
            }
            v107 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8));
            *(_QWORD *)(v91 + 16) = v107;
            v108 = (__int64 *)(v91 + 16);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 16), v107, v109, v110, v111, v112, v113, v114);
            v115 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v115,
              (Il2CppObject *)v91,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0);
            v116 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v115,
                     (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v119 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v116,
                                                                          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v120 = FortificationAutomaticDialogComponent___c_TypeInfo;
            if ( !*(&FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo, v117, v118);
              v120 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            v121 = v120->static_fields;
            _9__18_4 = (System_Func_object__int__o *)v121->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !*(&v120->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v120, v117, v118);
                v121 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              }
              v123 = (Il2CppObject *)v121->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v123,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0);
              v124 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v124->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v124->__9__18_4,
                (int32_t)_9__18_4,
                v125,
                v126,
                v127,
                v128,
                v129,
                v130);
            }
            v131 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v119,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v84 = System_Linq_Enumerable__FirstOrDefault_object_(
                    v131,
                    (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v133 = v84;
            if ( v84 )
            {
              v134 = v84[5].klass;
              monitor = v84[5].monitor;
              v136 = *p_setSvtIdList;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v85, v132);
              *(_QWORD *)&v183.fields.currentCryptoKey = v134;
              *(_QWORD *)&v183.fields.fakeValue = monitor;
              v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v183, 0);
              if ( !v136 )
                sub_2213CDC(v137, (unsigned int)v137);
              v138 = System_Collections_Generic_HashSet_int___Add(
                       v136,
                       v137,
                       (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v141 = *v108;
              if ( !*v108 )
                sub_2213CDC(v138, v139);
              v142 = v133[1];
              v143 = v133[2];
              v144 = *(_DWORD *)(v141 + 16);
              v145 = *(_DWORD *)(v141 + 20);
              *(Il2CppObject *)&v177.fields.currentCryptoKey = v142;
              *(Il2CppObject *)&v177.fields.fakeValue = v143;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v139, v140);
              v176 = v177;
              v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v176, 0);
              v147 = (EnterUserSvtInfo_o *)sub_2213CCC(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v147, v144, v145, v146, 0);
              if ( !v15
                || (items = v15->fields._items,
                    v157 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__,
                    ++v15->fields._version,
                    !items) )
              {
                sub_2213CDC(v148, v149);
              }
              size = v15->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  (Il2CppObject *)v147,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
              }
              else
              {
                v159 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v159[4] = (Il2CppClass *)v147;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v159 + 4),
                  (int32_t)v147,
                  v150,
                  v151,
                  v152,
                  v153,
                  v154,
                  v155);
              }
            }
            v86 = v181;
            if ( !v181 )
              goto LABEL_72;
          }
          v160 = v181;
          if ( v181 )
          {
            v161 = v181->klass;
            v162 = *(unsigned __int16 *)&v181->klass->_2.rank;
            if ( *(_WORD *)&v181->klass->_2.rank )
            {
              v163 = &v161->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v163 - 1) != System_IDisposable_TypeInfo )
              {
                --v162;
                v163 += 4;
                if ( !v162 )
                  goto LABEL_78;
              }
              v164 = (__int64)&v161->vtable[*v163];
            }
            else
            {
LABEL_78:
              v164 = sub_224BC3C(v181, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(Il2CppObject *, _QWORD))v164)(v160, *(_QWORD *)(v164 + 8));
          }
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_83;
          }
        }
      }
    }
LABEL_98:
    sub_2213CDC(Master_object, v6);
  }
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v19);
  if ( !Master_object )
    goto LABEL_98;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v177,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v180 = *(System_Collections_Generic_List_Enumerator_object__o *)&v177.fields.currentCryptoKey;
  v177.fields.currentCryptoKey = 0;
  v177.fields.hiddenValue = (int64_t)&v180;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v180,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v67 )
      break;
    if ( !v180.fields._current )
      sub_2213CDC(v67, v68);
    v69 = (int32_t)v180.fields._current[1].klass;
    klass_high = HIDWORD(v180.fields._current[1].klass);
    v71 = (EnterUserSvtInfo_o *)sub_2213CCC(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v71, v69, klass_high, 0, 0);
    if ( !v15
      || (v80 = v15->fields._items,
          v81 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__,
          ++v15->fields._version,
          !v80) )
    {
      sub_2213CDC(v72, v73);
    }
    v82 = v15->fields._size;
    if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v71,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v80->obj.klass + v82;
      v15->fields._size = v82 + 1;
      v83[4] = (Il2CppClass *)v71;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v83 + 4), (int32_t)v71, v74, v75, v76, v77, v78, v79);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v180,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_83:
  v165 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v165 = (_QWORD *)sub_2213A78(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v166 = (System_Reflection_MethodBase_o *)sub_2213A44(v165, v165[4]);
  OverwriteAssetSoundName__PlaySystemSe(v166, 8, 0, 0);
  v167 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v167,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v168, v169);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v167,
                                                  (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v15 )
    goto LABEL_98;
  v170 = (EventFortificationRequest_o *)Master_object;
  eventId = this->fields.eventId;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v15,
                                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v170 )
    goto LABEL_98;
  EventFortificationRequest__beginRequest(v170, eventId, (EnterUserSvtInfo_array *)Master_object, v172);
}


void FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596A6A0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_596A6A0 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
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
    sub_2213CDC(0, v6);
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

  if ( (byte_596A69F & 1) == 0 )
  {
    sub_2213A60(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_596A69F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *titleLb; // x20
  System_String_o *v20; // x0
  __int64 v21; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v26; // x20

  if ( (byte_596A69C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6764/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_6765/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_6766/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_2213A60(&StringLiteral_6767/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_596A69C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (System_String_o *)closeCallBack,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallBack,
      (int32_t)closeCallBack,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    titleLb = this->fields.titleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6767/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v20, 0);
    descriptionLb = this->fields.descriptionLb;
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6764/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v20, 0);
    setButtonLb = this->fields.setButtonLb;
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6766/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v20, 0),
          removeButtonLb = this->fields.removeButtonLb,
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6765/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v20, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_2213CDC(v20, v21);
    }
    UILabel__set_text(cancelButtonLb, v20, 0);
    this->fields.state = 1;
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  EventFortificationSvtMaster_o *v11; // x24
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  NetworkManager_c *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x26
  int v23; // w27
  int monitor; // w28
  int v25; // w29
  __int64 v26; // x26
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x27
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  __int64 v49; // x26
  __int64 v50; // x0
  __int64 v51; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v53; // x29
  Il2CppObject *object; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x27
  __int64 monitor_low; // x1
  int v58; // w29
  int v59; // w28
  int v60; // w27
  __int64 v61; // x26
  __int64 v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  __int64 v73; // x8
  int v74; // w28
  int v75; // w29
  int klass_high; // w27
  __int64 v77; // x0
  __int64 v78; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v80; // x0
  __int64 v81; // x1
  int v82; // w29
  int v83; // w28
  int klass; // w27
  __int64 v85; // x0
  __int64 v86; // x1
  Il2CppClass **v87; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+10h] [xbp-100h]
  EventFortificationDetailMaster_o *v90; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+38h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v93; // [xsp+50h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v94; // [xsp+58h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+60h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+90h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_596A69E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_2213A60(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_2213A60(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_596A69E = 1;
  }
  memset(&v98, 0, sizeof(v98));
  entity = 0;
  entities = 0;
  memset(&v95, 0, sizeof(v95));
  v93 = 0;
  v94 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v90 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_2213CDC(v9, v10);
  v11 = (EventFortificationSvtMaster_o *)v9;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v98 = v92;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v98.fields._current;
    if ( !v98.fields._current )
      sub_2213CDC(v12, v13);
    if ( !v90 )
      sub_2213CDC(0, v13);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v90,
           &entities,
           (int32_t)v98.fields._current[1].klass,
           HIDWORD(v98.fields._current[1].klass),
           0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v17 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
        v17 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_2213CDC(v17, v15);
      v18 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v17->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0);
      if ( v18 )
      {
        if ( !entity )
          sub_2213CDC(v18, v19);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_2213CDC(0, v19);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v92,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v95 = v92;
          v92.fields._list = 0;
          *(_QWORD *)&v92.fields._index = &v95;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v95,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v39 = sub_2213CCC(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v39, 0);
            if ( !v39 )
              sub_2213CDC(v40, v41);
            v48 = (int32_t)v95.fields._current;
            *(_QWORD *)(v39 + 16) = v95.fields._current;
            v49 = v39 + 16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 16), v48, v42, v43, v44, v45, v46, v47);
            if ( !entity )
              sub_2213CDC(v50, v51);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v53 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v53,
              (Il2CppObject *)v39,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v53,
                       (const MethodInfo_3810A1C *)Method_BasicHelper_Find_SetSvtInfo___);
            v56 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v73 = *(_QWORD *)v49;
              if ( !*(_QWORD *)v49 )
                sub_2213CDC(0, v55);
              v74 = *(_DWORD *)(v73 + 24);
              v75 = *(_DWORD *)(v73 + 40);
              klass_high = HIDWORD(current[1].klass);
              v61 = sub_2213CCC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v61, 0);
              *(_DWORD *)(v61 + 16) = klass_high;
              *(_DWORD *)(v61 + 20) = v74;
              *(_DWORD *)(v61 + 24) = v75;
              if ( !v6
                || (items = v6->fields._items,
                    v71 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
                    ++v6->fields._version,
                    !items) )
              {
                sub_2213CDC(v77, v78);
              }
              size = v6->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
              {
LABEL_65:
                v87 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v87[4] = (Il2CppClass *)v61;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v87 + 4), v61, v64, v65, v66, v67, v68, v69);
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
                sub_2213CDC(0, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v11 )
                sub_2213CDC(object, monitor_low);
              v80 = EventFortificationSvtMaster__TryGetEntity(
                      v11,
                      &v93,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0);
              if ( !v80 )
              {
                if ( !*(_QWORD *)v49 )
                  sub_2213CDC(v80, v81);
                v82 = *(_DWORD *)(*(_QWORD *)v49 + 40LL);
                v83 = HIDWORD(current[1].klass);
                klass = (int)v56[1].klass;
                v61 = sub_2213CCC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v61, 0);
                *(_DWORD *)(v61 + 16) = v83;
                *(_DWORD *)(v61 + 20) = klass;
                *(_DWORD *)(v61 + 24) = v82;
                if ( !v6
                  || (items = v6->fields._items,
                      v71 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
                      ++v6->fields._version,
                      !items) )
                {
                  sub_2213CDC(v85, v86);
                }
                size = v6->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !*(_QWORD *)v49 )
            sub_2213CDC(object, monitor_low);
          v58 = *(_DWORD *)(*(_QWORD *)v49 + 40LL);
          v59 = HIDWORD(current[1].klass);
          v60 = (int)object[1].klass;
          v61 = sub_2213CCC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v61, 0);
          *(_DWORD *)(v61 + 16) = v59;
          *(_DWORD *)(v61 + 20) = v60;
          *(_DWORD *)(v61 + 24) = v58;
          if ( !v6
            || (items = v6->fields._items,
                v71 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
                ++v6->fields._version,
                !items) )
          {
            sub_2213CDC(v62, v63);
          }
          size = v6->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v61,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_2213CDC(0, v19);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v92,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v95 = v92;
      v92.fields._list = 0;
      *(_QWORD *)&v92.fields._index = &v95;
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v20 )
          break;
        v22 = v95.fields._current;
        if ( !v95.fields._current )
          sub_2213CDC(v20, v21);
        if ( !v11 )
          sub_2213CDC(v20, v21);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v11,
                &v94,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v95.fields._current[1].monitor,
                0)
          && v4 )
        {
          v23 = HIDWORD(current[1].klass);
          monitor = (int)v22[1].monitor;
          v25 = (int)v22[2].monitor;
          v26 = sub_2213CCC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v26, 0);
          *(_DWORD *)(v26 + 16) = v23;
          *(_DWORD *)(v26 + 20) = monitor;
          *(_DWORD *)(v26 + 24) = v25;
          if ( !v6
            || (v35 = v6->fields._items,
                v36 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__,
                ++v6->fields._version,
                !v35) )
          {
            sub_2213CDC(v27, v28);
          }
          v37 = v6->fields._size;
          if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v26,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v6->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v26;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), v26, v29, v30, v31, v32, v33, v34);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v95,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A6A1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6A1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A6A3 & 1) == 0 )
  {
    sub_2213A60(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_596A6A3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.idx;
}


int32_t FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
  if ( (byte_596A6A4 & 1) == 0 )
  {
    sub_2213A60(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_2213A60(&StringLiteral_17566/*"ar200"*/);
    byte_596A6A4 = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_17566/*"ar200"*/,
                                                                              0,
                                                                              0);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, result);
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
    sub_2213CDC(this, 0);
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
  __int64 v12; // x19
  __int64 v13; // x21
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_596A6A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A6A5 = 1;
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
  v13 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  setSvtIdList = _4__this->fields.setSvtIdList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                            v17,
                                                                            0);
  if ( !setSvtIdList )
LABEL_20:
    sub_2213CDC(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_2213CDC(this, info);
  return info->fields.position == detail->fields.position;
}