void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C34621 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4C34621 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_3396838 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C34620 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4C34620 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_3396838 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntityByQuestId(
        BlankEarthQuestAfterAction_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthQuestAfterAction_o *SpotID; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C34622 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C34622 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v7);
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  intptr_t v4; // x0
  UnityEngine_Object_o *m_CachedPtr; // x20

  if ( (byte_4C34623 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34623 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( (v4 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    return 0;
  v4 = mInstance[10].fields.m_CachedPtr;
  if ( !v4 )
LABEL_19:
    sub_1C32E7C(v4);
  return ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v4, 0);
}


void BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  System_String_o *v5; // x0
  UnityEngine_Object_o *m_CachedPtr; // x20
  ScrTerminalListTop_o *v7; // x19
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = spotId;
  if ( (byte_4C34624 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34624 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (System_String_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( !mInstance )
      goto LABEL_19;
    m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    {
      v7 = (ScrTerminalListTop_o *)mInstance[10].fields.m_CachedPtr;
      v5 = System_Int32__ToString((int32_t)&v8, 0);
      if ( v7 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v7, 4, v5, 0);
        return;
      }
LABEL_19:
      sub_1C32E7C(v5);
    }
  }
}


bool BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  int32_t id; // w8
  System_String_o *v13; // x0
  System_String_array *v14; // x0
  System_String_array *v15; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v16; // x22
  BlankEarthQuestAfterAction_o *v17; // x0
  const MethodInfo *v18; // x2
  BlankEarthGimmickEntity_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v23; // x20
  __int64 v24; // x0
  System_String_o *v25; // x0
  System_String_array *v26; // x0
  System_String_array *v27; // x21
  int v28; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v29; // x22
  bool v30; // w8
  System_String_o *v31; // x0
  System_String_array *v32; // x0
  System_String_array *v33; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v34; // x22
  __int64 v35; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x20
  __int64 v37; // x0
  bool result; // w0
  unsigned int v39; // w8
  int v40; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v41; // x20
  BlankEarthQuestAfterAction_o *v42; // x0
  const MethodInfo *v43; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  BlankEarthQuestAfterAction_o *v48; // x0
  const MethodInfo *v49; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v50; // x20
  BlankEarthQuestAfterAction_o *v51; // x0
  const MethodInfo *v52; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  System_String_o *v57; // x0
  System_String_array *v58; // x0
  System_String_array *v59; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v60; // x22
  __int64 v61; // x0
  float v62; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v63; // x22
  __int64 v64; // x0
  float v65; // s0
  float v66; // s8
  __int64 v67; // x0
  float v68; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v69; // x20
  __int64 v70; // x0
  System_String_o *v71; // x0
  System_String_array *v72; // x0
  System_String_array *v73; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v74; // x22
  BlankEarthQuestAfterAction_o *v75; // x0
  const MethodInfo *v76; // x2
  BlankEarthSpotEntity_o *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x0
  BlankEarthQuestAfterAction_o *v81; // x0
  const MethodInfo *v82; // x2
  System_String_o *v83; // x0
  System_String_array *v84; // x0
  System_String_array *v85; // x21
  int v86; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v87; // x22
  float v88; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v89; // x22
  __int64 v90; // x0
  System_String_o *param; // x0
  System_String_array *v92; // x0
  System_String_array *v93; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v95; // x22
  float v96; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v97; // x22
  __int64 v98; // x0
  BlankEarthQuestAfterAction_o *v99; // x0
  const MethodInfo *v100; // x2
  BlankEarthQuestAfterAction_o *v101; // x0
  const MethodInfo *v102; // x2

  if ( (byte_4C3461F & 1) == 0 )
  {
    sub_1C32C20(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4C3461F = 1;
  }
  *errorMessage = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)errorMessage, 0, (int32_t)commandParam, (const MethodInfo *)errorMessage);
  v8 = (Il2CppObject *)sub_1C32E6C(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1C32E7C(v11);
  id = command->fields.id;
  if ( id <= 500 )
  {
    if ( id <= 303 )
    {
      result = 1;
      if ( id > 299 )
      {
        if ( id != 300 )
        {
          if ( id == 302 )
          {
            param = command->fields.param;
            if ( !param )
              sub_1C32E7C(0);
            v92 = System_String__Split(param, 0x2Cu, 0, 0);
            v93 = v92;
            if ( !v92 )
              sub_1C32E7C(0);
            max_length = v92->max_length;
            if ( max_length > 0 )
            {
              v95 = *commandParam;
              v96 = 0.5;
              if ( max_length >= 3 )
                v96 = System_Single__Parse(v92->m_Items[2], 0) * 0.001;
              if ( !v95 )
                sub_1C32E7C(v92);
              v95->fields.time = v96;
              v97 = *commandParam;
              if ( SLODWORD(v93->max_length) >= 2 )
                v98 = System_Int32__Parse(v93->m_Items[1], 0);
              else
                v98 = 15;
              if ( !v97 )
                sub_1C32E7C(v98);
              v97->fields.easeType = v98;
              if ( !LODWORD(v93->max_length) )
                sub_1C32E84(v98);
              v50 = *commandParam;
              v101 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v93->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v101, (int32_t)v101, v102);
              v56 = (int)GimmickEntity;
              if ( !v50 )
                sub_1C32E7C(GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v57 = command->fields.param;
            if ( !v57 )
              sub_1C32E7C(0);
            v58 = System_String__Split(v57, 0x2Cu, 0, 0);
            v59 = v58;
            if ( !v58 )
              sub_1C32E7C(0);
            if ( SLODWORD(v58->max_length) > 3 )
            {
              v60 = *commandParam;
              v62 = System_Single__Parse(v58->m_Items[2], 0);
              if ( !v60 )
                sub_1C32E7C(v61);
              v60->fields.time = v62 * 0.001;
              v63 = *commandParam;
              if ( !*commandParam )
                sub_1C32E7C(v61);
              if ( v63->fields.time < 0.0 )
                v63->fields.time = 0.5;
              if ( !LODWORD(v59->max_length) )
                sub_1C32E84(v61);
              v65 = System_Single__Parse(v59->m_Items[0], 0);
              if ( LODWORD(v59->max_length) <= 1 )
                sub_1C32E84(v64);
              v66 = v65;
              v68 = System_Single__Parse(v59->m_Items[1], 0);
              v63->fields.latLongVector.fields.x = v66;
              v63->fields.latLongVector.fields.y = v68;
              if ( LODWORD(v59->max_length) <= 3 )
                sub_1C32E84(v67);
              v69 = *commandParam;
              v70 = System_Int32__Parse(v59->m_Items[3], 0);
              if ( !v69 )
                sub_1C32E7C(v70);
              v69->fields.easeType = v70;
              return 1;
            }
          }
          return 0;
        }
        v83 = command->fields.param;
        if ( !v83 )
          sub_1C32E7C(0);
        v84 = System_String__Split(v83, 0x2Cu, 0, 0);
        v85 = v84;
        if ( !v84 )
          sub_1C32E7C(0);
        v86 = v84->max_length;
        if ( v86 <= 0 )
          return 0;
        v87 = *commandParam;
        v88 = 0.5;
        if ( v86 >= 3 )
          v88 = System_Single__Parse(v84->m_Items[2], 0) * 0.001;
        if ( !v87 )
          sub_1C32E7C(v84);
        v87->fields.time = v88;
        v89 = *commandParam;
        if ( SLODWORD(v85->max_length) >= 2 )
          v90 = System_Int32__Parse(v85->m_Items[1], 0);
        else
          v90 = 15;
        if ( !v89 )
          sub_1C32E7C(v90);
        v89->fields.easeType = v90;
        if ( !LODWORD(v85->max_length) )
          sub_1C32E84(v90);
        v41 = *commandParam;
        v99 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v85->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v99, (int32_t)v99, v100);
        v47 = (int)SpotEntity;
        if ( !v41 )
          sub_1C32E7C(SpotEntity);
      }
      else
      {
        v39 = id - 100;
        if ( v39 > 0xE )
          return result;
        v40 = 1 << v39;
        if ( (v40 & 0x1C07) == 0 )
        {
          if ( (v40 & 0x4010) == 0 )
            return result;
          v71 = command->fields.param;
          if ( !v71 )
            sub_1C32E7C(0);
          v72 = System_String__Split(v71, 0x2Cu, 0, 0);
          v73 = v72;
          if ( !v72 )
            sub_1C32E7C(0);
          if ( !LODWORD(v72->max_length) )
            sub_1C32E84(v72);
          v74 = *commandParam;
          v75 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v72->m_Items[0], 0);
          v77 = BlankEarthQuestAfterAction__GetSpotEntity(v75, (int32_t)v75, v76);
          if ( !v74 )
            sub_1C32E7C(v77);
          v74->fields.blankEarthSpotEntity = v77;
          sub_1C32BC4((CGThumbnailListItem_o *)&v74->fields, (int32_t)v77, v78, v79);
          if ( LODWORD(v73->max_length) <= 1 )
            sub_1C32E84(v80);
          v23 = *commandParam;
          v24 = System_Int32__Parse(v73->m_Items[1], 0);
          if ( !v23 )
            sub_1C32E7C(v24);
          goto LABEL_65;
        }
        v41 = *commandParam;
        v42 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v42, (int32_t)v42, v43);
        v47 = (int)SpotEntity;
        if ( !v41 )
          sub_1C32E7C(SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v25 = command->fields.param;
        if ( !v25 )
          sub_1C32E7C(0);
        v26 = System_String__Split(v25, 0x2Cu, 0, 0);
        v27 = v26;
        if ( !v26 )
          sub_1C32E7C(0);
        v28 = v26->max_length;
        if ( v28 > 0 )
        {
          v29 = *commandParam;
          if ( v28 == 1 )
          {
            v30 = 0;
          }
          else
          {
            v26 = (System_String_array *)System_Int32__Parse(v26->m_Items[1], 0);
            v30 = (int)v26 > 0;
          }
          if ( !v29 )
            sub_1C32E7C(v26);
          v29->fields.noWait = v30;
          if ( !LODWORD(v27->max_length) )
            sub_1C32E84(v26);
          v50 = *commandParam;
          v81 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v27->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v81, (int32_t)v81, v82);
          v56 = (int)GimmickEntity;
          if ( !v50 )
            sub_1C32E7C(GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v41 = *commandParam;
      v48 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v48, (int32_t)v48, v49);
      v47 = (int)SpotEntity;
      if ( !v41 )
        sub_1C32E7C(SpotEntity);
    }
    v41->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C32BC4((CGThumbnailListItem_o *)&v41->fields, v47, v45, v46);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v13 = command->fields.param;
      if ( !v13 )
        sub_1C32E7C(0);
      v14 = System_String__Split(v13, 0x2Cu, 0, 0);
      v15 = v14;
      if ( !v14 )
        sub_1C32E7C(0);
      if ( !LODWORD(v14->max_length) )
        sub_1C32E84(v14);
      v16 = *commandParam;
      v17 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v14->m_Items[0], 0);
      v19 = BlankEarthQuestAfterAction__GetGimmickEntity(v17, (int32_t)v17, v18);
      if ( !v16 )
        sub_1C32E7C(v19);
      v16->fields.blankEarthGimmickEntity = v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&v16->fields.blankEarthGimmickEntity, (int32_t)v19, v20, v21);
      if ( LODWORD(v15->max_length) <= 1 )
        sub_1C32E84(v22);
      v23 = *commandParam;
      v24 = System_Int32__Parse(v15->m_Items[1], 0);
      if ( !v23 )
        sub_1C32E7C(v24);
LABEL_65:
      v23->fields.intValue = v24;
      return 1;
    }
    if ( (id & 0xFFFFFFFE) != 0x3F2 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( id == 702 )
  {
    v31 = command->fields.param;
    if ( !v31 )
      sub_1C32E7C(0);
    v32 = System_String__Split(v31, 0x2Cu, 0, 0);
    v33 = v32;
    if ( !v32 )
      sub_1C32E7C(0);
    if ( LODWORD(v32->max_length) <= 1 )
      sub_1C32E84(v32);
    v34 = *commandParam;
    v35 = System_Int32__Parse(v32->m_Items[1], 0);
    if ( !v34 )
      sub_1C32E7C(v35);
    v34->fields.intValue = v35;
    if ( !LODWORD(v33->max_length) )
      sub_1C32E84(v35);
    v36 = *commandParam;
    v37 = System_Int32__Parse(v33->m_Items[0], 0);
    if ( !v36 )
      sub_1C32E7C(v37);
    v36->fields.onFade = (int)v37 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v50 = *commandParam;
    v51 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v51, (int32_t)v51, v52);
    v56 = (int)GimmickEntity;
    if ( !v50 )
      sub_1C32E7C(GimmickEntity);
LABEL_70:
    v50->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C32BC4((CGThumbnailListItem_o *)&v50->fields.blankEarthGimmickEntity, v56, v54, v55);
  }
  return 1;
}


