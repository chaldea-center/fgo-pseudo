void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD2F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_49FD2F8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
}


bool __fastcall VoiceCondMaster__IsEnable(
        VoiceCondMaster_o *this,
        int32_t *closedType,
        int32_t svtVoiceId,
        System_String_o *voiceId,
        int32_t voicePrefix,
        bool isMainResult,
        int32_t svtId,
        System_String_o **overwriteCloseMessage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentCryptoKey; // x23
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v47; // x26
  int32_t Count; // w0
  int32_t v49; // w27
  System_Collections_Generic_Dictionary_int__object__o *v50; // x24
  int32_t i; // w28
  const MethodInfo *v52; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v53; // x29
  __int64 methodPtr_low; // x9
  struct System_Byte_array *hiddenValue; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  int32_t monitor; // w20
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_String_o *v63; // x8
  _QWORD *v64; // x9
  __int64 hiddenValue_low; // x10
  __int64 v66; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_int__o *v70; // x26
  Il2CppObject *Item; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  VoiceCondMaster___c_c *v74; // x8
  System_Collections_Generic_List_object__o *v75; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v77; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x0
  int v82; // w25
  int v83; // w20
  int klass; // w28
  bool v85; // w8
  bool v86; // w27
  _BOOL8 v87; // x0
  const MethodInfo *v88; // x3
  Il2CppObject *current; // x26
  const MethodInfo *v90; // x2
  int v91; // w25
  System_String_o *ClosedMessage; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v96; // x20
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  ServantStatusBattleListViewItem_o *v98; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x2.16

  if ( (byte_49FD2F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, closedType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v16);
    sub_1B640C8(&System_Comparison_VoiceCondEntity__TypeInfo, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v23);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v37);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1B640C8(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v39);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B640C8(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v43);
    sub_1B640C8(&VoiceCondMaster___c_TypeInfo, v44);
    sub_1B640C8(&VoiceCondEntity_TypeInfo, v45);
    byte_49FD2F9 = 1;
  }
  memset(&v103, 0, sizeof(v103));
  memset(&v102, 0, sizeof(v102));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_59;
  v47 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v98 = (ServantStatusBattleListViewItem_o *)overwriteCloseMessage;
    v49 = Count;
    v50 = 0LL;
    for ( i = 0; i != v49; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_59;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_59;
      v53 = list;
      methodPtr_low = LOBYTE(VoiceCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceCondEntity_TypeInfo )
      {
        sub_1B645E4(list);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v102,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
        if ( (_DWORD)v47 != 1 )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v103,
            (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          sub_1C4EB58();
        }
        v96 = *(_QWORD *)__cxa_begin_catch(this);
        __cxa_end_catch();
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v103,
          (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v96 )
          sub_1B6431C(v96);
        goto LABEL_57;
      }
      currentCryptoKey = (System_Collections_Generic_List_object__o *)list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v105.fields.currentCryptoKey = &v104;
      *(_QWORD *)&v105.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v106.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v106.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_46172756(
                                                                     v105,
                                                                     v106,
                                                                     v52);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_59;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_46208164(
               v47,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v53->fields.inited,
               0LL) )
        {
          if ( !v50 )
          {
            v50 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                            System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo,
                                                                            v56,
                                                                            v57);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v50,
              (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v50 )
              goto LABEL_59;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v50,
                  (int32_t)v53[1].monitor,
                  (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v53[1].monitor;
            currentCryptoKey = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                              System_Collections_Generic_List_VoiceCondEntity__TypeInfo,
                                                                              v58,
                                                                              v59);
            System_Collections_Generic_List_object____ctor(
              currentCryptoKey,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v50,
              monitor,
              (Il2CppObject *)currentCryptoKey,
              (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v50,
                                                                         (int32_t)v53[1].monitor,
                                                                         (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_59;
          v63 = list->fields.currentCryptoKey;
          v64 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v63 )
            goto LABEL_59;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v63[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v53,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = (__int64)v63 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v66 + 32) = v53;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 32), (int32_t)v53, v61, v62);
          }
        }
      }
    }
    if ( v50 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v50,
                 (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v70 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v68,
                                                          v69);
        System_Collections_Generic_List_int____ctor_55113648(
          v70,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
        if ( v70 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v101,
            v70,
            (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          LOBYTE(currentCryptoKey) = 0;
          v103 = v101;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v103,
                    (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v50,
                     (int32_t)v103.fields._current,
                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v74 = VoiceCondMaster___c_TypeInfo;
            v75 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v74 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v74->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v74->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v74);
                v74 = VoiceCondMaster___c_TypeInfo;
              }
              v77 = (Il2CppObject *)v74->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_VoiceCondEntity__TypeInfo, v72, v73);
              System_Comparison_object____ctor(_9__1_0, v77, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v79, v80);
            }
            if ( !v75 )
              sub_1B64324(Item);
            System_Collections_Generic_List_object___Sort_55243320(
              v75,
              _9__1_0,
              (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v81 = System_Collections_Generic_List_object___get_Item(
                    v75,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v81 )
              sub_1B64324(0LL);
            v82 = (int)v81[3].monitor;
            LOBYTE(currentCryptoKey) = (unsigned __int8)currentCryptoKey | (v82 == 0);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v101,
              v75,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v83 = 0;
            klass = 0;
            v85 = v82 != 0 || isMainResult;
            v102 = v101;
LABEL_43:
            v86 = v85;
            while ( 1 )
            {
              v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v102,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v87 )
                break;
              current = v102.fields._current;
              if ( !v102.fields._current )
                sub_1B64324(v87);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v102.fields._current, svtId, voicePrefix, v88) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v91 = (int)current[4].monitor;
                v85 = 0;
                if ( v91 > v83 )
                {
                  if ( !MasterData_object )
                    sub_1B64324(0LL);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v90);
                  v98->klass = (ServantStatusBattleListViewItem_c *)ClosedMessage;
                  sub_1B6406C(v98, (int32_t)ClosedMessage, v93, v94);
                  v85 = 0;
                  v83 = v91;
                }
                goto LABEL_43;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v102,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v86 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v103,
                (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v103,
            (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_57:
          isMainResult &= (unsigned __int8)currentCryptoKey ^ 1;
          return isMainResult;
        }
      }
LABEL_59:
      sub_1B64324(list);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD2FA & 1) == 0 )
  {
    sub_1B640C8(&VoiceCondMaster___c_TypeInfo, v1);
    byte_49FD2FA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(VoiceCondMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall VoiceCondMaster___c___ctor(VoiceCondMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall VoiceCondMaster___c___IsEnable_b__1_0(
        VoiceCondMaster___c_o *this,
        VoiceCondEntity_o *a,
        VoiceCondEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}