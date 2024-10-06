void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A704AC & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v4);
    byte_4A704AC = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_31D8404 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    368,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAppendPassiveSkillMaster__CreateTempKey(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  v8 = svtId;
  if ( (byte_4A704AD & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1545/*":"*/, *(_QWORD *)&svtId);
    byte_4A704AD = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61798352(v4, (System_String_o *)StringLiteral_1545/*":"*/, v5, 0LL);
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        int64_t userId,
        int64_t userSvtId,
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
  Il2CppObject *Master_object; // x24
  UserServantAppendPassiveSkillLvMaster_o *MaxLevelInfo; // x0
  __int64 v32; // x1
  UserServantAppendPassiveSkillLvMaster_o *v33; // x29
  const MethodInfo *v34; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v37; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  UserServantAppendPassiveSkillLvMaster_o *v40; // x26
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Boolean_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Int32_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v57; // x29
  __int64 v58; // x19
  ServantAppendPassiveSkillEntity_o *v59; // x27
  System_Int32_array *v60; // x8
  int v61; // w28
  const MethodInfo *v62; // x4
  System_Boolean_array *v63; // x8
  System_Int32_array *v64; // x8
  System_String_array *v65; // x8
  System_String_array *v66; // x9
  System_String_o **v67; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v69; // x0
  int32_t v70; // w3
  System_Boolean_array *v71; // x8
  System_String_array *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_array *v75; // x8
  System_String_array *v76; // x8
  ServantStatusBattleListViewItem_o *v77; // x28
  System_String_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_array *v81; // x20
  System_String_o *v82; // x28
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_Int32_array *v87; // x8
  System_String_array *v88; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v93; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A704B1 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, idList);
    sub_1B90010(&bool___TypeInfo, v15);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v17);
    sub_1B90010(&DataManager_TypeInfo, v18);
    sub_1B90010(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v19);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v20);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v21);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v22);
    sub_1B90010(&int___TypeInfo, v23);
    sub_1B90010(&LocalizationManager_TypeInfo, v24);
    sub_1B90010(&string___TypeInfo, v25);
    sub_1B90010(&StringLiteral_43/*"\n"*/, v26);
    sub_1B90010(&StringLiteral_3802/*"COND_TYPE_TITLE"*/, v27);
    sub_1B90010(&StringLiteral_3790/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v28);
    sub_1B90010(&StringLiteral_1/*""*/, v29);
    byte_4A704B1 = 1;
  }
  v93 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v33 = MaxLevelInfo;
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                              (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                              &entity,
                                                              userId,
                                                              svtId,
                                                              0LL);
  monitor = 0LL;
  klass = 0LL;
  if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
                                                                  v33,
                                                                  userId,
                                                                  svtId,
                                                                  0LL);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v37 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_31737C0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v37,
                 (const MethodInfo_3173910 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                  &v93,
                                                                  userSvtId,
                                                                  (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
      {
        if ( !v93 )
          goto LABEL_64;
        klass = (System_Int32_array *)v93[5].klass;
        monitor = v93[5].monitor;
      }
      else
      {
        monitor = 0LL;
        klass = 0LL;
      }
    }
  }
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                              this,
                                                              svtId,
                                                              v34);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1B9026C(MaxLevelInfo, v32);
  v40 = MaxLevelInfo;
  v41 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v41;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)idList, (int32_t)v41, v42, v43);
  v44 = (System_String_array *)sub_1B900B8(string___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *titleList = v44;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v44, v45, v46);
  v47 = (System_String_array *)sub_1B900B8(string___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *explanationList = v47;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v47, v48, v49);
  v50 = (System_Boolean_array *)sub_1B900B8(bool___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *releaseStateList = v50;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v50, v51, v52);
  v53 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *lvList = v53;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v53, v54, v55);
  MasterName_k__BackingField = v40->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v57 = 0LL;
    v58 = 32LL;
    while ( v57 < (unsigned int)MasterName_k__BackingField )
    {
      v59 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v40->klass + v58);
      if ( v59 )
      {
        v60 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v57 >= v60->max_length )
          break;
        v60->m_Items[v57 + 1] = v59->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v59->fields.num,
                                                                          (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v61 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v61 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v59->fields.num,
                                                                          (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v71 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v57 >= v71->max_length )
            break;
          v71->m_Items[v57 + 4] = 0;
          v72 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3802/*"COND_TYPE_TITLE"*/,
                                                                      0LL);
          if ( !v72 )
            goto LABEL_64;
          if ( v57 >= v72->max_length )
            break;
          *(Il2CppClass **)((char *)&v72->obj.klass + v58) = (Il2CppClass *)MaxLevelInfo;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v72 + v58), (int32_t)MaxLevelInfo, v73, v74);
          v75 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v57 >= v75->max_length )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v75->obj.klass + v58),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v76 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v57 >= v76->max_length )
              break;
            v77 = (ServantStatusBattleListViewItem_o *)((char *)v76 + v58);
            v78 = System_String__Concat_61787092(
                    *(System_String_o **)((char *)&v76->obj.klass + v58),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v77->klass = (ServantStatusBattleListViewItem_c *)v78;
            sub_1B8FFB4(v77, (int32_t)v78, v79, v80);
          }
          v81 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v57 >= v81->max_length )
            break;
          v82 = *(System_String_o **)((char *)&v81->obj.klass + v58);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v84 = System_String__Concat_61787092(v82, v83, 0LL);
          *(Il2CppClass **)((char *)&v81->obj.klass + v58) = (Il2CppClass *)v84;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v81 + v58), (int32_t)v84, v85, v86);
          v87 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v57 >= v87->max_length )
            break;
          v87->m_Items[v57 + 1] = 0;
          v88 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v57 >= v88->max_length )
            break;
          v67 = (System_String_o **)((char *)v88 + v58);
          p_explanation = &explanation;
          v69 = v59;
          v70 = 0;
        }
        else
        {
          v63 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v57 >= v63->max_length )
            break;
          v63->m_Items[v57 + 4] = 1;
          v64 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v57 >= v64->max_length )
            break;
          v64->m_Items[v57 + 1] = v61;
          v65 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v66 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v57 >= v65->max_length || v57 >= v66->max_length )
            break;
          v67 = (System_String_o **)((char *)v65 + v58);
          p_explanation = (System_String_o **)((char *)v66 + v58);
          v69 = v59;
          v70 = v61;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v69, v67, p_explanation, v70, v62);
      }
      LODWORD(MasterName_k__BackingField) = v40->fields._MasterName_k__BackingField;
      ++v57;
      v58 += 8LL;
      if ( (__int64)v57 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_1B90274(MaxLevelInfo, v32);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_39654664(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        const MethodInfo *method)
{
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
  const MethodInfo *v28; // x2
  Il2CppClass *EntityListFromSvtId; // x0
  __int64 v30; // x1
  Il2CppClass *v31; // x25
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Boolean_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  const MethodInfo *v47; // x4
  const char *namespaze; // x8
  unsigned __int64 v49; // x28
  __int64 v50; // x20
  ServantAppendPassiveSkillEntity_o *v51; // x26
  System_Int32_array *v52; // x8
  int32_t v53; // w27
  System_String_array *v54; // x8
  System_String_array *v55; // x9
  System_Boolean_array *v56; // x8
  System_Int32_array *v57; // x8
  System_Boolean_array *v58; // x8
  System_String_array *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_array *v62; // x8
  System_String_array *v63; // x8
  ServantStatusBattleListViewItem_o *v64; // x26
  System_String_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_array *v68; // x27
  System_String_o *v69; // x26
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3

  if ( (byte_4A704B3 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, idList);
    sub_1B90010(&bool___TypeInfo, v17);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v18);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v19);
    sub_1B90010(&DataManager_TypeInfo, v20);
    sub_1B90010(&int___TypeInfo, v21);
    sub_1B90010(&LocalizationManager_TypeInfo, v22);
    sub_1B90010(&string___TypeInfo, v23);
    sub_1B90010(&StringLiteral_43/*"\n"*/, v24);
    sub_1B90010(&StringLiteral_3802/*"COND_TYPE_TITLE"*/, v25);
    sub_1B90010(&StringLiteral_3790/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v26);
    sub_1B90010(&StringLiteral_1/*""*/, v27);
    byte_4A704B3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v28);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1B9026C(EntityListFromSvtId, v30);
  v31 = EntityListFromSvtId;
  v32 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, LODWORD(EntityListFromSvtId->_1.namespaze));
  *idList = v32;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)idList, (int32_t)v32, v33, v34);
  v35 = (System_String_array *)sub_1B900B8(string___TypeInfo, LODWORD(v31->_1.namespaze));
  *titleList = v35;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v35, v36, v37);
  v38 = (System_String_array *)sub_1B900B8(string___TypeInfo, LODWORD(v31->_1.namespaze));
  *explanationList = v38;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v38, v39, v40);
  v41 = (System_Boolean_array *)sub_1B900B8(bool___TypeInfo, LODWORD(v31->_1.namespaze));
  *releaseStateList = v41;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v41, v42, v43);
  v44 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, LODWORD(v31->_1.namespaze));
  *lvList = v44;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v44, v45, v46);
  namespaze = v31->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v49 = 0LL;
    v50 = 32LL;
    while ( v49 < (unsigned int)namespaze )
    {
      v51 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v31->_1.image + v50);
      if ( v51 )
      {
        v52 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v49 >= v52->max_length )
          break;
        v52->m_Items[v49 + 1] = v51->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v51->fields.skillId,
                                                     (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v53 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v53 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId + 1];
        }
        v54 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v55 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v49 >= v54->max_length || v49 >= v55->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v51,
          (System_String_o **)((char *)v54 + v50),
          (System_String_o **)((char *)v55 + v50),
          v53,
          v47);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v51->fields.skillId,
                                                     (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v58 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v49 >= v58->max_length )
            break;
          v58->m_Items[v49 + 4] = 0;
          v59 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v59 )
            goto LABEL_52;
          if ( v49 >= v59->max_length )
            break;
          *(Il2CppClass **)((char *)&v59->obj.klass + v50) = EntityListFromSvtId;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v59 + v50), (int32_t)EntityListFromSvtId, v60, v61);
          v62 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v49 >= v62->max_length )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v62->obj.klass + v50),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v63 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v49 >= v63->max_length )
              break;
            v64 = (ServantStatusBattleListViewItem_o *)((char *)v63 + v50);
            v65 = System_String__Concat_61787092(
                    *(System_String_o **)((char *)&v63->obj.klass + v50),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v64->klass = (ServantStatusBattleListViewItem_c *)v65;
            sub_1B8FFB4(v64, (int32_t)v65, v66, v67);
          }
          v68 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v49 >= v68->max_length )
            break;
          v69 = *(System_String_o **)((char *)&v68->obj.klass + v50);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v71 = System_String__Concat_61787092(v69, v70, 0LL);
          *(Il2CppClass **)((char *)&v68->obj.klass + v50) = (Il2CppClass *)v71;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v68 + v50), (int32_t)v71, v72, v73);
          v57 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v49 >= v57->max_length )
            break;
          v53 = 0;
        }
        else
        {
          v56 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v49 >= v56->max_length )
            break;
          v56->m_Items[v49 + 4] = 1;
          v57 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v49 >= v57->max_length )
            break;
        }
        v57->m_Items[v49 + 1] = v53;
      }
      LODWORD(namespaze) = v31->_1.namespaze;
      ++v49;
      v50 += 8LL;
      if ( (__int64)v49 >= (int)namespaze )
        return;
    }
    sub_1B90274(EntityListFromSvtId, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A704AA & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A704AA = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_312C900 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantAppendPassiveSkillMaster_o *v6; // x20
  System_String_o *TempKey; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4A704B0 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1B90010(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_4A704B0 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_9:
    sub_1B9026C(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1B90274(TempKey, v8);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_HashSet_int__o *v14; // x21
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x1
  void *list; // x0
  int32_t v18; // w23
  _DWORD *v19; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass *v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4A704AF & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v12);
    sub_1B90010(&ServantAppendPassiveSkillEntity_TypeInfo, v13);
    byte_4A704AF = 1;
  }
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  v18 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v18 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *((_DWORD *)list + 4) == svtId )
      {
        if ( !v14 )
          goto LABEL_22;
        if ( System_Collections_Generic_HashSet_int___Add(
               v14,
               *((_DWORD *)list + 5),
               (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v19[4], v19[5], v21);
          if ( !v15 )
            goto LABEL_22;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v15->fields._size;
          v27 = (Il2CppClass *)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v28[4] = v27;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
          }
        }
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_22;
  }
  if ( !v15 )
