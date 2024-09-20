void __fastcall VoiceCondMaster___ctor(VoiceCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C072 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
    byte_4A5C072 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoiceCondMaster__VoiceCondEntity__string___ctor__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *list; // x0
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v18; // x26
  int32_t Count; // w0
  int32_t v20; // w27
  System_Collections_Generic_Dictionary_int__object__o *v21; // x24
  int32_t i; // w28
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x29
  __int64 methodPtr_low; // x9
  struct System_Byte_array *hiddenValue; // x20
  int32_t monitor; // w20
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *v30; // x8
  _QWORD *v31; // x9
  __int64 hiddenValue_low; // x10
  __int64 v33; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Collections_Generic_List_int__o *v35; // x26
  Il2CppObject *Item; // x0
  __int64 v37; // x1
  VoiceCondMaster___c_c *v38; // x8
  System_Collections_Generic_List_object__o *v39; // x26
  System_Comparison_T__o *_9__1_0; // x27
  Il2CppObject *v41; // x28
  struct VoiceCondMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  int v47; // w25
  int v48; // w20
  int klass; // w28
  bool v50; // w8
  bool v51; // w27
  _BOOL8 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  Il2CppObject *current; // x26
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  int v58; // w25
  System_String_o *ClosedMessage; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v63; // x20
  VoiceClosedMessageMaster_o *MasterData_object; // [xsp+8h] [xbp-E8h]
  ServantStatusBattleListViewItem_o *v65; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x2.16

  if ( (byte_4A5C073 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_VoiceCondEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_VoiceCondMaster___c__IsEnable_b__1_0__);
    sub_1B885B0(&VoiceCondMaster___c_TypeInfo);
    sub_1B885B0(&VoiceCondEntity_TypeInfo);
    byte_4A5C073 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtVoiceId, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  list = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
  if ( !this->fields.list )
    goto LABEL_59;
  v18 = list;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v65 = (ServantStatusBattleListViewItem_o *)overwriteCloseMessage;
    v20 = Count;
    v21 = 0LL;
    for ( i = 0; i != v20; ++i )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)this->fields.list;
      if ( !list )
        goto LABEL_59;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                     i,
                                                                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_59;
      v24 = list;
      methodPtr_low = LOBYTE(VoiceCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (VoiceCondEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceCondEntity_TypeInfo )
      {
        sub_1B88ACC(list);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v69,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
        if ( (_DWORD)v18 != 1 )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v70,
            (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          sub_1C73040();
        }
        v63 = *(_QWORD *)__cxa_begin_catch(this);
        __cxa_end_catch();
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v70,
          (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v63 )
          sub_1B88804(v63);
        goto LABEL_57;
      }
      currentCryptoKey = (System_Collections_Generic_List_object__o *)list->fields.currentCryptoKey;
      hiddenValue = list->fields.hiddenValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v72.fields.currentCryptoKey = &v71;
      *(_QWORD *)&v72.fields.fakeValue = currentCryptoKey;
      *(_QWORD *)&v73.fields.currentCryptoKey = hiddenValue;
      *(_QWORD *)&v73.fields.fakeValue = 0LL;
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__Equals_46450948(
                                                                     v72,
                                                                     v73,
                                                                     v23);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_59;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__Equals_46486356(
               v18,
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v24->fields.inited,
               0LL) )
        {
          if ( !v21 )
          {
            v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___TypeInfo);
            System_Collections_Generic_Dictionary_int__object____ctor(
              v21,
              (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity____ctor__);
            if ( !v21 )
              goto LABEL_59;
          }
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v21,
                  (int32_t)v24[1].monitor,
                  (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___ContainsKey__) )
          {
            monitor = (int32_t)v24[1].monitor;
            currentCryptoKey = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_VoiceCondEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              currentCryptoKey,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_VoiceCondEntity___ctor__);
            System_Collections_Generic_Dictionary_int__object___set_Item(
              v21,
              monitor,
              (Il2CppObject *)currentCryptoKey,
              (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___set_Item__);
          }
          list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v21,
                                                                         (int32_t)v24[1].monitor,
                                                                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
          if ( !list )
            goto LABEL_59;
          v30 = list->fields.currentCryptoKey;
          v31 = Method_System_Collections_Generic_List_VoiceCondEntity__Add__;
          ++HIDWORD(list->fields.hiddenValue);
          if ( !v30 )
            goto LABEL_59;
          hiddenValue_low = SLODWORD(list->fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v30[1].klass) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)v24,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = (__int64)v30 + 8 * hiddenValue_low;
            LODWORD(list->fields.hiddenValue) = hiddenValue_low + 1;
            *(_QWORD *)(v33 + 32) = v24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v24, v28, v29);
          }
        }
      }
    }
    if ( v21 )
    {
      list = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        MasterData_object = (VoiceClosedMessageMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)list,
                                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceClosedMessageMaster___);
        Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                 v21,
                 (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Keys__);
        v35 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor_55443684(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
        if ( v35 )
        {
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v68,
            v35,
            (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          LOBYTE(currentCryptoKey) = 0;
          v70 = v68;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v70,
                    (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v21,
                     (int32_t)v70.fields._current,
                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_VoiceCondEntity___get_Item__);
            v38 = VoiceCondMaster___c_TypeInfo;
            v39 = (System_Collections_Generic_List_object__o *)Item;
            if ( !VoiceCondMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(VoiceCondMaster___c_TypeInfo);
              v38 = VoiceCondMaster___c_TypeInfo;
            }
            _9__1_0 = (System_Comparison_T__o *)v38->static_fields->__9__1_0;
            if ( !_9__1_0 )
            {
              if ( !v38->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v38);
                v38 = VoiceCondMaster___c_TypeInfo;
              }
              v41 = (Il2CppObject *)v38->static_fields->__9;
              _9__1_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_VoiceCondEntity__TypeInfo);
              System_Comparison_object____ctor(_9__1_0, v41, Method_VoiceCondMaster___c__IsEnable_b__1_0__, 0LL);
              static_fields = VoiceCondMaster___c_TypeInfo->static_fields;
              static_fields->__9__1_0 = (struct System_Comparison_VoiceCondEntity__o *)_9__1_0;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v43, v44);
            }
            if ( !v39 )
              sub_1B8880C(Item, v37);
            System_Collections_Generic_List_object___Sort_55571192(
              v39,
              _9__1_0,
              (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_VoiceCondEntity__Sort__);
            v45 = System_Collections_Generic_List_object___get_Item(
                    v39,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_VoiceCondEntity__get_Item__);
            if ( !v45 )
              sub_1B8880C(0LL, v46);
            v47 = (int)v45[3].monitor;
            LOBYTE(currentCryptoKey) = (unsigned __int8)currentCryptoKey | (v47 == 0);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v68,
              v39,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_VoiceCondEntity__GetEnumerator__);
            v48 = 0;
            klass = 0;
            v50 = v47 != 0 || isMainResult;
            v69 = v68;
