void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1CD18 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v4);
    byte_4B1CD18 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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
  if ( (byte_4B1CD19 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, *(_QWORD *)&svtId);
    byte_4B1CD19 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62488672(v4, (System_String_o *)StringLiteral_1448/*":"*/, v5, 0LL);
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
  const MethodInfo *v43; // x3
  System_String_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Boolean_array *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Int32_array *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v58; // x29
  __int64 v59; // x19
  ServantAppendPassiveSkillEntity_o *v60; // x27
  System_Int32_array *v61; // x8
  int v62; // w28
  const MethodInfo *v63; // x4
  System_Boolean_array *v64; // x8
  System_Int32_array *v65; // x8
  System_String_array *v66; // x8
  System_String_array *v67; // x9
  System_String_o **v68; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v70; // x0
  int32_t v71; // w3
  System_Boolean_array *v72; // x8
  System_String_array *v73; // x20
  const MethodInfo *v74; // x3
  System_String_array *v75; // x8
  System_String_array *v76; // x8
  CGThumbnailListItem_o *v77; // x28
  System_String_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_String_array *v81; // x20
  System_String_o *v82; // x28
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Int32_array *v87; // x8
  System_String_array *v88; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v93; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B1CD1D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, idList);
    sub_1BCAFF8(&bool___TypeInfo, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v17);
    sub_1BCAFF8(&DataManager_TypeInfo, v18);
    sub_1BCAFF8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v21);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v22);
    sub_1BCAFF8(&int___TypeInfo, v23);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v24);
    sub_1BCAFF8(&string___TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v26);
    sub_1BCAFF8(&StringLiteral_3700/*"COND_TYPE_TITLE"*/, v27);
    sub_1BCAFF8(&StringLiteral_3688/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v28);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v29);
    byte_4B1CD1D = 1;
  }
  v93 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
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
               (const MethodInfo_33184F0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v37,
                 (const MethodInfo_3318640 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                  &v93,
                                                                  userSvtId,
                                                                  (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
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
    sub_1BCB254(MaxLevelInfo, v32);
  v40 = MaxLevelInfo;
  v41 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v41;
  sub_1BCAF9C((CGThumbnailListItem_o *)idList, (int32_t)v41, v42, v43);
  v44 = (System_String_array *)sub_1BCB0A0(string___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *titleList = v44;
  sub_1BCAF9C((CGThumbnailListItem_o *)titleList, (int32_t)v44, v45, v46);
  v47 = (System_String_array *)sub_1BCB0A0(string___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *explanationList = v47;
  sub_1BCAF9C((CGThumbnailListItem_o *)explanationList, (int32_t)v47, v48, v49);
  v50 = (System_Boolean_array *)sub_1BCB0A0(bool___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *releaseStateList = v50;
  sub_1BCAF9C((CGThumbnailListItem_o *)releaseStateList, (int32_t)v50, v51, v52);
  v53 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, LODWORD(v40->fields._MasterName_k__BackingField));
  *lvList = v53;
  sub_1BCAF9C((CGThumbnailListItem_o *)lvList, (int32_t)v53, v54, v55);
  MasterName_k__BackingField = v40->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v58 = 0LL;
    v59 = 32LL;
    while ( v58 < (unsigned int)MasterName_k__BackingField )
    {
      v60 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v40->klass + v59);
      if ( v60 )
      {
        v61 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v58 >= v61->max_length )
          break;
        v61->m_Items[v58 + 1] = v60->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v60->fields.num,
                                                                          (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v62 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v62 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v60->fields.num,
                                                                          (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v72 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v58 >= v72->max_length )
            break;
          v72->m_Items[v58 + 4] = 0;
          v73 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3700/*"COND_TYPE_TITLE"*/,
                                                                      0LL);
          if ( !v73 )
            goto LABEL_64;
          if ( v58 >= v73->max_length )
            break;
          *(Il2CppClass **)((char *)&v73->obj.klass + v59) = (Il2CppClass *)MaxLevelInfo;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v73 + v59), (int32_t)MaxLevelInfo, v56, v74);
          v75 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v58 >= v75->max_length )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v75->obj.klass + v59),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v76 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v58 >= v76->max_length )
              break;
            v77 = (CGThumbnailListItem_o *)((char *)v76 + v59);
            v78 = System_String__Concat_62450424(
                    *(System_String_o **)((char *)&v76->obj.klass + v59),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v77->klass = (CGThumbnailListItem_c *)v78;
            sub_1BCAF9C(v77, (int32_t)v78, v79, v80);
          }
          v81 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v58 >= v81->max_length )
            break;
          v82 = *(System_String_o **)((char *)&v81->obj.klass + v59);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v84 = System_String__Concat_62450424(v82, v83, 0LL);
          *(Il2CppClass **)((char *)&v81->obj.klass + v59) = (Il2CppClass *)v84;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v81 + v59), (int32_t)v84, v85, v86);
          v87 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v58 >= v87->max_length )
            break;
          v87->m_Items[v58 + 1] = 0;
          v88 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v58 >= v88->max_length )
            break;
          v68 = (System_String_o **)((char *)v88 + v59);
          p_explanation = &explanation;
          v70 = v60;
          v71 = 0;
        }
        else
        {
          v64 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v58 >= v64->max_length )
            break;
          v64->m_Items[v58 + 4] = 1;
          v65 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v58 >= v65->max_length )
            break;
          v65->m_Items[v58 + 1] = v62;
          v66 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v67 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v58 >= v66->max_length || v58 >= v67->max_length )
            break;
          v68 = (System_String_o **)((char *)v66 + v59);
          p_explanation = (System_String_o **)((char *)v67 + v59);
          v70 = v60;
          v71 = v62;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v70, v68, p_explanation, v71, v63);
      }
      LODWORD(MasterName_k__BackingField) = v40->fields._MasterName_k__BackingField;
      ++v58;
      v59 += 8LL;
      if ( (__int64)v58 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_1BCB25C(MaxLevelInfo, v32, v56);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_41759740(
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
  const MethodInfo *v34; // x3
  System_String_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Boolean_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  const MethodInfo *v48; // x4
  const char *namespaze; // x8
  unsigned __int64 v50; // x28
  __int64 v51; // x20
  ServantAppendPassiveSkillEntity_o *v52; // x26
  System_Int32_array *v53; // x8
  int32_t v54; // w27
  System_String_array *v55; // x8
  System_String_array *v56; // x9
  System_Boolean_array *v57; // x8
  System_Int32_array *v58; // x8
  System_Boolean_array *v59; // x8
  System_String_array *v60; // x26
  const MethodInfo *v61; // x3
  System_String_array *v62; // x8
  System_String_array *v63; // x8
  CGThumbnailListItem_o *v64; // x26
  System_String_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_String_array *v68; // x27
  System_String_o *v69; // x26
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3

  if ( (byte_4B1CD1F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, idList);
    sub_1BCAFF8(&bool___TypeInfo, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&int___TypeInfo, v21);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v22);
    sub_1BCAFF8(&string___TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v24);
    sub_1BCAFF8(&StringLiteral_3700/*"COND_TYPE_TITLE"*/, v25);
    sub_1BCAFF8(&StringLiteral_3688/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v26);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v27);
    byte_4B1CD1F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v28);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1BCB254(EntityListFromSvtId, v30);
  v31 = EntityListFromSvtId;
  v32 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, LODWORD(EntityListFromSvtId->_1.namespaze));
  *idList = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)idList, (int32_t)v32, v33, v34);
  v35 = (System_String_array *)sub_1BCB0A0(string___TypeInfo, LODWORD(v31->_1.namespaze));
  *titleList = v35;
  sub_1BCAF9C((CGThumbnailListItem_o *)titleList, (int32_t)v35, v36, v37);
  v38 = (System_String_array *)sub_1BCB0A0(string___TypeInfo, LODWORD(v31->_1.namespaze));
  *explanationList = v38;
  sub_1BCAF9C((CGThumbnailListItem_o *)explanationList, (int32_t)v38, v39, v40);
  v41 = (System_Boolean_array *)sub_1BCB0A0(bool___TypeInfo, LODWORD(v31->_1.namespaze));
  *releaseStateList = v41;
  sub_1BCAF9C((CGThumbnailListItem_o *)releaseStateList, (int32_t)v41, v42, v43);
  v44 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, LODWORD(v31->_1.namespaze));
  *lvList = v44;
  sub_1BCAF9C((CGThumbnailListItem_o *)lvList, (int32_t)v44, v45, v46);
  namespaze = v31->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v50 = 0LL;
    v51 = 32LL;
    while ( v50 < (unsigned int)namespaze )
    {
      v52 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v31->_1.image + v51);
      if ( v52 )
      {
        v53 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v50 >= v53->max_length )
          break;
        v53->m_Items[v50 + 1] = v52->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v52->fields.skillId,
                                                     (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v54 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v54 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId + 1];
        }
        v55 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v56 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v50 >= v55->max_length || v50 >= v56->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v52,
          (System_String_o **)((char *)v55 + v51),
          (System_String_o **)((char *)v56 + v51),
          v54,
          v48);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v52->fields.skillId,
                                                     (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v59 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v50 >= v59->max_length )
            break;
          v59->m_Items[v50 + 4] = 0;
          v60 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3700/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v60 )
            goto LABEL_52;
          if ( v50 >= v60->max_length )
            break;
          *(Il2CppClass **)((char *)&v60->obj.klass + v51) = EntityListFromSvtId;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v60 + v51), (int32_t)EntityListFromSvtId, v47, v61);
          v62 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v50 >= v62->max_length )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v62->obj.klass + v51),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0LL);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v63 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v50 >= v63->max_length )
              break;
            v64 = (CGThumbnailListItem_o *)((char *)v63 + v51);
            v65 = System_String__Concat_62450424(
                    *(System_String_o **)((char *)&v63->obj.klass + v51),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v64->klass = (CGThumbnailListItem_c *)v65;
            sub_1BCAF9C(v64, (int32_t)v65, v66, v67);
          }
          v68 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v50 >= v68->max_length )
            break;
          v69 = *(System_String_o **)((char *)&v68->obj.klass + v51);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v71 = System_String__Concat_62450424(v69, v70, 0LL);
          *(Il2CppClass **)((char *)&v68->obj.klass + v51) = (Il2CppClass *)v71;
          sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v68 + v51), (int32_t)v71, v72, v73);
          v58 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v50 >= v58->max_length )
            break;
          v54 = 0;
        }
        else
        {
          v57 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v50 >= v57->max_length )
            break;
          v57->m_Items[v50 + 4] = 1;
          v58 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v50 >= v58->max_length )
            break;
        }
        v58->m_Items[v50 + 1] = v54;
      }
      LODWORD(namespaze) = v31->_1.namespaze;
      ++v50;
      v51 += 8LL;
      if ( (__int64)v50 >= (int)namespaze )
        return;
    }
    sub_1BCB25C(EntityListFromSvtId, v30, v47);
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

  if ( (byte_4B1CD16 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CD16 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  __int64 v9; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B1CD1C & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1BCAFF8(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_4B1CD1C = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_9:
    sub_1BCB254(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1BCB25C(TempKey, v8, v9);
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
  System_Collections_Generic_HashSet_int__o *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x1
  void *list; // x0
  int32_t v17; // w23
  _DWORD *v18; // x24
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass *v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_4B1CD1B & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v12);
    byte_4B1CD1B = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  v17 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v17 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v18 = list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v13 )
          goto LABEL_20;
        if ( System_Collections_Generic_HashSet_int___Add(
               v13,
               *((_DWORD *)list + 5),
               (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v18[4], v18[5], v19);
          if ( !v14 )
            goto LABEL_20;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v14->fields._size;
          v25 = (Il2CppClass *)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v26[4] = v25;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
          }
        }
      }
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v14 )
LABEL_20:
    sub_1BCB254(list, v15);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v14,
                                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
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
  __int64 v11; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v15; // x23
  System_Collections_Generic_List_int__o *v16; // x22
  int32_t v17; // w25
  System_Collections_ObjectModel_Collection_T__o *v18; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4B1CD1E & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BCAFF8(&SvtUseSkillData_TypeInfo, v10);
    byte_4B1CD1E = 1;
  }
  v11 = sub_1BCB244(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v11, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v18 = list;
        if ( LODWORD(list->fields.items) == svtId )
        {
          if ( !v15 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v15->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              klass_high,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = klass_high;
          }
          if ( !v16 )
            break;
          klass_high = HIDWORD(v18->fields.items);
          v22 = v16->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !v22 )
            break;
          v24 = v16->fields._size;
          if ( (unsigned int)v24 >= v22->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              klass_high,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = v24 + 1;
            v22->m_Items[v24 + 1] = klass_high;
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_20;
    }
LABEL_24:
    sub_1BCB254(list, klass_high);
  }