bool BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
  __int64 v10; // x23
  void *IsOtherObjHideCommand; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o **v14; // x19
  BlankEarthQuestAfterAction_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  bool IsBlankEarthActive; // w8
  __int64 v19; // x8
  __int64 v20; // x8
  int id; // w22
  BlankEarth_o *v22; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  bool IsNoWaitCommand; // w23
  int32_t v26; // w1
  int32_t intValue; // w21
  int32_t v28; // w1
  _DWORD *v29; // x21
  const MethodInfo *v30; // x2
  int32_t v31; // w1
  int v32; // w8
  bool v33; // w21
  int32_t v34; // w2
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v36; // x8
  bool v37; // w21
  System_Action_object__o *v38; // x19
  System_Action_object__o *v39; // x19
  System_Action_object__o *v40; // x19
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3461E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C32C20(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C32C20(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C32C20(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4C3461E = 1;
  }
  commandParam = 0;
  errorMessage = 0;
  v10 = sub_1C32E6C(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_106;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v14 = (System_Action_o **)(v10 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endAnimCallback, v12, v13);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v15, v16);
  LOBYTE(IsOtherObjHideCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v17) )
    {
LABEL_64:
      ActionExtensions__Call(*v14, 0);
LABEL_65:
      LOBYTE(IsOtherObjHideCommand) = 1;
      return (char)IsOtherObjHideCommand;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    IsOtherObjHideCommand = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsOtherObjHideCommand = TerminalSceneComponent_TypeInfo;
    }
    v19 = **((_QWORD **)IsOtherObjHideCommand + 23);
    if ( !v19 )
      goto LABEL_106;
    v20 = *(_QWORD *)(v19 + 256);
    if ( !v20 || !command )
      goto LABEL_106;
    id = command->fields.id;
    v22 = *(BlankEarth_o **)(v20 + 432);
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_20:
          if ( commandParam && v22 )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              v22,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v14,
              0);
            goto LABEL_91;
          }