LABEL_22:
    sub_1B9026C(list, v16);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v15,
                                                    (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v16; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  int32_t v18; // w25
  System_Collections_ObjectModel_Collection_T__o *v19; // x26
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  int32_t v27; // w2
  int32_t v28; // w3
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A704B2 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B90010(&ServantAppendPassiveSkillEntity_TypeInfo, v10);
    sub_1B90010(&SvtUseSkillData_TypeInfo, v11);
    byte_4A704B2 = 1;
  }
  v12 = sub_1B9025C(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v12, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantAppendPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantAppendPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId )
        {
          if ( !v16 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v16->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              klass_high,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size + 1] = klass_high;
          }
          if ( !v17 )
            break;
          klass_high = HIDWORD(v19->fields.items);
          v24 = v17->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !v24 )
            break;
          v26 = v17->fields._size;
          if ( (unsigned int)v26 >= v24->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              klass_high,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = v26 + 1;
            v24->m_Items[v26 + 1] = klass_high;
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1B9026C(list, klass_high);
  }
LABEL_22:
  if ( !v16 )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v16,
                                                             (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v12 )
    goto LABEL_26;
  *(_QWORD *)(v12 + 16) = list;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)list, v27, v28);
  if ( !v17 )
    goto LABEL_26;
  v29 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v12 + 32) = v29;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v29, v30, v31);
  return (SvtUseSkillData_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAppendPassiveSkillMaster__TryGetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        ServantAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A704AB & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4A704AB = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
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
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *TempKey; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_List_object__o *v52; // x24
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppClass *v54; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  void **v57; // x8
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  _BOOL8 v62; // x0
  __int64 v63; // x1
  ServantAppendPassiveSkillMaster___c_c *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v68; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  __int64 v74; // x1
  int32_t monitor; // w2
  int v76; // w8
  ServantAppendPassiveSkillMaster_o *v78; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A704AE & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B90010(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v4);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__,
      v8);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v9);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__,
      v10);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v11);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v12);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v13);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v14);
    sub_1B90010(&System_IDisposable_TypeInfo, v15);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v18);
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v19);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v23);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v24);
    sub_1B90010(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v25);
    sub_1B90010(&ServantAppendPassiveSkillEntity_TypeInfo, v26);
    sub_1B90010(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1B90010(&ServantAppendPassiveSkillMaster___c_TypeInfo, v28);
    byte_4A704AE = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_31D8F3C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_31D8404 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v78 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1B9026C(0LL, v42);
    methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1B9052C(v41);
LABEL_51:
      sub_1B9026C(v53, v49);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v41,
                                *(_DWORD *)(v41 + 16),
                                *(_DWORD *)(v41 + 20),
                                v43);
    if ( !v30 )
      sub_1B9026C(TempKey, v47);
    v48 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            TempKey,
            &value,
            (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v52;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v52,
        (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v53 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v54 = value[1].klass;
    v55 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v54 )
      sub_1B9026C(v53, v49);
    size = v53->fields._size;
    if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        v44,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->_1.image + size;
      v53->fields._size = size + 1;
      v57[4] = v44;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v44, v50, v51);
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_34;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_34:
    v61 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v61 + 8));
  if ( !v30 )
LABEL_57:
    sub_1B9026C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v79,
    v30,
    (const MethodInfo_31D91E4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v80,
            (const MethodInfo_32D664C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v62 )
      break;
    v64 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v80.fields._current.fields.key;
    v65 = v80.fields._current.fields.value;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v64 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v64->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v68,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v70, v71);
    }
    if ( !v65 )
      sub_1B9026C(v62, v63);
    System_Collections_Generic_List_object___Sort_55649412(
      (System_Collections_Generic_List_object__o *)v65,
      _9__5_0,
      (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v78->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_1B9026C(v73, v74);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v76 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v76;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v80,
    (const MethodInfo_32D676C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_31D8F3C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A704B4 & 1) == 0 )
  {
    sub_1B90010(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_4A704B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantAppendPassiveSkillMaster___c___ctor(
        ServantAppendPassiveSkillMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantAppendPassiveSkillMaster___c___preProcess_b__5_0(
        ServantAppendPassiveSkillMaster___c_o *this,
        ServantAppendPassiveSkillEntity_o *a,
        ServantAppendPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B9026C(this, a);
  return b->fields.priority - a->fields.priority;
}