LABEL_20:
  if ( !v15 )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v15,
                                                             (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 16) = list;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)list, v25, v26);
  if ( !v16 )
    goto LABEL_24;
  v27 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v11 + 32) = v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v27, v28, v29);
  return (SvtUseSkillData_o *)v11;
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

  if ( (byte_4B1CD17 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4B1CD17 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
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
  const MethodInfo *v51; // x3
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
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  __int64 v74; // x1
  int32_t monitor; // w2
  int v76; // w8
  ServantAppendPassiveSkillMaster_o *v78; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B1CD1A & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__,
      method);
    sub_1BCAFF8(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__,
      v10);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v14);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v15);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo, v16);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v18);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v24);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v25);
    sub_1BCAFF8(&ServantAppendPassiveSkillEntity_TypeInfo, v26);
    sub_1BCAFF8(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1BCAFF8(&ServantAppendPassiveSkillMaster___c_TypeInfo, v28);
    byte_4B1CD1A = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v78 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v31);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
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
      v40 = sub_1C1B560(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo,
              0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1BCB254(0LL, v42);
    methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1BCB514(v41);
LABEL_51:
      sub_1BCB254(v53, v49);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v41,
                                *(_DWORD *)(v41 + 16),
                                *(_DWORD *)(v41 + 20),
                                v43);
    if ( !v30 )
      sub_1BCB254(TempKey, v47);
    v48 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            TempKey,
            &value,
            (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v52;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v52,
        (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v53 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v54 = value[1].klass;
    v55 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v54 )
      sub_1BCB254(v53, v49);
    size = v53->fields._size;
    if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        v44,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->_1.image + size;
      v53->fields._size = size + 1;
      v57[4] = v44;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v44, v50, v51);
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
    v61 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v61 + 8));
  if ( !v30 )
LABEL_57:
    sub_1BCB254(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v79,
    v30,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v80,
            (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
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
      _9__5_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v68,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v70, v71);
    }
    if ( !v65 )
      sub_1BCB254(v62, v63);
    System_Collections_Generic_List_object___Sort_57390740(
      (System_Collections_Generic_List_object__o *)v65,
      _9__5_0,
      (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v78->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_1BCB254(v73, v74);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v76 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v76;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v80,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CD20 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_4B1CD20 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}