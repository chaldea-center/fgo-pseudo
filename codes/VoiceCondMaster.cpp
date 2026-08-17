void VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59719B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_59719B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  int v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x26
  int32_t Count; // w0
  int32_t v21; // w27
  System_Collections_Generic_Dictionary_int__object__o *v22; // x24
  int32_t i; // w28
  const MethodInfo *v24; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x29
  struct System_String_o *currentCryptoKey; // x20
  struct System_Byte_array *hiddenValue; // x23
  int32_t monitor; // w20
  System_Collections_Generic_List_object__o *v29; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *v36; // x8
  _QWORD *v37; // x9
  __int64 hiddenValue_low; // x10
  __int64 v39; // x8
  char v40; // w26
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v42; // x26
  char v43; // w23
  __int64 v44; // x1
  Il2CppObject *Item; // x27
  VoiceCondMaster___c_c *v46; // x0
  struct VoiceCondMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x28
  Il2CppObject *v49; // x29
  struct VoiceCondMaster___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  int v59; // w19
  int v60; // w20
  int klass; // w29
  bool v62; // w8
  bool v63; // w28
  _BOOL8 v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x3
  Il2CppObject *current; // x27
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  int v70; // w19
  System_String_o *ClosedMessage; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  int v78; // w19
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-F8h]
  MissionNaviTransitionBoardItem_o *v81; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // [xsp+90h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x2.16

  if ( (byte_59719B7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
    sub_2213A60(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_2213A60(&VoiceCondMaster___c_TypeInfo);
    byte_59719B7 = 1;
  }
  *(_QWORD *)&v87.fields.currentCryptoKey = 0;
  *(_QWORD *)&v87.fields.fakeValue = 0;
  memset(&v86, 0, sizeof(v86));
  v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
  memset(&v85, 0, sizeof(v85));
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, closedType);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0);
  v87 = v16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
      *(_QWORD *)&v16.fields.fakeValue);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
  if ( !this->fields.list )
    goto LABEL_59;
  v19 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Count__);
  if ( Count < 1 )
  {
    v40 = isMainResult;
    return v40 & 1;
  }
  v81 = (MissionNaviTransitionBoardItem_o *)overwriteCloseMessage;
  v21 = Count;
  v22 = 0;
  for ( i = 0; i != v21; ++i )
  {
    list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
    if ( !list )
      goto LABEL_59;
    list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                   i,
                                                                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_VoiceCondEntity__get_Item__);
    if ( !list )
      goto LABEL_59;
    v25 = list;
    currentCryptoKey = list->fields.currentCryptoKey;
    hiddenValue = list->fields.hiddenValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v88.fields.currentCryptoKey = &v87;
    *(_QWORD *)&v88.fields.fakeValue = currentCryptoKey;
    *(_QWORD *)&v89.fields.currentCryptoKey = hiddenValue;
    *(_QWORD *)&v89.fields.fakeValue = 0;
    list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_55998220(
                                                                   v88,
                                                                   v89,
                                                                   v24);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_59;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_56033692(
             v19,
             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v25->fields.inited,
             0) )
      {
        if ( !v22 )
        {
          v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
          System_Collections_Generic_Dictionary_int__object____ctor(
            v22,
            (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
          if ( !v22 )
            goto LABEL_59;
        }
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v22,
                (int32_t)v25[1].monitor,
                (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
        {
          monitor = (int32_t)v25[1].monitor;
          v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v22,
            monitor,
            (Il2CppObject *)v29,
            (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
        }
        list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       v22,
                                                                       (int32_t)v25[1].monitor,
                                                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
        if ( !list )
          goto LABEL_59;
        v36 = list->fields.currentCryptoKey;
        v37 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
        ++HIDWORD(list->fields.hiddenValue);
        if ( !v36 )
          goto LABEL_59;
        hiddenValue_low = SLODWORD(list->fields.hiddenValue);
        if ( (unsigned int)hiddenValue_low >= LODWORD(v36[1].klass) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)list,
            (Il2CppObject *)v25,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = (__int64)v36 + 8 * hiddenValue_low;
          LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
          *(_QWORD *)(v39 + 32) = v25;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 32), (int32_t)v25, v30, v31, v32, v33, v34, v35);
        }
      }
    }
  }
  v40 = isMainResult;
  if ( v22 )
  {
    list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( list )
    {
      MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)list,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
      Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
               v22,
               (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
      v42 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_71723804(
        v42,
        (System_Collections_Generic_IEnumerable_T__o *)Keys,
        (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
      if ( v42 )
      {
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v84,
          v42,
          (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v43 = 0;
        v86 = v84;
        while ( 1 )
        {
          v40 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v86,
                  (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( (v40 & 1) == 0 )
            break;
          Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v22,
                   (int32_t)v86.fields._current,
                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          v46 = VoiceCondMaster___c_TypeInfo;
          if ( !*(&VoiceCondMaster___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo, v44);
            v46 = VoiceCondMaster___c_TypeInfo;
          }
          static_fields = v46->static_fields;
          _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
          if ( !_9__1_0 )
          {
            if ( !*(&v46->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v46, v44);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
            }
            v49 = (Il2CppObject *)static_fields->__9;
            _9__1_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_VoiceCondEntity__TypeInfo);
            System_Comparison_object____ctor(_9__1_0, v49, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0);
            v50 = VoiceCondMaster___c_TypeInfo->static_fields;
            v50->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v50->__9__1_0,
              (int32_t)_9__1_0,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
          }
          if ( !Item )
            sub_2213CDC(v46, v44);
          System_Collections_Generic_List_object___Sort_71849708(
            (System_Collections_Generic_List_object__o *)Item,
            _9__1_0,
            (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
          v57 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)Item,
                  0,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
          if ( !v57 )
            sub_2213CDC(0, v58);
          v59 = (int)v57[3].monitor;
          v43 |= v59 == 0;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v84,
            (System_Collections_Generic_List_object__o *)Item,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
          v60 = 0;
          klass = 0;
          v85 = v84;
          v62 = v59 != 0 || isMainResult;
          v84.fields._list = 0;
          *(_QWORD *)&v84.fields._index = &v85;
LABEL_41:
          v63 = v62;
          while ( 1 )
          {
            v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v85,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
            if ( !v64 )
              break;
            current = v85.fields._current;
            if ( !v85.fields._current )
              sub_2213CDC(v64, v65);
            if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v85.fields._current, svtId, voicePrefix, v66) )
            {
              if ( SLODWORD(current[4].klass) > klass )
              {
                klass = (int)current[4].klass;
                *closedType = HIDWORD(current[4].klass);
              }
              v70 = (int)current[4].monitor;
              v62 = 0;
              if ( v70 > v60 )
              {
                if ( !MasterData_object )
                  sub_2213CDC(0, v68);
                ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                  MasterData_object,
                                  HIDWORD(current[4].monitor),
                                  v69);
                v81->klass = (MissionNaviTransitionBoardItem_c *)ClosedMessage;
                sub_2213A04(v81, (int32_t)ClosedMessage, v72, v73, v74, v75, v76, v77);
                v62 = 0;
                v60 = v70;
              }
              goto LABEL_41;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v85,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
          if ( v63 )
          {
            v78 = 17;
            goto LABEL_56;
          }
        }
        v78 = 18;
LABEL_56:
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v86,
          (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v78 == 18 )
          v40 = (v43 ^ 1) & isMainResult;
        return v40 & 1;
      }
    }
LABEL_59:
    sub_2213CDC(list, v18);
  }
  return v40 & 1;
}


void VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59719B8 & 1) == 0 )
  {
    sub_2213A60(&VoiceCondMaster___c_TypeInfo);
    byte_59719B8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)VoiceCondMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}