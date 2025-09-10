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
  __int64 v5; // x1

  if ( (byte_4C23F08 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4C23F08 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4C23F07 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4C23F07 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntityByQuestId(
        BlankEarthQuestAfterAction_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthQuestAfterAction_o *SpotID; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C23F09 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C23F09 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  intptr_t v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20

  if ( (byte_4C23F0A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23F0A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(v4, v5);
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
  __int64 v6; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20
  ScrTerminalListTop_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = spotId;
  if ( (byte_4C23F0B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23F0B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
      v8 = (ScrTerminalListTop_o *)mInstance[10].fields.m_CachedPtr;
      v5 = System_Int32__ToString((int32_t)&v9, 0);
      if ( v8 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v8, 4, v5, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(v5, v6);
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
  __int64 v12; // x1
  int32_t id; // w8
  System_String_o *v14; // x0
  System_String_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_array *v18; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v19; // x22
  BlankEarthQuestAfterAction_o *v20; // x0
  const MethodInfo *v21; // x2
  BlankEarthGimmickEntity_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x0
  System_String_array *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_array *v35; // x21
  int v36; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v37; // x22
  bool v38; // w8
  System_String_o *v39; // x0
  System_String_array *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_array *v43; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  bool result; // w0
  unsigned int v52; // w8
  int v53; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v54; // x20
  BlankEarthQuestAfterAction_o *v55; // x0
  const MethodInfo *v56; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  BlankEarthQuestAfterAction_o *v61; // x0
  const MethodInfo *v62; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v63; // x20
  BlankEarthQuestAfterAction_o *v64; // x0
  const MethodInfo *v65; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  System_String_o *v70; // x0
  System_String_array *v71; // x0
  __int64 v72; // x1
  System_String_array *v73; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  float v78; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v79; // x22
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  float v83; // s0
  float v84; // s8
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  float v88; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v89; // x20
  __int64 v90; // x0
  __int64 v91; // x1
  System_String_o *v92; // x0
  System_String_array *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  System_String_array *v96; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v97; // x22
  BlankEarthQuestAfterAction_o *v98; // x0
  const MethodInfo *v99; // x2
  BlankEarthSpotEntity_o *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  BlankEarthQuestAfterAction_o *v107; // x0
  const MethodInfo *v108; // x2
  System_String_o *v109; // x0
  System_String_array *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  System_String_array *v113; // x21
  int v114; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v115; // x22
  float v116; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v117; // x22
  __int64 v118; // x0
  System_String_o *param; // x0
  System_String_array *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  System_String_array *v123; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v125; // x22
  float v126; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v127; // x22
  __int64 v128; // x0
  BlankEarthQuestAfterAction_o *v129; // x0
  const MethodInfo *v130; // x2
  BlankEarthQuestAfterAction_o *v131; // x0
  const MethodInfo *v132; // x2

  if ( (byte_4C23F06 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4C23F06 = 1;
  }
  *errorMessage = 0;
  sub_1C2D434((CGThumbnailListItem_o *)errorMessage, 0, (int32_t)commandParam, (const MethodInfo *)errorMessage);
  v8 = (Il2CppObject *)sub_1C2D6DC(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1C2D6EC(v11, v12);
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
              sub_1C2D6EC(0, v12);
            v120 = System_String__Split(param, 0x2Cu, 0, 0);
            v123 = v120;
            if ( !v120 )
              sub_1C2D6EC(0, v121);
            max_length = v120->max_length;
            if ( max_length > 0 )
            {
              v125 = *commandParam;
              v126 = 0.5;
              if ( max_length >= 3 )
                v126 = System_Single__Parse(v120->m_Items[2], 0) * 0.001;
              if ( !v125 )
                sub_1C2D6EC(v120, v121);
              v125->fields.time = v126;
              v127 = *commandParam;
              if ( SLODWORD(v123->max_length) >= 2 )
                v128 = System_Int32__Parse(v123->m_Items[1], 0);
              else
                v128 = 15;
              if ( !v127 )
                sub_1C2D6EC(v128, v121);
              v127->fields.easeType = v128;
              if ( !LODWORD(v123->max_length) )
                sub_1C2D6F4(v128, v121, v122);
              v63 = *commandParam;
              v131 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v123->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v131, (int32_t)v131, v132);
              v69 = (int)GimmickEntity;
              if ( !v63 )
                sub_1C2D6EC(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v70 = command->fields.param;
            if ( !v70 )
              sub_1C2D6EC(0, v12);
            v71 = System_String__Split(v70, 0x2Cu, 0, 0);
            v73 = v71;
            if ( !v71 )
              sub_1C2D6EC(0, v72);
            if ( SLODWORD(v71->max_length) > 3 )
            {
              v74 = *commandParam;
              v78 = System_Single__Parse(v71->m_Items[2], 0);
              if ( !v74 )
                sub_1C2D6EC(v75, v76);
              v74->fields.time = v78 * 0.001;
              v79 = *commandParam;
              if ( !*commandParam )
                sub_1C2D6EC(v75, v76);
              if ( v79->fields.time < 0.0 )
                v79->fields.time = 0.5;
              if ( !LODWORD(v73->max_length) )
                sub_1C2D6F4(v75, v76, v77);
              v83 = System_Single__Parse(v73->m_Items[0], 0);
              if ( LODWORD(v73->max_length) <= 1 )
                sub_1C2D6F4(v80, v81, v82);
              v84 = v83;
              v88 = System_Single__Parse(v73->m_Items[1], 0);
              v79->fields.latLongVector.fields.x = v84;
              v79->fields.latLongVector.fields.y = v88;
              if ( LODWORD(v73->max_length) <= 3 )
                sub_1C2D6F4(v85, v86, v87);
              v89 = *commandParam;
              v90 = System_Int32__Parse(v73->m_Items[3], 0);
              if ( !v89 )
                sub_1C2D6EC(v90, v91);
              v89->fields.easeType = v90;
              return 1;
            }
          }
          return 0;
        }
        v109 = command->fields.param;
        if ( !v109 )
          sub_1C2D6EC(0, v12);
        v110 = System_String__Split(v109, 0x2Cu, 0, 0);
        v113 = v110;
        if ( !v110 )
          sub_1C2D6EC(0, v111);
        v114 = v110->max_length;
        if ( v114 <= 0 )
          return 0;
        v115 = *commandParam;
        v116 = 0.5;
        if ( v114 >= 3 )
          v116 = System_Single__Parse(v110->m_Items[2], 0) * 0.001;
        if ( !v115 )
          sub_1C2D6EC(v110, v111);
        v115->fields.time = v116;
        v117 = *commandParam;
        if ( SLODWORD(v113->max_length) >= 2 )
          v118 = System_Int32__Parse(v113->m_Items[1], 0);
        else
          v118 = 15;
        if ( !v117 )
          sub_1C2D6EC(v118, v111);
        v117->fields.easeType = v118;
        if ( !LODWORD(v113->max_length) )
          sub_1C2D6F4(v118, v111, v112);
        v54 = *commandParam;
        v129 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v113->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v129, (int32_t)v129, v130);
        v60 = (int)SpotEntity;
        if ( !v54 )
          sub_1C2D6EC(SpotEntity, SpotEntity);
      }
      else
      {
        v52 = id - 100;
        if ( v52 > 0xE )
          return result;
        v53 = 1 << v52;
        if ( (v53 & 0x1C07) == 0 )
        {
          if ( (v53 & 0x4010) == 0 )
            return result;
          v92 = command->fields.param;
          if ( !v92 )
            sub_1C2D6EC(0, v12);
          v93 = System_String__Split(v92, 0x2Cu, 0, 0);
          v96 = v93;
          if ( !v93 )
            sub_1C2D6EC(0, v94);
          if ( !LODWORD(v93->max_length) )
            sub_1C2D6F4(v93, v94, v95);
          v97 = *commandParam;
          v98 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v93->m_Items[0], 0);
          v100 = BlankEarthQuestAfterAction__GetSpotEntity(v98, (int32_t)v98, v99);
          if ( !v97 )
            sub_1C2D6EC(v100, v100);
          v97->fields.blankEarthSpotEntity = v100;
          sub_1C2D434((CGThumbnailListItem_o *)&v97->fields, (int32_t)v100, v101, v102);
          if ( LODWORD(v96->max_length) <= 1 )
            sub_1C2D6F4(v103, v104, v105);
          v28 = *commandParam;
          v29 = System_Int32__Parse(v96->m_Items[1], 0);
          if ( !v28 )
            sub_1C2D6EC(v29, v106);
          goto LABEL_65;
        }
        v54 = *commandParam;
        v55 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v55, (int32_t)v55, v56);
        v60 = (int)SpotEntity;
        if ( !v54 )
          sub_1C2D6EC(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v31 = command->fields.param;
        if ( !v31 )
          sub_1C2D6EC(0, v12);
        v32 = System_String__Split(v31, 0x2Cu, 0, 0);
        v35 = v32;
        if ( !v32 )
          sub_1C2D6EC(0, v33);
        v36 = v32->max_length;
        if ( v36 > 0 )
        {
          v37 = *commandParam;
          if ( v36 == 1 )
          {
            v38 = 0;
          }
          else
          {
            v32 = (System_String_array *)System_Int32__Parse(v32->m_Items[1], 0);
            v38 = (int)v32 > 0;
          }
          if ( !v37 )
            sub_1C2D6EC(v32, v33);
          v37->fields.noWait = v38;
          if ( !LODWORD(v35->max_length) )
            sub_1C2D6F4(v32, v33, v34);
          v63 = *commandParam;
          v107 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v35->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v107, (int32_t)v107, v108);
          v69 = (int)GimmickEntity;
          if ( !v63 )
            sub_1C2D6EC(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v54 = *commandParam;
      v61 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v61, (int32_t)v61, v62);
      v60 = (int)SpotEntity;
      if ( !v54 )
        sub_1C2D6EC(SpotEntity, SpotEntity);
    }
    v54->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C2D434((CGThumbnailListItem_o *)&v54->fields, v60, v58, v59);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v14 = command->fields.param;
      if ( !v14 )
        sub_1C2D6EC(0, v12);
      v15 = System_String__Split(v14, 0x2Cu, 0, 0);
      v18 = v15;
      if ( !v15 )
        sub_1C2D6EC(0, v16);
      if ( !LODWORD(v15->max_length) )
        sub_1C2D6F4(v15, v16, v17);
      v19 = *commandParam;
      v20 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v15->m_Items[0], 0);
      v22 = BlankEarthQuestAfterAction__GetGimmickEntity(v20, (int32_t)v20, v21);
      if ( !v19 )
        sub_1C2D6EC(v22, v22);
      v19->fields.blankEarthGimmickEntity = v22;
      sub_1C2D434((CGThumbnailListItem_o *)&v19->fields.blankEarthGimmickEntity, (int32_t)v22, v23, v24);
      if ( LODWORD(v18->max_length) <= 1 )
        sub_1C2D6F4(v25, v26, v27);
      v28 = *commandParam;
      v29 = System_Int32__Parse(v18->m_Items[1], 0);
      if ( !v28 )
        sub_1C2D6EC(v29, v30);
LABEL_65:
      v28->fields.intValue = v29;
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
    v39 = command->fields.param;
    if ( !v39 )
      sub_1C2D6EC(0, v12);
    v40 = System_String__Split(v39, 0x2Cu, 0, 0);
    v43 = v40;
    if ( !v40 )
      sub_1C2D6EC(0, v41);
    if ( LODWORD(v40->max_length) <= 1 )
      sub_1C2D6F4(v40, v41, v42);
    v44 = *commandParam;
    v45 = System_Int32__Parse(v40->m_Items[1], 0);
    if ( !v44 )
      sub_1C2D6EC(v45, v46);
    v44->fields.intValue = v45;
    if ( !LODWORD(v43->max_length) )
      sub_1C2D6F4(v45, v46, v47);
    v48 = *commandParam;
    v49 = System_Int32__Parse(v43->m_Items[0], 0);
    if ( !v48 )
      sub_1C2D6EC(v49, v50);
    v48->fields.onFade = (int)v49 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v63 = *commandParam;
    v64 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v64, (int32_t)v64, v65);
    v69 = (int)GimmickEntity;
    if ( !v63 )
      sub_1C2D6EC(GimmickEntity, GimmickEntity);
LABEL_70:
    v63->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C2D434((CGThumbnailListItem_o *)&v63->fields.blankEarthGimmickEntity, v69, v67, v68);
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
  QuestTree_o *IsOtherObjHideCommand; // x0
  __int64 allQuestInfoList_high; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x19
  BlankEarthQuestAfterAction_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  bool IsBlankEarthActive; // w8
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  __int64 v21; // x8
  int id; // w22
  BlankEarth_o *v23; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  bool IsNoWaitCommand; // w23
  int32_t intValue; // w21
  QuestTree_o *v28; // x21
  const MethodInfo *v29; // x2
  int32_t v30; // w1
  int v31; // w8
  bool v32; // w21
  int32_t v33; // w2
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v35; // x8
  bool v36; // w21
  System_Action_object__o *v37; // x19
  System_Action_object__o *v38; // x19
  System_Action_object__o *v39; // x19
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C23F05 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C2D490(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C2D490(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C2D490(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4C23F05 = 1;
  }
  commandParam = 0;
  errorMessage = 0;
  v10 = sub_1C2D6DC(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_106;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v15 = (System_Action_o **)(v10 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v16, v17);
  LOBYTE(IsOtherObjHideCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v18) )
    {
LABEL_64:
      ActionExtensions__Call(*v15, 0);
LABEL_65:
      LOBYTE(IsOtherObjHideCommand) = 1;
      return (char)IsOtherObjHideCommand;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = IsOtherObjHideCommand[1].fields.questReleaseEntList->klass;
    if ( !klass )
      goto LABEL_106;
    v21 = *(_QWORD *)&klass->_2.element_size;
    if ( !v21 || !command )
      goto LABEL_106;
    id = command->fields.id;
    v23 = *(BlankEarth_o **)(v21 + 432);
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_20:
          if ( commandParam && v23 )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              v23,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v15,
              0);
            goto LABEL_91;
          }
LABEL_106:
          sub_1C2D6EC(IsOtherObjHideCommand, allQuestInfoList_high);
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
        v36 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( commandParam && v23 )
        {
          BlankEarth__RevealOtherObject(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            ((unsigned __int8)IsOtherObjHideCommand & 1) == 0,
            v36,
            *v15,
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
        IsOtherObjHideCommand = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        IsOtherObjHideCommand = (QuestTree_o *)QuestTree__mfGetWarEntityByWarID(IsOtherObjHideCommand, intValue, 0);
        if ( IsOtherObjHideCommand )
        {
          allQuestInfoList_high = HIDWORD(IsOtherObjHideCommand[1].fields.allQuestInfoList);
          v28 = IsOtherObjHideCommand;
          if ( (int)allQuestInfoList_high >= 1 )
          {
            if ( !v23 )
              goto LABEL_106;
            IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v23, allQuestInfoList_high, 0, 0);
            if ( !IsOtherObjHideCommand )
              goto LABEL_106;
            BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
            v30 = HIDWORD(v28[1].fields.allQuestInfoList);
LABEL_63:
            BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
              (BlankEarthQuestAfterAction_o *)IsOtherObjHideCommand,
              v30,
              v29);
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
        if ( !blankEarthGimmickEntity || !v23 )
          goto LABEL_106;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(v23, blankEarthGimmickEntity->fields.id, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
          goto LABEL_91;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          allQuestInfoList_high = 3;
        else
          allQuestInfoList_high = 2;
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
            BlankEarthGimmickComponent__SetState(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              allQuestInfoList_high,
              *v15,
              0);
            goto LABEL_65;
          }
          if ( !EarthGimmick )
            goto LABEL_106;
          BlankEarthGimmickComponent__SetState(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            allQuestInfoList_high,
            0,
            0);
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
        if ( !v23 )
          goto LABEL_106;
        IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v23, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        if ( !commandParam )
          goto LABEL_106;
        v35 = commandParam->fields.blankEarthSpotEntity;
        if ( !v35 )
          goto LABEL_106;
        v30 = v35->fields.id;
        goto LABEL_63;
      }
LABEL_66:
      ActionExtensions__Call(*v15, 0);
      goto LABEL_91;
    }
    IsOtherObjHideCommand = 0;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v38 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsSpot(
            v23,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
            0,
            0);
          break;
        case 302:
          v39 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v39,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsGimmick(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v39,
            0);
          break;
        case 303:
          v37 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v37,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthByLatLong(
            v23,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
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
    v31 = 1 << (id - 100);
    if ( (v31 & 0x1C07) != 0 )
    {
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      v32 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
      IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotHideCommand(id, 0);
      if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
      {
        v33 = 0;
      }
      else
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotGrayCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          v33 = 2;
        else
          v33 = 1;
      }
      if ( !commandParam || !v23 )
        goto LABEL_106;
      BlankEarth__RevealEarthPoint(v23, commandParam->fields.blankEarthSpotEntity, v33, v32, *v15, 0);
      goto LABEL_65;
    }
    if ( (v31 & 0x4010) != 0 )
    {
      if ( commandParam && v23 )
      {
        BlankEarth__PlaySpotUniqueAnim(
          v23,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v15,
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