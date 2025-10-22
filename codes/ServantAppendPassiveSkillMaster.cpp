void ServantAppendPassiveSkillMaster___ctor(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C575A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_4C575A1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


System_String_o *ServantAppendPassiveSkillMaster__CreateTempKey(
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
  if ( (byte_4C575A2 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C575A2 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63674716(v4, (System_String_o *)StringLiteral_1456/*":"*/, v5, 0);
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
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
  Il2CppObject *Master_object; // x24
  UserServantAppendPassiveSkillLvMaster_o *MaxLevelInfo; // x0
  __int64 v17; // x1
  UserServantAppendPassiveSkillLvMaster_o *v18; // x29
  const MethodInfo *v19; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v22; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  UserServantAppendPassiveSkillLvMaster_o *v25; // x26
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Boolean_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v42; // x29
  __int64 v43; // x19
  ServantAppendPassiveSkillEntity_o *v44; // x27
  System_Int32_array *v45; // x8
  int v46; // w28
  const MethodInfo *v47; // x4
  System_Boolean_array *v48; // x8
  System_Int32_array *v49; // x8
  System_String_array *v50; // x8
  System_String_array *v51; // x9
  System_String_o **v52; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v54; // x0
  int32_t v55; // w3
  System_Boolean_array *v56; // x8
  System_String_array *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_array *v60; // x8
  System_String_array *v61; // x8
  CGThumbnailListItem_o *v62; // x28
  System_String_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_String_array *v66; // x20
  System_String_o *v67; // x28
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Int32_array *v72; // x8
  System_String_array *v73; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v78; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C575A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&bool___TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_3735/*"COND_TYPE_TITLE"*/);
    sub_1C3E564(&StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C575A6 = 1;
  }
  v78 = 0;
  entity = 0;
  explanation = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v18 = MaxLevelInfo;
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                              (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                              &entity,
                                                              userId,
                                                              svtId,
                                                              0);
  monitor = 0;
  klass = 0;
  if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
                                                                  v18,
                                                                  userId,
                                                                  svtId,
                                                                  0);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v22 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_3403648 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v22,
                 (const MethodInfo_3403798 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                                                  &v78,
                                                                  userSvtId,
                                                                  (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_64;
        klass = (System_Int32_array *)v78[5].klass;
        monitor = v78[5].monitor;
      }
      else
      {
        monitor = 0;
        klass = 0;
      }
    }
  }
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                              this,
                                                              svtId,
                                                              v19);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1C3E7C0(MaxLevelInfo, v17);
  v25 = MaxLevelInfo;
  v26 = (System_Int32_array *)sub_1C3E60C(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v26;
  sub_1C3E508((CGThumbnailListItem_o *)idList, (int32_t)v26, v27, v28);
  v29 = (System_String_array *)sub_1C3E60C(string___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *titleList = v29;
  sub_1C3E508((CGThumbnailListItem_o *)titleList, (int32_t)v29, v30, v31);
  v32 = (System_String_array *)sub_1C3E60C(string___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *explanationList = v32;
  sub_1C3E508((CGThumbnailListItem_o *)explanationList, (int32_t)v32, v33, v34);
  v35 = (System_Boolean_array *)sub_1C3E60C(bool___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *releaseStateList = v35;
  sub_1C3E508((CGThumbnailListItem_o *)releaseStateList, (int32_t)v35, v36, v37);
  v38 = (System_Int32_array *)sub_1C3E60C(int___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *lvList = v38;
  sub_1C3E508((CGThumbnailListItem_o *)lvList, (int32_t)v38, v39, v40);
  MasterName_k__BackingField = v25->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v42 = 0;
    v43 = 32;
    while ( v42 < (unsigned int)MasterName_k__BackingField )
    {
      v44 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v25->klass + v43);
      if ( v44 )
      {
        v45 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v42 >= LODWORD(v45->max_length) )
          break;
        v45->m_Items[v42] = v44->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v44->fields.num,
                                                                          (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v46 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v46 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v44->fields.num,
                                                                          (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v56 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v56->max_length) )
            break;
          v56->m_Items[v42] = 0;
          v57 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3735/*"COND_TYPE_TITLE"*/,
                                                                      0);
          if ( !v57 )
            goto LABEL_64;
          if ( v42 >= LODWORD(v57->max_length) )
            break;
          *(Il2CppClass **)((char *)&v57->obj.klass + v43) = (Il2CppClass *)MaxLevelInfo;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v57 + v43), (int32_t)MaxLevelInfo, v58, v59);
          v60 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v60->max_length) )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v60->obj.klass + v43),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v61 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v42 >= LODWORD(v61->max_length) )
              break;
            v62 = (CGThumbnailListItem_o *)((char *)v61 + v43);
            v63 = System_String__Concat_63636468(
                    *(System_String_o **)((char *)&v61->obj.klass + v43),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v62->klass = (CGThumbnailListItem_c *)v63;
            sub_1C3E508(v62, (int32_t)v63, v64, v65);
          }
          v66 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v66->max_length) )
            break;
          v67 = *(System_String_o **)((char *)&v66->obj.klass + v43);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v69 = System_String__Concat_63636468(v67, v68, 0);
          *(Il2CppClass **)((char *)&v66->obj.klass + v43) = (Il2CppClass *)v69;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v66 + v43), (int32_t)v69, v70, v71);
          v72 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v72->max_length) )
            break;
          v72->m_Items[v42] = 0;
          v73 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v73->max_length) )
            break;
          v52 = (System_String_o **)((char *)v73 + v43);
          p_explanation = &explanation;
          v54 = v44;
          v55 = 0;
        }
        else
        {
          v48 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v48->max_length) )
            break;
          v48->m_Items[v42] = 1;
          v49 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v49->max_length) )
            break;
          v49->m_Items[v42] = v46;
          v50 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v51 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v42 >= LODWORD(v50->max_length) || v42 >= LODWORD(v51->max_length) )
            break;
          v52 = (System_String_o **)((char *)v50 + v43);
          p_explanation = (System_String_o **)((char *)v51 + v43);
          v54 = v44;
          v55 = v46;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v54, v52, p_explanation, v55, v47);
      }
      LODWORD(MasterName_k__BackingField) = v25->fields._MasterName_k__BackingField;
      ++v42;
      v43 += 8;
      if ( (__int64)v42 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_1C3E7C8(MaxLevelInfo, v17);
  }
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_42661200(
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
  const MethodInfo *v17; // x2
  Il2CppClass *EntityListFromSvtId; // x0
  __int64 v19; // x1
  Il2CppClass *v20; // x25
  System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Boolean_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Int32_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x4
  const char *namespaze; // x8
  unsigned __int64 v38; // x28
  __int64 v39; // x20
  ServantAppendPassiveSkillEntity_o *v40; // x26
  System_Int32_array *v41; // x8
  int32_t v42; // w27
  System_String_array *v43; // x8
  System_String_array *v44; // x9
  System_Boolean_array *v45; // x8
  System_Int32_array *v46; // x8
  System_Boolean_array *v47; // x8
  System_String_array *v48; // x26
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_String_array *v51; // x8
  System_String_array *v52; // x8
  CGThumbnailListItem_o *v53; // x26
  System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_String_array *v57; // x27
  System_String_o *v58; // x26
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3

  if ( (byte_4C575A8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&bool___TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_3735/*"COND_TYPE_TITLE"*/);
    sub_1C3E564(&StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C575A8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v17);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1C3E7C0(EntityListFromSvtId, v19);
  v20 = EntityListFromSvtId;
  v21 = (System_Int32_array *)sub_1C3E60C(int___TypeInfo, LODWORD(EntityListFromSvtId->_1.namespaze));
  *idList = v21;
  sub_1C3E508((CGThumbnailListItem_o *)idList, (int32_t)v21, v22, v23);
  v24 = (System_String_array *)sub_1C3E60C(string___TypeInfo, LODWORD(v20->_1.namespaze));
  *titleList = v24;
  sub_1C3E508((CGThumbnailListItem_o *)titleList, (int32_t)v24, v25, v26);
  v27 = (System_String_array *)sub_1C3E60C(string___TypeInfo, LODWORD(v20->_1.namespaze));
  *explanationList = v27;
  sub_1C3E508((CGThumbnailListItem_o *)explanationList, (int32_t)v27, v28, v29);
  v30 = (System_Boolean_array *)sub_1C3E60C(bool___TypeInfo, LODWORD(v20->_1.namespaze));
  *releaseStateList = v30;
  sub_1C3E508((CGThumbnailListItem_o *)releaseStateList, (int32_t)v30, v31, v32);
  v33 = (System_Int32_array *)sub_1C3E60C(int___TypeInfo, LODWORD(v20->_1.namespaze));
  *lvList = v33;
  sub_1C3E508((CGThumbnailListItem_o *)lvList, (int32_t)v33, v34, v35);
  namespaze = v20->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v38 = 0;
    v39 = 32;
    while ( v38 < (unsigned int)namespaze )
    {
      v40 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v20->_1.image + v39);
      if ( v40 )
      {
        v41 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v38 >= LODWORD(v41->max_length) )
          break;
        v41->m_Items[v38] = v40->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v40->fields.skillId,
                                                     (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v42 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= LODWORD(releaseSkillLvs->max_length) )
            break;
          v42 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId];
        }
        v43 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v44 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v38 >= LODWORD(v43->max_length) || v38 >= LODWORD(v44->max_length) )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v40,
          (System_String_o **)((char *)v43 + v39),
          (System_String_o **)((char *)v44 + v39),
          v42,
          v36);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v40->fields.skillId,
                                                     (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v47 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v47->max_length) )
            break;
          v47->m_Items[v38] = 0;
          v48 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COND_TYPE_TITLE"*/, 0);
          if ( !v48 )
            goto LABEL_52;
          if ( v38 >= LODWORD(v48->max_length) )
            break;
          *(Il2CppClass **)((char *)&v48->obj.klass + v39) = EntityListFromSvtId;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v48 + v39), (int32_t)EntityListFromSvtId, v49, v50);
          v51 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v51->max_length) )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v51->obj.klass + v39),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v52 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v38 >= LODWORD(v52->max_length) )
              break;
            v53 = (CGThumbnailListItem_o *)((char *)v52 + v39);
            v54 = System_String__Concat_63636468(
                    *(System_String_o **)((char *)&v52->obj.klass + v39),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v53->klass = (CGThumbnailListItem_c *)v54;
            sub_1C3E508(v53, (int32_t)v54, v55, v56);
          }
          v57 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v57->max_length) )
            break;
          v58 = *(System_String_o **)((char *)&v57->obj.klass + v39);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v60 = System_String__Concat_63636468(v58, v59, 0);
          *(Il2CppClass **)((char *)&v57->obj.klass + v39) = (Il2CppClass *)v60;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v57 + v39), (int32_t)v60, v61, v62);
          v46 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v46->max_length) )
            break;
          v42 = 0;
        }
        else
        {
          v45 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v45->max_length) )
            break;
          v45->m_Items[v38] = 1;
          v46 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v38 >= LODWORD(v46->max_length) )
            break;
        }
        v46->m_Items[v38] = v42;
      }
      LODWORD(namespaze) = v20->_1.namespaze;
      ++v38;
      v39 += 8;
      if ( (__int64)v38 >= (int)namespaze )
        return;
    }
    sub_1C3E7C8(EntityListFromSvtId, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *ServantAppendPassiveSkillMaster__GetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C5759F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4C5759F = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_33B7A10 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


ServantAppendPassiveSkillEntity_o *ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
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
  if ( (byte_4C575A5 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_4C575A5 = 1;
  }
  value = 0;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0;
  if ( !value )
LABEL_9:
    sub_1C3E7C0(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1C3E7C8(TempKey, v8);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


ServantAppendPassiveSkillEntity_array *ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 v7; // x1
  void *list; // x0
  int32_t v9; // w23
  _DWORD *v10; // x24
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4C575A4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    byte_4C575A4 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  v9 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          goto LABEL_20;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *((_DWORD *)list + 5),
               (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v10[4], v10[5], v11);
          if ( !v6 )
            goto LABEL_20;
          items = v6->fields._items;
          v15 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v6->fields._size;
          v17 = (Il2CppClass *)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v18[4] = v17;
            sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
          }
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v6 )
LABEL_20:
    sub_1C3E7C0(list, v7);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v6,
                                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v9; // x23
  System_Collections_Generic_List_int__o *v10; // x22
  int32_t v11; // w25
  System_Collections_ObjectModel_Collection_T__o *v12; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C575A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&SvtUseSkillData_TypeInfo);
    byte_4C575A7 = 1;
  }
  v5 = sub_1C3E7B0(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list->fields.items) == svtId )
        {
          if ( !v9 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v9->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              klass_high,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = klass_high;
          }
          if ( !v10 )
            break;
          klass_high = HIDWORD(v12->fields.items);
          v16 = v10->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !v16 )
            break;
          v18 = v10->fields._size;
          if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              klass_high,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = v18 + 1;
            v16->m_Items[v18] = klass_high;
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_20;
    }
