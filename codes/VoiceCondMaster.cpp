void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F4D9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__, method);
    byte_4A4F4D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v46; // x26
  int32_t Count; // w0
  int32_t v48; // w27
  System_Collections_Generic_Dictionary_int__object__o *v49; // x24
  int32_t i; // w28
  const MethodInfo *v51; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v52; // x29
  struct System_Byte_array *hiddenValue; // x20
  struct System_String_o *currentCryptoKey; // x23
  int32_t monitor; // w20
  System_Collections_Generic_List_object__o *v56; // x23
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_String_o *v59; // x8
  _QWORD *v60; // x9
  __int64 hiddenValue_low; // x10
  __int64 v62; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v64; // x26
  char v65; // w23
  Il2CppObject *Item; // x0
  __int64 v67; // x1
  VoiceCondMaster___c_c *v68; // x8
  System_Collections_Generic_List_object__o *v69; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v71; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
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
  const MethodInfo *v91; // x3
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  CGThumbnailListItem_o *v94; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x2.16

  if ( (byte_4A4F4DA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__, closedType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__, v15);
    sub_1B863B8(&System_Comparison_VoiceCondEntity__TypeInfo, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___, v17);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__, v22);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__, v36);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v37);
    sub_1B863B8(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo, v38);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1B863B8(&Method_VoiceCondMaster___c__IsEnable_b__1_0__, v42);
    sub_1B863B8(&VoiceCondMaster___c_TypeInfo, v43);
    byte_4A4F4DA = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_56;
  v46 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v94 = (CGThumbnailListItem_o *)overwriteCloseMessage;
    v48 = Count;
    v49 = 0LL;
    for ( i = 0; i != v48; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_56;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
      if ( !list )
        goto LABEL_56;
      v52 = list;
      currentCryptoKey = list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v101.fields.currentCryptoKey = &v100;
      *(_QWORD *)&v101.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v102.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v102.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_47435392(
                                                                     v101,
                                                                     v102,
                                                                     v51);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_56;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_47470800(
               v46,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v52->fields.inited,
               0LL) )
        {
          if ( !v49 )
          {
            v49 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v49,
              (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v49 )
              goto LABEL_56;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v49,
                  (int32_t)v52[1].monitor,
                  (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v52[1].monitor;
            v56 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v56,
              (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v49,
              monitor,
              (Il2CppObject *)v56,
              (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v49,
                                                                         (int32_t)v52[1].monitor,
                                                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_56;
          v59 = list->fields.currentCryptoKey;
          v60 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v59 )
            goto LABEL_56;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v59[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v52,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = (__int64)v59 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v62 + 32) = v52;
            sub_1B8635C((CGThumbnailListItem_o *)(v62 + 32), (int32_t)v52, v57, v58);
          }
        }
      }
    }
    if ( v49 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v49,
                 (const MethodInfo_326D424 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v64 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_56488456(
          v64,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
        if ( v64 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v97,
            v64,
            (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v65 = 0;
          v99 = v97;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v99,
                    (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v49,
                     (int32_t)v99.fields._current,
                     (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
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
              _9__1_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v71, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v73, v74);
            }
            if ( !v69 )
              sub_1B86614(Item, v67);
            System_Collections_Generic_List_object___Sort_56615964(
              v69,
              _9__1_0,
              (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v75 = System_Collections_Generic_List_object___get_Item(
                    v69,
                    0,
                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v75 )
              sub_1B86614(0LL, v76);
            v77 = (int)v75[3].monitor;
            v65 |= v77 == 0;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v97,
              v69,
              (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v78 = 0;
            klass = 0;
            v80 = v77 != 0 || isMainResult;
            v98 = v97;
LABEL_41:
            v81 = v80;
            while ( 1 )
            {
              v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v98,
                      (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v82 )
                break;
              current = v98.fields._current;
              if ( !v98.fields._current )
                sub_1B86614(v82, v83);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v98.fields._current, svtId, voicePrefix, v84) )
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
                    sub_1B86614(0LL, v86);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v87);
                  v94->klass = (CGThumbnailListItem_c *)ClosedMessage;
                  sub_1B8635C(v94, (int32_t)ClosedMessage, v90, v91);
                  v80 = 0;
                  v78 = v88;
                }
                goto LABEL_41;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v98,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v81 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v99,
                (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v99,
            (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          isMainResult &= v65 ^ 1;
          return isMainResult;
        }
      }
LABEL_56:
      sub_1B86614(list, v45);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F4DB & 1) == 0 )
  {
    sub_1B863B8(&VoiceCondMaster___c_TypeInfo, v1);
    byte_4A4F4DB = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}