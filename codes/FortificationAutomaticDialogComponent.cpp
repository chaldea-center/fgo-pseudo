void FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C216CB & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C216CB = 1;
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
  Il2CppObject *v5; // x19
  EventFortificationMaster_o *Master_object; // x0
  __int64 v7; // x1
  void **p_monitor; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x24
  System_Collections_Generic_HashSet_int__o *v12; // x19
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v14; // x25
  FortificationAutomaticDialogComponent___c_c *v15; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v17; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  Il2CppObject *monitor; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x23
  System_Func_object__int__o *v22; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppClass *v31; // d8
  Il2CppObject *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x1
  __int64 v40; // x23
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  Il2CppObject *v45; // x27
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  Il2CppObject *v52; // x26
  System_Func_object__bool__o *v53; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_List_TSource__o *v55; // x0
  FortificationAutomaticDialogComponent___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v59; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x27
  Il2CppClass *v64; // x19
  void *v65; // x29
  System_Collections_Generic_HashSet_int__o *v66; // x28
  __int64 v67; // x0
  _BOOL8 v68; // x0
  __int64 v69; // x1
  Il2CppObject v70; // q0
  Il2CppClass *name; // d8
  int64_t v72; // x27
  Il2CppObject *v73; // x26
  __int64 v74; // x0
  __int64 v75; // x1
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  NetworkManager_ResultCallbackFunc_o *v86; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v88; // x21
  const MethodInfo *v89; // x3
  FortificationAutomaticDialogComponent_o *v90; // [xsp+8h] [xbp-E8h]
  Il2CppObject *object; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4C216C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EnterUserSvtInfo_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_1C2D490(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_1C2D490(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_1C2D490(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_1C2D490(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_1C2D490(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4C216C6 = 1;
  }
  entities = 0;
  memset(&v95, 0, sizeof(v95));
  v5 = (Il2CppObject *)sub_1C2D6DC(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_93;
  object = v5;
  v5[1].monitor = this;
  p_monitor = &v5[1].monitor;
  sub_1C2D434(p_monitor);
  *((_BYTE *)p_monitor + 8) = isSet;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(p_monitor - 1) = (void *)0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0) )
    return;
  if ( LOBYTE(object[2].klass) )
  {
    v11 = (Il2CppObject *)sub_1C2D6DC(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( v11 )
    {
      v11[1].monitor = object;
      sub_1C2D434(&v11[1].monitor);
      v12 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v12,
        (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v12;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1C2D434(&this->fields.setSvtIdList);
      v90 = this;
      v14 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v13);
      v15 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v15 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v15->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v17,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1C2D434(&static_fields->__9__18_1);
      }
      v19 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      monitor = (Il2CppObject *)v11[1].monitor;
      v21 = v19;
      v22 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v22,
        monitor,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0);
      v23 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v21,
              (System_Func_TSource__TKey__o *)v22,
              (const MethodInfo_310D87C *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0);
        v11[1].klass = (Il2CppClass *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
        Master_object = (EventFortificationMaster_o *)sub_1C2D434(&v11[1]);
        if ( v23 )
        {
          klass = v23->klass;
          v26 = *(unsigned __int16 *)&v23->klass->_2.rank;
          if ( *(_WORD *)&v23->klass->_2.rank )
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
            v28 = sub_1C7DCA8(
                    v23,
                    System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                    0);
          }
          v40 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v28)(
                  v23,
                  *(_QWORD *)(v28 + 8));
          if ( !v40 )
            sub_1C2D6EC(0, v39);
          while ( 1 )
          {
            v41 = *(_QWORD *)v40;
            v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
            {
              v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v42;
                v43 += 4;
                if ( !v42 )
                  goto LABEL_41;
              }
              v44 = v41 + 16LL * *v43 + 312;
            }
            else
            {
LABEL_41:
              v44 = sub_1C7DCA8(v40, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
              break;
            v45 = (Il2CppObject *)sub_1C2D6DC(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor(v45, 0);
            if ( !v45 )
              sub_1C2D6EC(v46, v47);
            v45[1].monitor = v11;
            sub_1C2D434(&v45[1].monitor);
            v48 = *(_QWORD *)v40;
            v49 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
            {
              v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v50
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v49;
                v50 += 4;
                if ( !v49 )
                  goto LABEL_49;
              }
              v51 = v48 + 16LL * *v50 + 312;
            }
            else
            {
LABEL_49:
              v51 = sub_1C7DCA8(
                      v40,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0);
            }
            v45[1].klass = (Il2CppClass *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v40, *(_QWORD *)(v51 + 8));
            v52 = v45 + 1;
            sub_1C2D434(&v45[1]);
            v53 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v53,
              v45,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0);
            v54 = System_Linq_Enumerable__Where_object_(
                    OrganizationList,
                    (System_Func_TSource__bool__o *)v53,
                    (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v55 = System_Linq_Enumerable__ToList_object_(
                    v54,
                    (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v56 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v56 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v56->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v56->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v56);
                v56 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v59 = (Il2CppObject *)v56->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v59,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0);
              v60 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v60->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1C2D434(&v60->__9__18_4);
            }
            v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                         v57,
                                                                         (System_Func_TSource__TKey__o *)_9__18_4,
                                                                         (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v62 = System_Linq_Enumerable__FirstOrDefault_object_(
                    v61,
                    (const MethodInfo_30F7054 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v63 = v62;
            if ( v62 )
            {
              v64 = v62[5].klass;
              v65 = v62[5].monitor;
              v66 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v97.fields.currentCryptoKey = v64;
              *(_QWORD *)&v97.fields.fakeValue = v65;
              v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v97, 0);
              if ( !v66 )
                sub_1C2D6EC(v67, (unsigned int)v67);
              v68 = System_Collections_Generic_HashSet_int___Add(
                      v66,
                      v67,
                      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v52->klass )
                sub_1C2D6EC(v68, v69);
              v70 = v63[2];
              name = (Il2CppClass *)v52->klass->_1.name;
              *(Il2CppObject *)&v94.fields.currentCryptoKey = v63[1];
              *(Il2CppObject *)&v94.fields.fakeValue = v70;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v93 = v94;
              v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v93, 0);
              v73 = (Il2CppObject *)sub_1C2D6DC(EnterUserSvtInfo_TypeInfo);
              System_Object___ctor(v73, 0);
              v73[1].klass = name;
              v73[1].monitor = (void *)v72;
              if ( !v9 )
                sub_1C2D6EC(v74, v75);
              items = v9->fields._items;
              v77 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v9->fields._version;
              if ( !items )
                sub_1C2D6EC(v74, v75);
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v73,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
              }
              else
              {
                v79 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v79[4] = (Il2CppClass *)v73;
                sub_1C2D434(v79 + 4);
              }
            }
          }
          v80 = *(_QWORD *)v40;
          v81 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
          {
            v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
            {
              --v81;
              v82 += 4;
              if ( !v81 )
                goto LABEL_73;
            }
            v83 = v80 + 16LL * *v82 + 312;
          }
          else
          {
LABEL_73:
            v83 = sub_1C7DCA8(v40, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v83)(v40, *(_QWORD *)(v83 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_363AE14 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            this = v90;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1C2D6EC(Master_object, v7);
  }
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v10);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v95.fields._list = *(_OWORD *)&v94.fields.currentCryptoKey;
  v95.fields._current = (Il2CppObject *)v94.fields.fakeValue;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v95,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v29 )
      break;
    if ( !v95.fields._current )
      sub_1C2D6EC(v29, v30);
    v31 = v95.fields._current[1].klass;
    v32 = (Il2CppObject *)sub_1C2D6DC(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor(v32, 0);
    v32[1].klass = v31;
    v32[1].monitor = 0;
    if ( !v9 )
      sub_1C2D6EC(v33, v34);
    v35 = v9->fields._items;
    v36 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v9->fields._version;
    if ( !v35 )
      sub_1C2D6EC(v33, v34);
    v37 = v9->fields._size;
    if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v32,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->obj.klass + v37;
      v9->fields._size = v37 + 1;
      v38[4] = (Il2CppClass *)v32;
      sub_1C2D434(v38 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v95,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v84 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v84 = (_QWORD *)sub_1C2D4A8(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v85 = (System_Reflection_MethodBase_o *)sub_1C2D474(v84, v84[4]);
  OverwriteAssetSoundName__PlaySystemSe(v85, 8, 0, 0);
  v86 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v86,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v86,
                                                  (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v9 )
    goto LABEL_93;
  eventId = this->fields.eventId;
  v88 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v9,
                                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v88 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v88, eventId, (EnterUserSvtInfo_array *)Master_object, v89);
}


void FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C216C9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_4C216C9 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C216C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_4C216C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C216C5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6473/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_1C2D490(&StringLiteral_6474/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_6475/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_1C2D490(&StringLiteral_6476/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_4C216C5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C2D434(&this->fields.onDecide);
    this->fields.closeCallBack = closeCallBack;
    sub_1C2D434(&this->fields.closeCallBack);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v8, 0);
    descriptionLb = this->fields.descriptionLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v8, 0);
    setButtonLb = this->fields.setButtonLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v8, 0),
          removeButtonLb = this->fields.removeButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6474/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v8, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1C2D6EC(v8, v9);
    }
    UILabel__set_text(cancelButtonLb, v8, 0);
    this->fields.state = 1;
    v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0);
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
  Il2CppObject *v33; // x26
  __int64 v34; // x0
  __int64 v35; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v37; // x29
  Il2CppObject *object; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x27
  __int64 monitor_low; // x1
  unsigned int v42; // w29
  int v43; // w28
  int v44; // w27
  __int64 v45; // x26
  __int64 v46; // x0
  __int64 v47; // x1
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w28
  unsigned int bits; // w29
  int klass_high; // w27
  __int64 v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v58; // x0
  __int64 v59; // x1
  unsigned int v60; // w29
  int v61; // w28
  int v62; // w27
  __int64 v63; // x0
  __int64 v64; // x1
  Il2CppClass **v65; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v68; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v71; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v72; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4C216C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_1C2D490(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_1C2D490(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_4C216C7 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  entity = 0;
  entities = 0;
  memset(&v73, 0, sizeof(v73));
  v71 = 0;
  v72 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v68 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1C2D6EC(v7, v8);
  v9 = (EventFortificationSvtMaster_o *)v7;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v76 = v70;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v76.fields._current;
    if ( !v76.fields._current )
      sub_1C2D6EC(v10, v11);
    if ( !v68 )
      sub_1C2D6EC(0, v11);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v68,
           &entities,
           (int32_t)v76.fields._current[1].klass,
           HIDWORD(v76.fields._current[1].klass),
           0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      v14 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1C2D6EC(v14, v13);
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
          sub_1C2D6EC(v15, v16);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1C2D6EC(0, v16);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v70,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v73 = v70;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v73,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v30 = (Il2CppObject *)sub_1C2D6DC(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor(v30, 0);
            if ( !v30 )
              sub_1C2D6EC(v31, v32);
            v30[1].klass = (Il2CppClass *)v73.fields._current;
            v33 = v30 + 1;
            v34 = sub_1C2D434(&v30[1]);
            if ( !entity )
              sub_1C2D6EC(v34, v35);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v37 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v37,
              v30,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v37,
                       (const MethodInfo_30B88BC *)Method_BasicHelper_Find_SetSvtInfo___);
            v40 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              klass = v33->klass;
              if ( !v33->klass )
                sub_1C2D6EC(0, v39);
              namespaze = (int)klass->_1.namespaze;
              bits = klass->_1.byval_arg.bits;
              klass_high = HIDWORD(current[1].klass);
              v45 = sub_1C2D6DC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v45, 0);
              *(_DWORD *)(v45 + 16) = klass_high;
              *(_DWORD *)(v45 + 20) = namespaze;
              *(_DWORD *)(v45 + 24) = bits;
              if ( !v6 )
                sub_1C2D6EC(v55, v56);
              items = v6->fields._items;
              v49 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_1C2D6EC(v55, v56);
              size = v6->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
              {
LABEL_65:
                v65 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v65[4] = (Il2CppClass *)v45;
                sub_1C2D434(v65 + 4);
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
                sub_1C2D6EC(0, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v9 )
                sub_1C2D6EC(object, monitor_low);
              v58 = EventFortificationSvtMaster__TryGetEntity(
                      v9,
                      &v71,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0);
              if ( !v58 )
              {
                if ( !v33->klass )
                  sub_1C2D6EC(v58, v59);
                v60 = v33->klass->_1.byval_arg.bits;
                v61 = HIDWORD(current[1].klass);
                v62 = (int)v40[1].klass;
                v45 = sub_1C2D6DC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v45, 0);
                *(_DWORD *)(v45 + 16) = v61;
                *(_DWORD *)(v45 + 20) = v62;
                *(_DWORD *)(v45 + 24) = v60;
                if ( !v6 )
                  sub_1C2D6EC(v63, v64);
                items = v6->fields._items;
                v49 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v6->fields._version;
                if ( !items )
                  sub_1C2D6EC(v63, v64);
                size = v6->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !v33->klass )
            sub_1C2D6EC(object, monitor_low);
          v42 = v33->klass->_1.byval_arg.bits;
          v43 = HIDWORD(current[1].klass);
          v44 = (int)object[1].klass;
          v45 = sub_1C2D6DC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v45, 0);
          *(_DWORD *)(v45 + 16) = v43;
          *(_DWORD *)(v45 + 20) = v44;
          *(_DWORD *)(v45 + 24) = v42;
          if ( !v6 )
            sub_1C2D6EC(v46, v47);
          items = v6->fields._items;
          v49 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C2D6EC(v46, v47);
          size = v6->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v45,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1C2D6EC(0, v16);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v73 = v70;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v17 )
          break;
        v19 = v73.fields._current;
        if ( !v73.fields._current )
          sub_1C2D6EC(v17, v18);
        if ( !v9 )
          sub_1C2D6EC(v17, v18);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v9,
                &v72,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v73.fields._current[1].monitor,
                0)
          && v4 )
        {
          v20 = HIDWORD(current[1].klass);
          monitor = (int)v19[1].monitor;
          v22 = (int)v19[2].monitor;
          v23 = sub_1C2D6DC(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0);
          *(_DWORD *)(v23 + 16) = v20;
          *(_DWORD *)(v23 + 20) = monitor;
          *(_DWORD *)(v23 + 24) = v22;
          if ( !v6 )
            sub_1C2D6EC(v24, v25);
          v26 = v6->fields._items;
          v27 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !v26 )
            sub_1C2D6EC(v24, v25);
          v28 = v6->fields._size;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v23,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &v26->obj.klass + v28;
            v6->fields._size = v28 + 1;
            v29[4] = (Il2CppClass *)v23;
            sub_1C2D434(v29 + 4);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v73,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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

  if ( (byte_4C216CA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C216CA = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C216CC & 1) == 0 )
  {
    sub_1C2D490(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4C216CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_1C2D434(FortificationAutomaticDialogComponent___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, 0);
  return x->fields.idx;
}


int32_t FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C216CD & 1) == 0 )
  {
    sub_1C2D490(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1C2D490(&StringLiteral_16851/*"ar200"*/);
    byte_4C216CD = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_16851/*"ar200"*/,
                                                                              0,
                                                                              0);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C2D6EC(this, result);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C216CE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C216CE = 1;
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                            v17,
                                                                            0);
  if ( !setSvtIdList )
LABEL_20:
    sub_1C2D6EC(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C2D6EC(this, info);
  return info->fields.position == detail->fields.position;
}