LABEL_106:
          sub_1C32E7C(IsOtherObjHideCommand);
        }
        if ( (id & 0xFFFFFFFE) != 0x3F2 )
        {
          if ( id != 1012 )
          {
LABEL_91:
            LOBYTE(IsOtherObjHideCommand) = 0;
            return (char)IsOtherObjHideCommand;
          }
          goto LABEL_20;
        }
LABEL_68:
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v37 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = (void *)QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( commandParam && v22 )
        {
          BlankEarth__RevealOtherObject(
            v22,
            commandParam->fields.blankEarthGimmickEntity,
            ((unsigned __int8)IsOtherObjHideCommand & 1) == 0,
            v37,
            *v14,
            0);
          goto LABEL_91;
        }
        goto LABEL_106;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 0x3E8 )
          goto LABEL_91;
        goto LABEL_68;
      }
      if ( !commandParam )
        goto LABEL_106;
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        IsOtherObjHideCommand = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        IsOtherObjHideCommand = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)IsOtherObjHideCommand, intValue, 0);
        if ( IsOtherObjHideCommand )
        {
          v28 = *((_DWORD *)IsOtherObjHideCommand + 31);
          v29 = IsOtherObjHideCommand;
          if ( v28 >= 1 )
          {
            if ( !v22 )
              goto LABEL_106;
            IsOtherObjHideCommand = BlankEarth__GetPoint(v22, v28, 0, 0);
            if ( !IsOtherObjHideCommand )
              goto LABEL_106;
            BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
            v31 = v29[31];
LABEL_63:
            BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
              (BlankEarthQuestAfterAction_o *)IsOtherObjHideCommand,
              v31,
              v30);
            goto LABEL_64;
          }
        }
      }
      goto LABEL_66;
    }
    if ( id > 303 )
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        if ( !commandParam )
          goto LABEL_106;
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity || !v22 )
          goto LABEL_106;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(v22, blankEarthGimmickEntity->fields.id, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
          goto LABEL_91;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0);
        IsOtherObjHideCommand = (void *)QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          v26 = 3;
        else
          v26 = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            goto LABEL_106;
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            (unsigned __int8)IsOtherObjHideCommand & 1,
            0);
        }
        else
        {
          if ( !commandParam )
            goto LABEL_106;
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_106;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v26, *v14, 0);
            goto LABEL_65;
          }
          if ( !EarthGimmick )
            goto LABEL_106;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v26, 0, 0);
        }
        LOBYTE(IsOtherObjHideCommand) = 1;
        *isQuickUpdate = 1;
        return (char)IsOtherObjHideCommand;
      }
      if ( id != 500 )
        goto LABEL_91;
      if ( !commandParam )
        goto LABEL_106;
      blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
      if ( blankEarthSpotEntity )
      {
        if ( !v22 )
          goto LABEL_106;
        IsOtherObjHideCommand = BlankEarth__GetPoint(v22, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        if ( !commandParam )
          goto LABEL_106;
        v36 = commandParam->fields.blankEarthSpotEntity;
        if ( !v36 )
          goto LABEL_106;
        v31 = v36->fields.id;
        goto LABEL_63;
      }
LABEL_66:
      ActionExtensions__Call(*v14, 0);
      goto LABEL_91;
    }
    IsOtherObjHideCommand = 0;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v39 = (System_Action_object__o *)sub_1C32E6C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v39,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0);
          if ( !commandParam || !v22 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsSpot(
            v22,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v39,
            0,
            0);
          break;
        case 302:
          v40 = (System_Action_object__o *)sub_1C32E6C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v40,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0);
          if ( !commandParam || !v22 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsGimmick(
            v22,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v40,
            0);
          break;
        case 303:
          v38 = (System_Action_object__o *)sub_1C32E6C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0);
          if ( !commandParam || !v22 )
            goto LABEL_106;
          BlankEarth__RotateEarthByLatLong(
            v22,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
            0,
            0);
          break;
        default:
          return (char)IsOtherObjHideCommand;
      }
      goto LABEL_65;
    }
    if ( (unsigned int)(id - 100) > 0xE )
      return (char)IsOtherObjHideCommand;
    v32 = 1 << (id - 100);
    if ( (v32 & 0x1C07) != 0 )
    {
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      v33 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
      IsOtherObjHideCommand = (void *)QuestAfterAction__IsSpotHideCommand(id, 0);
      if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
      {
        v34 = 0;
      }
      else
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsOtherObjHideCommand = (void *)QuestAfterAction__IsSpotGrayCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          v34 = 2;
        else
          v34 = 1;
      }
      if ( !commandParam || !v22 )
        goto LABEL_106;
      BlankEarth__RevealEarthPoint(v22, commandParam->fields.blankEarthSpotEntity, v34, v33, *v14, 0);
      goto LABEL_65;
    }
    if ( (v32 & 0x4010) != 0 )
    {
      if ( commandParam && v22 )
      {
        BlankEarth__PlaySpotUniqueAnim(
          v22,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v14,
          0);
        goto LABEL_91;
      }
      goto LABEL_106;
    }
  }
  return (char)IsOtherObjHideCommand;
}


void BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}