void FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C31D9A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31D9A = 1;
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
  void **p_monitor; // x19
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
  _BOOL8 v29; // x0
  Il2CppClass *v30; // d8
  Il2CppObject *v31; // x22
  __int64 v32; // x0
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x23
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  Il2CppObject *v42; // x27
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  Il2CppObject *v49; // x26
  System_Func_object__bool__o *v50; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_TSource__o *v52; // x0
  FortificationAutomaticDialogComponent___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v56; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v57; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x27
  Il2CppClass *v61; // x19
  void *v62; // x29
  System_Collections_Generic_HashSet_int__o *v63; // x28
  __int64 v64; // x0
  _BOOL8 v65; // x0
  Il2CppObject v66; // q0
  Il2CppClass *name; // d8
  int64_t v68; // x27
  Il2CppObject *v69; // x26
  __int64 v70; // x0
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  NetworkManager_ResultCallbackFunc_o *v81; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v83; // x21
  const MethodInfo *v84; // x3
  FortificationAutomaticDialogComponent_o *v85; // [xsp+8h] [xbp-E8h]
  Il2CppObject *object; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4C31D95 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EnterUserSvtInfo_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_1C32C20(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_1C32C20(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_1C32C20(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_1C32C20(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_1C32C20(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4C31D95 = 1;
  }
  entities = 0;
  memset(&v90, 0, sizeof(v90));
  v5 = (Il2CppObject *)sub_1C32E6C(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_93;
  object = v5;
  v5[1].monitor = this;
  p_monitor = &v5[1].monitor;
  sub_1C32BC4(p_monitor, this);
  *((_BYTE *)p_monitor + 8) = isSet;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(p_monitor - 1) = (void *)0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0) )
    return;
  if ( LOBYTE(object[2].klass) )
  {
    v10 = (Il2CppObject *)sub_1C32E6C(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor(v10, 0);
    if ( v10 )
    {
      v10[1].monitor = object;
      sub_1C32BC4(&v10[1].monitor, object);
      v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v11,
        (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v11;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1C32BC4(&this->fields.setSvtIdList, v11);
      v85 = this;
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
        _9__18_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v16,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1C32BC4(&static_fields->__9__18_1, _9__18_1);
      }
      v18 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      monitor = (Il2CppObject *)v10[1].monitor;
      v20 = v18;
      v21 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v21,
        monitor,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0);
      v22 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v20,
              (System_Func_TSource__TKey__o *)v21,
              (const MethodInfo_311C31C *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0);
        v24 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
        v10[1].klass = (Il2CppClass *)v24;
        Master_object = (EventFortificationMaster_o *)sub_1C32BC4(&v10[1], v24);
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
            v28 = sub_1C83438(
                    v22,
                    System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                    0);
          }
          v37 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v28)(
                  v22,
                  *(_QWORD *)(v28 + 8));
          if ( !v37 )
            sub_1C32E7C(0);
          while ( 1 )
          {
            v38 = *(_QWORD *)v37;
            v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
            {
              v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v39;
                v40 += 4;
                if ( !v39 )
                  goto LABEL_41;
              }
              v41 = v38 + 16LL * *v40 + 312;
            }
            else
            {
LABEL_41:
              v41 = sub_1C83438(v37, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
              break;
            v42 = (Il2CppObject *)sub_1C32E6C(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor(v42, 0);
            if ( !v42 )
              sub_1C32E7C(v43);
            v42[1].monitor = v10;
            sub_1C32BC4(&v42[1].monitor, v10);
            v44 = *(_QWORD *)v37;
            v45 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
            {
              v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v46
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v45;
                v46 += 4;
                if ( !v45 )
                  goto LABEL_49;
              }
              v47 = v44 + 16LL * *v46 + 312;
            }
            else
            {
LABEL_49:
              v47 = sub_1C83438(
                      v37,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0);
            }
            v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
            v42[1].klass = (Il2CppClass *)v48;
            v49 = v42 + 1;
            sub_1C32BC4(&v42[1], v48);
            v50 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v50,
              v42,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0);
            v51 = System_Linq_Enumerable__Where_object_(
                    OrganizationList,
                    (System_Func_TSource__bool__o *)v50,
                    (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v52 = System_Linq_Enumerable__ToList_object_(
                    v51,
                    (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v53 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v53 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v53->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v53->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v53);
                v53 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v56 = (Il2CppObject *)v53->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v56,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0);
              v57 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v57->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1C32BC4(&v57->__9__18_4, _9__18_4);
            }
            v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                         v54,
                                                                         (System_Func_TSource__TKey__o *)_9__18_4,
                                                                         (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v59 = System_Linq_Enumerable__FirstOrDefault_object_(
                    v58,
                    (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v60 = v59;
            if ( v59 )
            {
              v61 = v59[5].klass;
              v62 = v59[5].monitor;
              v63 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v92.fields.currentCryptoKey = v61;
              *(_QWORD *)&v92.fields.fakeValue = v62;
              v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v92, 0);
              if ( !v63 )
                sub_1C32E7C(v64);
              v65 = System_Collections_Generic_HashSet_int___Add(
                      v63,
                      v64,
                      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
              if ( !v49->klass )
                sub_1C32E7C(v65);
              v66 = v60[2];
              name = (Il2CppClass *)v49->klass->_1.name;
              *(Il2CppObject *)&v89.fields.currentCryptoKey = v60[1];
              *(Il2CppObject *)&v89.fields.fakeValue = v66;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v88 = v89;
              v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v88, 0);
              v69 = (Il2CppObject *)sub_1C32E6C(EnterUserSvtInfo_TypeInfo);
              System_Object___ctor(v69, 0);
              v69[1].klass = name;
              v69[1].monitor = (void *)v68;
              if ( !v8 )
                sub_1C32E7C(v70);
              items = v8->fields._items;
              v72 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v8->fields._version;
              if ( !items )
                sub_1C32E7C(v70);
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  v69,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v74[4] = (Il2CppClass *)v69;
                sub_1C32BC4(v74 + 4, v69);
              }
            }
          }
          v75 = *(_QWORD *)v37;
          v76 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
          {
            v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
            {
              --v76;
              v77 += 4;
              if ( !v76 )
                goto LABEL_73;
            }
            v78 = v75 + 16LL * *v77 + 312;
          }
          else
          {
LABEL_73:
            v78 = sub_1C83438(v37, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v78)(v37, *(_QWORD *)(v78 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_36498B4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            this = v85;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1C32E7C(Master_object);
  }
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v9);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v90.fields._list = *(_OWORD *)&v89.fields.currentCryptoKey;
  v90.fields._current = (Il2CppObject *)v89.fields.fakeValue;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v29 )
      break;
    if ( !v90.fields._current )
      sub_1C32E7C(v29);
    v30 = v90.fields._current[1].klass;
    v31 = (Il2CppObject *)sub_1C32E6C(EnterUserSvtInfo_TypeInfo);
    System_Object___ctor(v31, 0);
    v31[1].klass = v30;
    v31[1].monitor = 0;
    if ( !v8 )
      sub_1C32E7C(v32);
    v33 = v8->fields._items;
    v34 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v8->fields._version;
    if ( !v33 )
      sub_1C32E7C(v32);
    v35 = v8->fields._size;
    if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v31,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &v33->obj.klass + v35;
      v8->fields._size = v35 + 1;
      v36[4] = (Il2CppClass *)v31;
      sub_1C32BC4(v36 + 4, v31);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v79 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v79 = (_QWORD *)sub_1C32C38(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v80 = (System_Reflection_MethodBase_o *)sub_1C32C04(v79, v79[4]);
  OverwriteAssetSoundName__PlaySystemSe(v80, 8, 0, 0);
  v81 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v81,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v81,
                                                  (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v8 )
    goto LABEL_93;
  eventId = this->fields.eventId;
  v83 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v83 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v83, eventId, (EnterUserSvtInfo_array *)Master_object, v84);
}


void FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C31D98 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_4C31D98 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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

  if ( (byte_4C31D97 & 1) == 0 )
  {
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_4C31D97 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v13; // x20

  if ( (byte_4C31D94 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6478/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_6479/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6480/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_1C32C20(&StringLiteral_6481/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_4C31D94 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C32BC4(&this->fields.onDecide, onDecide);
    this->fields.closeCallBack = closeCallBack;
    sub_1C32BC4(&this->fields.closeCallBack, closeCallBack);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6481/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v8, 0);
    descriptionLb = this->fields.descriptionLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6478/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v8, 0);
    setButtonLb = this->fields.setButtonLb;
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6480/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v8, 0),
          removeButtonLb = this->fields.removeButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6479/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v8, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1C32E7C(v8);
    }
    UILabel__set_text(cancelButtonLb, v8, 0);
    this->fields.state = 1;
    v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
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
  EventFortificationSvtMaster_o *v8; // x24
  _BOOL8 v9; // x0
  Il2CppObject *current; // x22
  NetworkManager_c *v11; // x0
  _BOOL8 v12; // x0
  _BOOL8 v13; // x0
  Il2CppObject *v14; // x26
  int v15; // w27
  int monitor; // w28
  int v17; // w29
  __int64 v18; // x26
  __int64 v19; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  Il2CppObject *v24; // x27
  __int64 v25; // x0
  Il2CppObject *v26; // x1
  Il2CppObject *v27; // x26
  __int64 v28; // x0
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v30; // x29
  int32_t *object; // x0
  int32_t *v32; // x27
  int32_t v33; // w1
  unsigned int v34; // w29
  int v35; // w28
  int32_t v36; // w27
  __int64 v37; // x26
  __int64 v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w28
  unsigned int bits; // w29
  int klass_high; // w27
  __int64 v46; // x0
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v48; // x0
  unsigned int v49; // w29
  int v50; // w28
  int32_t v51; // w27
  __int64 v52; // x0
  Il2CppClass **v53; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v56; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v59; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v60; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4C31D96 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_1C32C20(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_1C32C20(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_4C31D96 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  entity = 0;
  entities = 0;
  memset(&v61, 0, sizeof(v61));
  v59 = 0;
  v60 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v56 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1C32E7C(v7);
  v8 = (EventFortificationSvtMaster_o *)v7;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v64 = v58;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v64,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_1C32E7C(v9);
    if ( !v56 )
      sub_1C32E7C(0);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v56,
           &entities,
           (int32_t)v64.fields._current[1].klass,
           HIDWORD(v64.fields._current[1].klass),
           0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v11 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v11 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1C32E7C(v11);
      v12 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v11->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0);
      if ( v12 )
      {
        if ( !entity )
          sub_1C32E7C(v12);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1C32E7C(0);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v58,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v61 = v58;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v61,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v24 = (Il2CppObject *)sub_1C32E6C(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor(v24, 0);
            if ( !v24 )
              sub_1C32E7C(v25);
            v26 = v61.fields._current;
            v24[1].klass = (Il2CppClass *)v61.fields._current;
            v27 = v24 + 1;
            v28 = sub_1C32BC4(&v24[1], v26);
            if ( !entity )
              sub_1C32E7C(v28);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v30 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v30,
              v24,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0);
            object = (int32_t *)BasicHelper__Find_object_(
                                  setSvtInfos,
                                  (System_Func_T__bool__o *)v30,
                                  (const MethodInfo_30C735C *)Method_BasicHelper_Find_SetSvtInfo___);
            v32 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              klass = v27->klass;
              if ( !v27->klass )
                sub_1C32E7C(0);
              namespaze = (int)klass->_1.namespaze;
              bits = klass->_1.byval_arg.bits;
              klass_high = HIDWORD(current[1].klass);
              v37 = sub_1C32E6C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v37, 0);
              *(_DWORD *)(v37 + 16) = klass_high;
              *(_DWORD *)(v37 + 20) = namespaze;
              *(_DWORD *)(v37 + 24) = bits;
              if ( !v6 )
                sub_1C32E7C(v46);
              items = v6->fields._items;
              v40 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_1C32E7C(v46);
              size = v6->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
              {
LABEL_65:
                v53 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v53[4] = (Il2CppClass *)v37;
                sub_1C32BC4(v53 + 4, v37);
                continue;
              }
              goto LABEL_66;
            }
            v33 = object[6];
            if ( !v33 && v4 )
              break;
            if ( v33 && !object[5] && v4 )
            {
              setSvtIdList = this->fields.setSvtIdList;
              if ( !setSvtIdList )
                sub_1C32E7C(0);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                v33,
                (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( v33 && !v4 )
            {
              if ( !v8 )
                sub_1C32E7C(object);
              v48 = EventFortificationSvtMaster__TryGetEntity(
                      v8,
                      &v59,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      object[4],
                      0);
              if ( !v48 )
              {
                if ( !v27->klass )
                  sub_1C32E7C(v48);
                v49 = v27->klass->_1.byval_arg.bits;
                v50 = HIDWORD(current[1].klass);
                v51 = v32[4];
                v37 = sub_1C32E6C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v37, 0);
                *(_DWORD *)(v37 + 16) = v50;
                *(_DWORD *)(v37 + 20) = v51;
                *(_DWORD *)(v37 + 24) = v49;
                if ( !v6 )
                  sub_1C32E7C(v52);
                items = v6->fields._items;
                v40 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v6->fields._version;
                if ( !items )
                  sub_1C32E7C(v52);
                size = v6->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !v27->klass )
            sub_1C32E7C(object);
          v34 = v27->klass->_1.byval_arg.bits;
          v35 = HIDWORD(current[1].klass);
          v36 = object[4];
          v37 = sub_1C32E6C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v37, 0);
          *(_DWORD *)(v37 + 16) = v35;
          *(_DWORD *)(v37 + 20) = v36;
          *(_DWORD *)(v37 + 24) = v34;
          if ( !v6 )
            sub_1C32E7C(v38);
          items = v6->fields._items;
          v40 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C32E7C(v38);
          size = v6->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v37,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1C32E7C(0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v58,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v61 = v58;
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v61,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v13 )
          break;
        v14 = v61.fields._current;
        if ( !v61.fields._current )
          sub_1C32E7C(v13);
        if ( !v8 )
          sub_1C32E7C(v13);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v8,
                &v60,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v61.fields._current[1].monitor,
                0)
          && v4 )
        {
          v15 = HIDWORD(current[1].klass);
          monitor = (int)v14[1].monitor;
          v17 = (int)v14[2].monitor;
          v18 = sub_1C32E6C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0);
          *(_DWORD *)(v18 + 16) = v15;
          *(_DWORD *)(v18 + 20) = monitor;
          *(_DWORD *)(v18 + 24) = v17;
          if ( !v6 )
            sub_1C32E7C(v19);
          v20 = v6->fields._items;
          v21 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !v20 )
            sub_1C32E7C(v19);
          v22 = v6->fields._size;
          if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v18,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + v22;
            v6->fields._size = v22 + 1;
            v23[4] = (Il2CppClass *)v18;
            sub_1C32BC4(v23 + 4, v18);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v61,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31D99 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31D99 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
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

  if ( (byte_4C31D9B & 1) == 0 )
  {
    sub_1C32C20(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4C31D9B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_1C32BC4(FortificationAutomaticDialogComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C32E7C(this);
  return x->fields.idx;
}


int32_t FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_4C31D9C & 1) == 0 )
  {
    sub_1C32C20(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1C32C20(&StringLiteral_16854/*"ar200"*/);
    byte_4C31D9C = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_16854/*"ar200"*/,
                                                                              0,
                                                                              0);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C32E7C(this);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, v8);
}


int32_t FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1C32E7C(this);
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
  if ( (byte_4C31D9D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C31D9D = 1;
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
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                            v17,
                                                                            0);
  if ( !setSvtIdList )
LABEL_20:
    sub_1C32E7C(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C32E7C(this);
  return info->fields.position == detail->fields.position;
}