LABEL_43:
            v51 = v50;
            while ( 1 )
            {
              v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v69,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__MoveNext__);
              if ( !v52 )
                break;
              current = v69.fields._current;
              if ( !v69.fields._current )
                sub_1B8880C(v52, v53);
              if ( !VoiceCondEntity__IsEnable((VoiceCondEntity_o *)v69.fields._current, svtId, voicePrefix, v54) )
              {
                if ( SLODWORD(current[4].klass) > klass )
                {
                  klass = (int)current[4].klass;
                  *closedType = HIDWORD(current[4].klass);
                }
                v58 = (int)current[4].monitor;
                v50 = 0;
                if ( v58 > v48 )
                {
                  if ( !MasterData_object )
                    sub_1B8880C(0LL, v56);
                  ClosedMessage = VoiceClosedMessageMaster__GetClosedMessage(
                                    MasterData_object,
                                    HIDWORD(current[4].monitor),
                                    v57);
                  v65->klass = (ServantStatusBattleListViewItem_c *)ClosedMessage;
                  sub_1B88554(v65, (int32_t)ClosedMessage, v60, v61);
                  v50 = 0;
                  v48 = v58;
                }
                goto LABEL_43;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v69,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_VoiceCondEntity__Dispose__);
            if ( v51 )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                (System_Collections_Generic_List_Enumerator_int__o *)&v70,
                (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 1;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v70,
            (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_57:
          isMainResult &= (unsigned __int8)currentCryptoKey ^ 1;
          return isMainResult;
        }
      }
LABEL_59:
      sub_1B8880C(list, v17);
    }
  }
  return isMainResult;
}


void __fastcall VoiceCondMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C074 & 1) == 0 )
  {
    sub_1B885B0(&VoiceCondMaster___c_TypeInfo);
    byte_4A5C074 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(VoiceCondMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  VoiceCondMaster___c_TypeInfo->static_fields->__9 = (struct VoiceCondMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)VoiceCondMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}