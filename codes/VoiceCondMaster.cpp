void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA12 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_49FFA12 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  __int64 v47; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v48; // x26
  int32_t Count; // w0
  int32_t v50; // w27
  System_Collections_Generic_Dictionary_int__object__o *v51; // x24
  int32_t i; // w28
  const MethodInfo *v53; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v54; // x29
  __int64 methodPtr_low; // x9
  struct System_Byte_array *hiddenValue; // x20
  int32_t monitor; // w20
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_String_o *v60; // x8
  _QWORD *v61; // x9
  __int64 hiddenValue_low; // x10
  __int64 v63; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v65; // x26
  Il2CppObject *Item; // x0
  __int64 v67; // x1
  VoiceCondMaster___c_c *v68; // x8
  System_Collections_Generic_List_object__o *v69; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v71; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  int v77; // w25
  int v78; // w20
  int klass; // w28
  bool v80; // w8
  bool v81; // w27
  _BOOL8 v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x3
  Il2CppObject *current; // x26
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  int v88; // w25
  System_String_o *ClosedMessage; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v93; // x20
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  ServantStatusBattleListViewItem_o *v95; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x2.16

  if ( (byte_49FFA13 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, closedType);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v16);
    sub_1B64A00(&System_Comparison_VoiceCondEntity__TypeInfo, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v18);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v23);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__GetEnumerator__, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v34);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v35);
    sub_1B64A00(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v36);
    sub_1B64A00(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v37);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v38);
    sub_1B64A00(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v39);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B64A00(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v43);
    sub_1B64A00(&VoiceCondMaster___c_TypeInfo, v44);
    sub_1B64A00(&VoiceCondEntity_TypeInfo, v45);
    byte_49FFA13 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  memset(&v99, 0, sizeof(v99));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_59;
  v48 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v95 = (ServantStatusBattleListViewItem_o *)overwriteCloseMessage;
    v50 = Count;
    v51 = 0LL;
    for ( i = 0; i != v50; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_59;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_59;
      v54 = list;
      methodPtr_low = LOBYTE(VoiceCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceCondEntity_TypeInfo )
      {
        sub_1B64F1C(list);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v99,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
        if ( (_DWORD)v48 != 1 )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v100,
            (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          sub_1C4F490();
        }
        v93 = *(_QWORD *)__cxa_begin_catch(this);
        __cxa_end_catch();
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v100,
          (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v93 )
          sub_1B64C54(v93);
        goto LABEL_57;
      }
      currentCryptoKey = (System_Collections_Generic_List_object__o *)list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v102.fields.currentCryptoKey = &v101;
      *(_QWORD *)&v102.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v103.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v103.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_46183240(
                                                                     v102,
                                                                     v103,
                                                                     v53);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_59;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_46218648(
               v48,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v54->fields.inited,
               0LL) )
        {
          if ( !v51 )
          {
            v51 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v51,
              (const MethodInfo_31258A4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v51 )
              goto LABEL_59;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v51,
                  (int32_t)v54[1].monitor,
                  (const MethodInfo_312646C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v54[1].monitor;
            currentCryptoKey = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              currentCryptoKey,
              (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v51,
              monitor,
              (Il2CppObject *)currentCryptoKey,
              (const MethodInfo_3126264 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v51,
                                                                         (int32_t)v54[1].monitor,
                                                                         (const MethodInfo_31261D8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_59;
          v60 = list->fields.currentCryptoKey;
          v61 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v60 )
            goto LABEL_59;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v60[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v54,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = (__int64)v60 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v63 + 32) = v54;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v63 + 32), (int32_t)v54, v58, v59);
          }
        }
      }
    }
    if ( v51 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v51,
                 (const MethodInfo_3125F38 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v65 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_55124132(
          v65,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
        if ( v65 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v98,
            v65,
            (const MethodInfo_3493344 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          LOBYTE(currentCryptoKey) = 0;
          v100 = v98;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v100,
                    (const MethodInfo_32288D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v51,
                     (int32_t)v100.fields._current,
                     (const MethodInfo_31261D8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v68 = VoiceCondMaster___c_TypeInfo;
            v69 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v68 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v68->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v68->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v68);
                v68 = VoiceCondMaster___c_TypeInfo;
              }
              v71 = (Il2CppObject *)v68->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v71, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v73, v74);
            }
            if ( !v69 )
              sub_1B64C5C(Item, v67);
            System_Collections_Generic_List_object___Sort_55253804(
              v69,
              _9__1_0,
              (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v75 = System_Collections_Generic_List_object___get_Item(
                    v69,
                    0,
                    (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v75 )
              sub_1B64C5C(0LL, v76);
            v77 = (int)v75[3].monitor;
            LOBYTE(currentCryptoKey) = (unsigned __int8)currentCryptoKey | (v77 == 0);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v98,
              v69,
              (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v78 = 0;
            klass = 0;
            v80 = v77 != 0 || isMainResult;
            v99 = v98;
LABEL_43:
            v81 = v80;
            while ( 1 )
            {
              v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v99,
                      (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v82 )
                break;
              current = v99.fields._current;
              if ( !v99.fields._current )
                sub_1B64C5C(v82, v83);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v99.fields._current, svtId, voicePrefix, v84) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v88 = (int)current[4].monitor;
                v80 = 0;
                if ( v88 > v78 )
                {
                  if ( !MasterData_object )
                    sub_1B64C5C(0LL, v86);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v87);
                  v95->klass = (ServantStatusBattleListViewItem_c *)ClosedMessage;
                  sub_1B649A4(v95, (int32_t)ClosedMessage, v90, v91);
                  v80 = 0;
                  v78 = v88;
                }
                goto LABEL_43;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v99,
              (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v81 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v100,
                (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v100,
            (const MethodInfo_32288D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_57:
          isMainResult &= (unsigned __int8)currentCryptoKey ^ 1;
          return isMainResult;
        }
      }
LABEL_59:
      sub_1B64C5C(list, v47);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FFA14 & 1) == 0 )
  {
    sub_1B64A00(&VoiceCondMaster___c_TypeInfo, v1);
    byte_49FFA14 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64C5C(this, a);
  return b->fields.priority - a->fields.priority;
}