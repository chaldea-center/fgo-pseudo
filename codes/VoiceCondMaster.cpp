void VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB73DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_4CB73DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x26
  int32_t Count; // w0
  int32_t v19; // w27
  System_Collections_Generic_Dictionary_int__object__o *v20; // x24
  int32_t i; // w28
  const MethodInfo *v22; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v23; // x29
  struct System_Byte_array *hiddenValue; // x20
  struct System_String_o *currentCryptoKey; // x23
  int32_t monitor; // w20
  System_Collections_Generic_List_object__o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_String_o *v30; // x8
  _QWORD *v31; // x9
  __int64 hiddenValue_low; // x10
  __int64 v33; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v35; // x26
  char v36; // w23
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  VoiceCondMaster___c_c *v39; // x8
  System_Collections_Generic_List_object__o *v40; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v42; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  int v48; // w25
  int v49; // w20
  int klass; // w28
  bool v51; // w8
  bool v52; // w27
  _BOOL8 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  Il2CppObject *current; // x26
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  int v59; // w25
  System_String_o *ClosedMessage; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  CGThumbnailListItem_o *v65; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x2.16

  if ( (byte_4CB73E0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_1C6BA08(&VoiceCondMaster___c_TypeInfo);
    byte_4CB73E0 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
  if ( !this->fields.list )
    goto LABEL_56;
  v17 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v65 = (CGThumbnailListItem_o *)overwriteCloseMessage;
    v19 = Count;
    v20 = 0;
    for ( i = 0; i != v19; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_56;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
      if ( !list )
        goto LABEL_56;
      v23 = list;
      currentCryptoKey = list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v72.fields.currentCryptoKey = &v71;
      *(_QWORD *)&v72.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v73.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v73.fields.fakeValue = 0;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_49234168(
                                                                     v72,
                                                                     v73,
                                                                     v22);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_56;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_49269576(
               v17,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v23->fields.inited,
               0) )
        {
          if ( !v20 )
          {
            v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v20,
              (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v20 )
              goto LABEL_56;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v20,
                  (int32_t)v23[1].monitor,
                  (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v23[1].monitor;
            v27 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v27,
              (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v20,
              monitor,
              (Il2CppObject *)v27,
              (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v20,
                                                                         (int32_t)v23[1].monitor,
                                                                         (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_56;
          v30 = list->fields.currentCryptoKey;
          v31 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v30 )
            goto LABEL_56;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v30[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v23,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = (__int64)v30 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v33 + 32) = v23;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v23, v28, v29);
          }
        }
      }
    }
    if ( v20 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v20,
                 (const MethodInfo_34521B0 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v35 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_58602020(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
        if ( v35 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v68,
            v35,
            (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v36 = 0;
          v70 = v68;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v70,
                    (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v20,
                     (int32_t)v70.fields._current,
                     (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v39 = VoiceCondMaster___c_TypeInfo;
            v40 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v39 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v39->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v39->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v39);
                v39 = VoiceCondMaster___c_TypeInfo;
              }
              v42 = (Il2CppObject *)v39->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v42, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v44, v45);
            }
            if ( !v40 )
              sub_1C6BC60(Item, v38);
            System_Collections_Generic_List_object___Sort_58729528(
              v40,
              _9__1_0,
              (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v46 = System_Collections_Generic_List_object___get_Item(
                    v40,
                    0,
                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v46 )
              sub_1C6BC60(0, v47);
            v48 = (int)v46[3].monitor;
            v36 |= v48 == 0;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v68,
              v40,
              (const MethodInfo_380146C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v49 = 0;
            klass = 0;
            v51 = v48 != 0 || isMainResult;
            v69 = v68;
LABEL_41:
            v52 = v51;
            while ( 1 )
            {
              v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v69,
                      (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v53 )
                break;
              current = v69.fields._current;
              if ( !v69.fields._current )
                sub_1C6BC60(v53, v54);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v69.fields._current, svtId, voicePrefix, v55) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v59 = (int)current[4].monitor;
                v51 = 0;
                if ( v59 > v49 )
                {
                  if ( !MasterData_object )
                    sub_1C6BC60(0, v57);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v58);
                  v65->klass = (CGThumbnailListItem_c *)ClosedMessage;
                  sub_1C6B9AC(v65, (int32_t)ClosedMessage, v61, v62);
                  v51 = 0;
                  v49 = v59;
                }
                goto LABEL_41;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v69,
              (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v52 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v70,
                (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v70,
            (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          isMainResult &= v36 ^ 1;
          return isMainResult;
        }
      }
LABEL_56:
      sub_1C6BC60(list, v16);
    }
  }
  return isMainResult;
}


void VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB73E1 & 1) == 0 )
  {
    sub_1C6BA08(&VoiceCondMaster___c_TypeInfo);
    byte_4CB73E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}