LABEL_24:
    sub_1C3E7C0(list, klass_high);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v9,
                                                             (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = list;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)list, v19, v20);
  if ( !v10 )
    goto LABEL_24;
  v21 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v5 + 32) = v21;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v21, v22, v23);
  return (SvtUseSkillData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool ServantAppendPassiveSkillMaster__TryGetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        ServantAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C575A0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4C575A0 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool ServantAppendPassiveSkillMaster__preProcess(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *TempKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void **v31; // x8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  ServantAppendPassiveSkillMaster___c_c *v38; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v41; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_Dictionary_object__object__o *v45; // x23
  System_Object_array *v46; // x0
  __int64 v47; // x1
  int32_t monitor; // w2
  int v49; // w8
  ServantAppendPassiveSkillMaster_o *v51; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C575A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
    sub_1C3E564(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C3E564(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_1C3E564(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_1C3E564(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4C575A3 = 1;
  }
  value = 0;
  memset(&v53, 0, sizeof(v53));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v51 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C3E7C0(0, v16);
    naturalAligment = ServantAppendPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1C3EA80(v15);
LABEL_51:
      sub_1C3E7C0(v27, v23);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v15,
                                *(_DWORD *)(v15 + 16),
                                *(_DWORD *)(v15 + 20),
                                v17);
    if ( !v4 )
      sub_1C3E7C0(TempKey, v21);
    v22 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            TempKey,
            &value,
            (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v26,
        (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1C3E7C0(v27, v23);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v18,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v18;
      sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v18, v24, v25);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_34:
    v35 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C3E7C0(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v52,
    v4,
    (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v53,
            (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v36 )
      break;
    v38 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    current = v53.fields._current;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v38 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v38->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v41, Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v43, v44);
    }
    if ( !current.fields.value )
      sub_1C3E7C0(v36, v37);
    System_Collections_Generic_List_object___Sort_58421028(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v45 = (System_Collections_Generic_Dictionary_object__object__o *)v51->fields.listCache;
    v46 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v45 )
      sub_1C3E7C0(v46, v47);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v45,
      current.fields.key,
      &v46->obj,
      (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v49 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v49;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v53,
    (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C575A9 & 1) == 0 )
  {
    sub_1C3E564(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4C575A9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantAppendPassiveSkillMaster___c___ctor(ServantAppendPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantAppendPassiveSkillMaster___c___preProcess_b__5_0(
        ServantAppendPassiveSkillMaster___c_o *this,
        ServantAppendPassiveSkillEntity_o *a,
        ServantAppendPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}