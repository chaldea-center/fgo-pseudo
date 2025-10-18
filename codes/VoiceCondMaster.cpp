void VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C440A9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_4C440A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
}


bool VoiceCondMaster__IsEnable(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v16; // x26
  int32_t Count; // w0
  int32_t v18; // w27
  System_Collections_Generic_Dictionary_int__object__o *v19; // x24
  int32_t i; // w28
  const MethodInfo *v21; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v22; // x29
  struct System_Byte_array *hiddenValue; // x20
  struct System_String_o *currentCryptoKey; // x23
  int32_t monitor; // w20
  System_Collections_Generic_List_object__o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *v29; // x8
  _QWORD *v30; // x9
  __int64 hiddenValue_low; // x10
  __int64 v32; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v34; // x26
  char v35; // w23
  Il2CppObject *Item; // x0
  VoiceCondMaster___c_c *v37; // x8
  System_Collections_Generic_List_object__o *v38; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v40; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x0
  int v45; // w25
  int v46; // w20
  int klass; // w28
  bool v48; // w8
  bool v49; // w27
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x3
  Il2CppObject *current; // x26
  const MethodInfo *v53; // x2
  int v54; // w25
  System_String_o *ClosedMessage; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  CGThumbnailListItem_o *v60; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x2.16

  if ( (byte_4C440AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
    sub_1C37058(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_1C37058(&VoiceCondMaster___c_TypeInfo);
    byte_4C440AA = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
  if ( !this->fields.list )
    goto LABEL_56;
  v16 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v60 = (CGThumbnailListItem_o *)overwriteCloseMessage;
    v18 = Count;
    v19 = 0;
    for ( i = 0; i != v18; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_56;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
      if ( !list )
        goto LABEL_56;
      v22 = list;
      currentCryptoKey = list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = &v66;
      *(_QWORD *)&v67.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v68.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v68.fields.fakeValue = 0;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_48932044(
                                                                     v67,
                                                                     v68,
                                                                     v21);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_56;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_48967452(
               v16,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v22->fields.inited,
               0) )
        {
          if ( !v19 )
          {
            v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v19,
              (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v19 )
              goto LABEL_56;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v19,
                  (int32_t)v22[1].monitor,
                  (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v22[1].monitor;
            v26 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v26,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v19,
              monitor,
              (Il2CppObject *)v26,
              (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v19,
                                                                         (int32_t)v22[1].monitor,
                                                                         (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_56;
          v29 = list->fields.currentCryptoKey;
          v30 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v29 )
            goto LABEL_56;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v29[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v22,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = (__int64)v29 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v32 + 32) = v22;
            sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v22, v27, v28);
          }
        }
      }
    }
    if ( v19 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v19,
                 (const MethodInfo_33FA244 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v34 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_58218708(
          v34,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
        if ( v34 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v63,
            v34,
            (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v35 = 0;
          v65 = v63;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v65,
                    (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v19,
                     (int32_t)v65.fields._current,
                     (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v37 = VoiceCondMaster___c_TypeInfo;
            v38 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v37 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v37->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v37->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v37);
                v37 = VoiceCondMaster___c_TypeInfo;
              }
              v40 = (Il2CppObject *)v37->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v40, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v42, v43);
            }
            if ( !v38 )
              sub_1C372B4(Item);
            System_Collections_Generic_List_object___Sort_58346216(
              v38,
              _9__1_0,
              (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v44 = System_Collections_Generic_List_object___get_Item(
                    v38,
                    0,
                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v44 )
              sub_1C372B4(0);
            v45 = (int)v44[3].monitor;
            v35 |= v45 == 0;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v63,
              v38,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v46 = 0;
            klass = 0;
            v48 = v45 != 0 || isMainResult;
            v64 = v63;
LABEL_41:
            v49 = v48;
            while ( 1 )
            {
              v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v64,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v50 )
                break;
              current = v64.fields._current;
              if ( !v64.fields._current )
                sub_1C372B4(v50);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v64.fields._current, svtId, voicePrefix, v51) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v54 = (int)current[4].monitor;
                v48 = 0;
                if ( v54 > v46 )
                {
                  if ( !MasterData_object )
                    sub_1C372B4(0);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v53);
                  v60->klass = (CGThumbnailListItem_c *)ClosedMessage;
                  sub_1C36FFC(v60, (int32_t)ClosedMessage, v56, v57);
                  v48 = 0;
                  v46 = v54;
                }
                goto LABEL_41;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v64,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v49 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v65,
                (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v65,
            (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          isMainResult &= v35 ^ 1;
          return isMainResult;
        }
      }
LABEL_56:
      sub_1C372B4(list);
    }
  }
  return isMainResult;
}


void VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C440AB & 1) == 0 )
  {
    sub_1C37058(&VoiceCondMaster___c_TypeInfo);
    byte_4C440AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void VoiceCondMaster___c___ctor(VoiceCondMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t VoiceCondMaster___c___IsEnable_b__1_0(
        VoiceCondMaster___c_o *this,
        VoiceCondEntity_o *a,
        VoiceCondEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}