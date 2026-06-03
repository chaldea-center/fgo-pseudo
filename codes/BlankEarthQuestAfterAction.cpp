void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarth_o *BlankEarthQuestAfterAction__GetBlankEarth(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *TerminalListTop; // x19
  __int64 v3; // x1
  bool v4; // w8
  BlankEarth_o *result; // x0

  if ( (byte_4E7414D & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7414D = 1;
  }
  TerminalListTop = BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TerminalListTop, 0, 0);
  result = 0;
  if ( v4 )
  {
    if ( !TerminalListTop )
      sub_1D0F30C(0, v3);
    return TerminalListTop->fields.blankEarth;
  }
  return result;
}


BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4E74149 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4E74149 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_3535B7C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4E74148 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4E74148 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_3535B7C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
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

  if ( (byte_4E7414A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E7414A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


ScrTerminalListTop_o *BlankEarthQuestAfterAction__GetTerminalListTop(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  __int64 v4; // x1
  bool v5; // w8
  ScrTerminalListTop_o *result; // x0

  if ( (byte_4E7414B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7414B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0, 0);
  result = 0;
  if ( !v5 )
  {
    if ( !mInstance )
      sub_1D0F30C(0, v4);
    return mInstance->fields.mTerminalList;
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4E7414C & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7414C = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality(TerminalListTop, 0, 0);
  if ( !v3 )
    return 0;
  if ( !TerminalListTop )
    sub_1D0F30C(v3, v4);
  return ScrTerminalListTop__IsBlankEarthActive((ScrTerminalListTop_o *)TerminalListTop, 0);
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
  if ( (byte_4E7414E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7414E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
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
      sub_1D0F30C(v5, v6);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t id; // w8
  System_String_o *v21; // x0
  System_String_array *v22; // x0
  __int64 v23; // x1
  System_String_array *v24; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v25; // x22
  BlankEarthQuestAfterAction_o *v26; // x0
  const MethodInfo *v27; // x2
  BlankEarthGimmickEntity_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x0
  System_String_array *v40; // x0
  __int64 v41; // x1
  System_String_array *v42; // x21
  int v43; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v44; // x22
  bool v45; // w8
  System_String_o *v46; // x0
  System_String_array *v47; // x0
  __int64 v48; // x1
  System_String_array *v49; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v50; // x22
  __int64 v51; // x0
  __int64 v52; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x1
  bool result; // w0
  unsigned int v57; // w8
  int v58; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x20
  BlankEarthQuestAfterAction_o *v60; // x0
  const MethodInfo *v61; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  BlankEarthQuestAfterAction_o *v70; // x0
  const MethodInfo *v71; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v72; // x20
  BlankEarthQuestAfterAction_o *v73; // x0
  const MethodInfo *v74; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w1
  System_String_o *v83; // x0
  System_String_array *v84; // x0
  __int64 v85; // x1
  System_String_array *v86; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v87; // x22
  __int64 v88; // x0
  __int64 v89; // x1
  float v90; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v91; // x22
  __int64 v92; // x0
  float v93; // s0
  float v94; // s8
  __int64 v95; // x0
  float v96; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v97; // x20
  __int64 v98; // x0
  __int64 v99; // x1
  System_String_o *v100; // x0
  System_String_array *v101; // x0
  __int64 v102; // x1
  System_String_array *v103; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v104; // x22
  BlankEarthQuestAfterAction_o *v105; // x0
  const MethodInfo *v106; // x2
  BlankEarthSpotEntity_o *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x0
  __int64 v115; // x1
  BlankEarthQuestAfterAction_o *v116; // x0
  const MethodInfo *v117; // x2
  System_String_o *v118; // x0
  System_String_array *v119; // x0
  __int64 v120; // x1
  System_String_array *v121; // x21
  int v122; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v123; // x22
  float v124; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v125; // x22
  __int64 v126; // x0
  System_String_o *param; // x0
  System_String_array *v128; // x0
  __int64 v129; // x1
  System_String_array *v130; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v132; // x22
  float v133; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v134; // x22
  __int64 v135; // x0
  BlankEarthQuestAfterAction_o *v136; // x0
  const MethodInfo *v137; // x2
  BlankEarthQuestAfterAction_o *v138; // x0
  const MethodInfo *v139; // x2

  if ( (byte_4E74147 & 1) == 0 )
  {
    sub_1D0F0B4(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4E74147 = 1;
  }
  *errorMessage = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)errorMessage,
    0,
    (int32_t)commandParam,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11 = (Il2CppObject *)sub_1D0F300(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v11, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v11;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)commandParam, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_1D0F30C(v18, v19);
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
              sub_1D0F30C(0, v19);
            v128 = System_String__Split(param, 0x2Cu, 0, 0);
            v130 = v128;
            if ( !v128 )
              sub_1D0F30C(0, v129);
            max_length = v128->max_length;
            if ( max_length > 0 )
            {
              v132 = *commandParam;
              v133 = 0.5;
              if ( max_length >= 3 )
                v133 = System_Single__Parse(v128->m_Items[2], 0) * 0.001;
              if ( !v132 )
                sub_1D0F30C(v128, v129);
              v132->fields.time = v133;
              v134 = *commandParam;
              if ( SLODWORD(v130->max_length) >= 2 )
                v135 = System_Int32__Parse(v130->m_Items[1], 0);
              else
                v135 = 15;
              if ( !v134 )
                sub_1D0F30C(v135, v129);
              v134->fields.easeType = v135;
              if ( !LODWORD(v130->max_length) )
                sub_1D0F314(v135);
              v72 = *commandParam;
              v138 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v130->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v138, (int32_t)v138, v139);
              v82 = (int)GimmickEntity;
              if ( !v72 )
                sub_1D0F30C(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v83 = command->fields.param;
            if ( !v83 )
              sub_1D0F30C(0, v19);
            v84 = System_String__Split(v83, 0x2Cu, 0, 0);
            v86 = v84;
            if ( !v84 )
              sub_1D0F30C(0, v85);
            if ( SLODWORD(v84->max_length) > 3 )
            {
              v87 = *commandParam;
              v90 = System_Single__Parse(v84->m_Items[2], 0);
              if ( !v87 )
                sub_1D0F30C(v88, v89);
              v87->fields.time = v90 * 0.001;
              v91 = *commandParam;
              if ( !*commandParam )
                sub_1D0F30C(v88, v89);
              if ( v91->fields.time < 0.0 )
                v91->fields.time = 0.5;
              if ( !LODWORD(v86->max_length) )
                sub_1D0F314(v88);
              v93 = System_Single__Parse(v86->m_Items[0], 0);
              if ( LODWORD(v86->max_length) <= 1 )
                sub_1D0F314(v92);
              v94 = v93;
              v96 = System_Single__Parse(v86->m_Items[1], 0);
              v91->fields.latLongVector.fields.x = v94;
              v91->fields.latLongVector.fields.y = v96;
              if ( LODWORD(v86->max_length) <= 3 )
                sub_1D0F314(v95);
              v97 = *commandParam;
              v98 = System_Int32__Parse(v86->m_Items[3], 0);
              if ( !v97 )
                sub_1D0F30C(v98, v99);
              v97->fields.easeType = v98;
              return 1;
            }
          }
          return 0;
        }
        v118 = command->fields.param;
        if ( !v118 )
          sub_1D0F30C(0, v19);
        v119 = System_String__Split(v118, 0x2Cu, 0, 0);
        v121 = v119;
        if ( !v119 )
          sub_1D0F30C(0, v120);
        v122 = v119->max_length;
        if ( v122 <= 0 )
          return 0;
        v123 = *commandParam;
        v124 = 0.5;
        if ( v122 >= 3 )
          v124 = System_Single__Parse(v119->m_Items[2], 0) * 0.001;
        if ( !v123 )
          sub_1D0F30C(v119, v120);
        v123->fields.time = v124;
        v125 = *commandParam;
        if ( SLODWORD(v121->max_length) >= 2 )
          v126 = System_Int32__Parse(v121->m_Items[1], 0);
        else
          v126 = 15;
        if ( !v125 )
          sub_1D0F30C(v126, v120);
        v125->fields.easeType = v126;
        if ( !LODWORD(v121->max_length) )
          sub_1D0F314(v126);
        v59 = *commandParam;
        v136 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v121->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v136, (int32_t)v136, v137);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1D0F30C(SpotEntity, SpotEntity);
      }
      else
      {
        v57 = id - 100;
        if ( v57 > 0xE )
          return result;
        v58 = 1 << v57;
        if ( (v58 & 0x1C07) == 0 )
        {
          if ( (v58 & 0x4010) == 0 )
            return result;
          v100 = command->fields.param;
          if ( !v100 )
            sub_1D0F30C(0, v19);
          v101 = System_String__Split(v100, 0x2Cu, 0, 0);
          v103 = v101;
          if ( !v101 )
            sub_1D0F30C(0, v102);
          if ( !LODWORD(v101->max_length) )
            sub_1D0F314(v101);
          v104 = *commandParam;
          v105 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v101->m_Items[0], 0);
          v107 = BlankEarthQuestAfterAction__GetSpotEntity(v105, (int32_t)v105, v106);
          if ( !v104 )
            sub_1D0F30C(v107, v107);
          v104->fields.blankEarthSpotEntity = v107;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)&v104->fields, (int32_t)v107, v108, v109, v110, v111, v112, v113);
          if ( LODWORD(v103->max_length) <= 1 )
            sub_1D0F314(v114);
          v36 = *commandParam;
          v37 = System_Int32__Parse(v103->m_Items[1], 0);
          if ( !v36 )
            sub_1D0F30C(v37, v115);
          goto LABEL_65;
        }
        v59 = *commandParam;
        v60 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v60, (int32_t)v60, v61);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1D0F30C(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v39 = command->fields.param;
        if ( !v39 )
          sub_1D0F30C(0, v19);
        v40 = System_String__Split(v39, 0x2Cu, 0, 0);
        v42 = v40;
        if ( !v40 )
          sub_1D0F30C(0, v41);
        v43 = v40->max_length;
        if ( v43 > 0 )
        {
          v44 = *commandParam;
          if ( v43 == 1 )
          {
            v45 = 0;
          }
          else
          {
            v40 = (System_String_array *)System_Int32__Parse(v40->m_Items[1], 0);
            v45 = (int)v40 > 0;
          }
          if ( !v44 )
            sub_1D0F30C(v40, v41);
          v44->fields.noWait = v45;
          if ( !LODWORD(v42->max_length) )
            sub_1D0F314(v40);
          v72 = *commandParam;
          v116 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v42->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v116, (int32_t)v116, v117);
          v82 = (int)GimmickEntity;
          if ( !v72 )
            sub_1D0F30C(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v59 = *commandParam;
      v70 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v70, (int32_t)v70, v71);
      v69 = (int)SpotEntity;
      if ( !v59 )
        sub_1D0F30C(SpotEntity, SpotEntity);
    }
    v59->fields.blankEarthSpotEntity = SpotEntity;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v59->fields, v69, v63, v64, v65, v66, v67, v68);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v21 = command->fields.param;
      if ( !v21 )
        sub_1D0F30C(0, v19);
      v22 = System_String__Split(v21, 0x2Cu, 0, 0);
      v24 = v22;
      if ( !v22 )
        sub_1D0F30C(0, v23);
      if ( !LODWORD(v22->max_length) )
        sub_1D0F314(v22);
      v25 = *commandParam;
      v26 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v22->m_Items[0], 0);
      v28 = BlankEarthQuestAfterAction__GetGimmickEntity(v26, (int32_t)v26, v27);
      if ( !v25 )
        sub_1D0F30C(v28, v28);
      v25->fields.blankEarthGimmickEntity = v28;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v25->fields.blankEarthGimmickEntity,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      if ( LODWORD(v24->max_length) <= 1 )
        sub_1D0F314(v35);
      v36 = *commandParam;
      v37 = System_Int32__Parse(v24->m_Items[1], 0);
      if ( !v36 )
        sub_1D0F30C(v37, v38);
LABEL_65:
      v36->fields.intValue = v37;
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
    v46 = command->fields.param;
    if ( !v46 )
      sub_1D0F30C(0, v19);
    v47 = System_String__Split(v46, 0x2Cu, 0, 0);
    v49 = v47;
    if ( !v47 )
      sub_1D0F30C(0, v48);
    if ( LODWORD(v47->max_length) <= 1 )
      sub_1D0F314(v47);
    v50 = *commandParam;
    v51 = System_Int32__Parse(v47->m_Items[1], 0);
    if ( !v50 )
      sub_1D0F30C(v51, v52);
    v50->fields.intValue = v51;
    if ( !LODWORD(v49->max_length) )
      sub_1D0F314(v51);
    v53 = *commandParam;
    v54 = System_Int32__Parse(v49->m_Items[0], 0);
    if ( !v53 )
      sub_1D0F30C(v54, v55);
    v53->fields.onFade = (int)v54 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v72 = *commandParam;
    v73 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v73, (int32_t)v73, v74);
    v82 = (int)GimmickEntity;
    if ( !v72 )
      sub_1D0F30C(GimmickEntity, GimmickEntity);
LABEL_70:
    v72->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v72->fields.blankEarthGimmickEntity, v82, v76, v77, v78, v79, v80, v81);
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
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_o **v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x4
  bool v27; // w25
  UnityEngine_Object_o *v28; // x22
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  int id; // w24
  BlankEarthQuestAfterAction_CommandParam_o *v34; // x3
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x22
  const MethodInfo *v37; // x5
  int32_t intValue; // w23
  Il2CppObject *Instance; // x0
  __int64 v40; // x1
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v42; // x1
  WarEntity_o *v43; // x24
  TerminalSceneComponent_c *v44; // x0
  struct TerminalSceneComponent_o *v45; // x8
  struct ScrTerminalListTop_o *v46; // x8
  BlankEarthPoint_o *v47; // x0
  __int64 v48; // x1
  BlankEarthQuestAfterAction_o *v49; // x0
  const MethodInfo *v50; // x2
  int v51; // w8
  bool v52; // w23
  _BOOL8 IsSpotHideCommand; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  TerminalSceneComponent_c *v56; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  BlankEarthPoint_o *Point; // x0
  __int64 v61; // x1
  BlankEarthQuestAfterAction_o *v62; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x2
  struct BlankEarthSpotEntity_o *v65; // x8
  bool v66; // w23
  _BOOL8 IsOtherObjHideCommand; // x0
  __int64 v68; // x1
  System_Action_object__o *v69; // x21
  __int64 v70; // x0
  __int64 v71; // x1
  bool IsNoWaitCommand; // w25
  _BOOL8 IsGimmickDispCommand; // x0
  __int64 v74; // x1
  int32_t v75; // w8
  TerminalPramsManager_c *v76; // x8
  TerminalPramsManager_c *v77; // x0
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  System_Action_object__o *v80; // x21
  __int64 v81; // x0
  __int64 v82; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v83; // x3
  System_Action_object__o *v84; // x21
  __int64 v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // [xsp+0h] [xbp-50h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E74146 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1D0F0B4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1D0F0B4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__3__);
    sub_1D0F0B4(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4E74146 = 1;
  }
  v87 = 0;
  commandParam = 0;
  v10 = sub_1D0F300(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    sub_1D0F30C(v11, v12);
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *isQuickUpdate = 0;
  v27 = 0;
  if ( (((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._4_IsBlankEarthActive.methodPtr)(
          this,
          this->klass->vtable._4_IsBlankEarthActive.method)
      & 1) != 0 )
  {
    commandParam = 0;
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &v87, v26) )
      goto LABEL_9;
    v28 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._5_GetBlankEarth.methodPtr)(
                                    this,
                                    this->klass->vtable._5_GetBlankEarth.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Equality(v28, 0, 0);
    if ( v29 )
      goto LABEL_9;
    if ( !command )
      sub_1D0F30C(v29, v30);
    id = command->fields.id;
    if ( id <= 500 )
    {
      if ( id <= 303 )
      {
        v27 = 0;
        if ( id > 299 )
        {
          switch ( id )
          {
            case 300:
              v80 = (System_Action_object__o *)sub_1D0F300(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v80,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
                0);
              if ( !commandParam )
                sub_1D0F30C(v81, v82);
              if ( !v28 )
                sub_1D0F30C(v81, v82);
              BlankEarth__RotateEarthTowardsSpot(
                (BlankEarth_o *)v28,
                commandParam->fields.blankEarthSpotEntity,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v80,
                0,
                0);
              break;
            case 302:
              v83 = commandParam;
              if ( !commandParam )
                sub_1D0F30C(v29, v30);
              if ( !commandParam->fields.blankEarthGimmickEntity )
              {
                v27 = 1;
                *isQuickUpdate = 1;
                BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
                  (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
                  160,
                  command,
                  v83,
                  0,
                  v31);
                return v27;
              }
              v84 = (System_Action_object__o *)sub_1D0F300(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v84,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
                0);
              if ( !commandParam )
                sub_1D0F30C(v85, v86);
              if ( !v28 )
                sub_1D0F30C(v85, v86);
              BlankEarth__RotateEarthTowardsGimmick(
                (BlankEarth_o *)v28,
                commandParam->fields.blankEarthGimmickEntity,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v84,
                0);
              break;
            case 303:
              v69 = (System_Action_object__o *)sub_1D0F300(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v69,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__3__,
                0);
              if ( !commandParam )
                sub_1D0F30C(v70, v71);
              if ( !v28 )
                sub_1D0F30C(v70, v71);
              BlankEarth__RotateEarthByLatLong(
                (BlankEarth_o *)v28,
                commandParam->fields.latLongVector,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v69,
                0,
                0);
              break;
            default:
              return v27;
          }
        }
        else
        {
          if ( (unsigned int)(id - 100) > 0xE )
            return v27;
          v51 = 1 << (id - 100);
          if ( (v51 & 0x1C07) != 0 )
          {
            if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
            v52 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
            IsSpotHideCommand = QuestAfterAction__IsSpotHideCommand(id, 0);
            if ( IsSpotHideCommand )
            {
              v55 = 0;
            }
            else
            {
              if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
              IsSpotHideCommand = QuestAfterAction__IsSpotGrayCommand(id, 0);
              if ( IsSpotHideCommand )
                v55 = 2;
              else
                v55 = 1;
            }
            if ( !commandParam )
              sub_1D0F30C(IsSpotHideCommand, v54);
            if ( !v28 )
              sub_1D0F30C(IsSpotHideCommand, v54);
            BlankEarth__RevealEarthPoint(
              (BlankEarth_o *)v28,
              commandParam->fields.blankEarthSpotEntity,
              v55,
              v52,
              *v19,
              0);
          }
          else
          {
            if ( (v51 & 0x4010) == 0 )
              return v27;
            if ( !commandParam )
              sub_1D0F30C(v29, v30);
            if ( !v28 )
              sub_1D0F30C(v29, v30);
            BlankEarth__PlaySpotUniqueAnim(
              (BlankEarth_o *)v28,
              commandParam->fields.blankEarthSpotEntity,
              commandParam->fields.intValue,
              id == 114,
              *v19,
              0);
          }
        }
        return 1;
      }
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v34 = commandParam;
        if ( !commandParam )
          sub_1D0F30C(v29, v30);
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity )
        {
          v27 = 1;
          *isQuickUpdate = 1;
          BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
            (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
            70,
            command,
            v34,
            0,
            v31);
          return v27;
        }
        if ( !v28 )
          sub_1D0F30C(v29, v30);
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                 (BlankEarth_o *)v28,
                                                 blankEarthGimmickEntity->fields.id,
                                                 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
        {
          v27 = 1;
          *isQuickUpdate = 1;
          BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
            (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
            75,
            command,
            commandParam,
            0,
            v37);
          return v27;
        }
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(command, 0);
        IsGimmickDispCommand = QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( IsGimmickDispCommand )
          v75 = 3;
        else
          v75 = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            sub_1D0F30C(IsGimmickDispCommand, v74);
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            IsGimmickDispCommand,
            0);
        }
        else
        {
          if ( !commandParam )
            sub_1D0F30C(IsGimmickDispCommand, v74);
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              sub_1D0F30C(IsGimmickDispCommand, v74);
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v75, *v19, 0);
            return 1;
          }
          if ( !EarthGimmick )
            sub_1D0F30C(IsGimmickDispCommand, v74);
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v75, 0, 0);
        }
        v27 = 1;
        *isQuickUpdate = 1;
        return v27;
      }
      if ( id != 500 )
        return 0;
      if ( !commandParam )
        sub_1D0F30C(v29, v30);
      if ( commandParam->fields.blankEarthSpotEntity )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4E7125B )
        {
          sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
          byte_4E7125B = 1;
        }
        v56 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v56 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = v56->static_fields->mInstance;
        if ( !mInstance )
          sub_1D0F30C(v56, v30);
        mTerminalList = mInstance->fields.mTerminalList;
        if ( !mTerminalList )
          sub_1D0F30C(v56, v30);
        mTerminalList->fields.IsBlankEarthQAAToSpot = 1;
        if ( !commandParam )
          sub_1D0F30C(v56, v30);
        blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
        if ( !blankEarthSpotEntity )
          sub_1D0F30C(v56, v30);
        if ( !v28 )
          sub_1D0F30C(v56, v30);
        Point = BlankEarth__GetPoint((BlankEarth_o *)v28, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !Point )
          sub_1D0F30C(0, v61);
        BlankEarthPoint__OpenQuestList(Point, 0);
        if ( !commandParam )
          sub_1D0F30C(v62, v63);
        v65 = commandParam->fields.blankEarthSpotEntity;
        if ( !v65 )
          sub_1D0F30C(v62, v63);
        BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(v62, v65->fields.id, v64);
      }
    }
    else
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_16:
          if ( !commandParam )
            sub_1D0F30C(v29, v30);
          if ( !v28 )
            sub_1D0F30C(v29, v30);
          BlankEarth__PlayOtherObjectUniqueAnim(
            (BlankEarth_o *)v28,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.intValue,
            id == 1012,
            *v19,
            0);
          return 1;
        }
        if ( (id & 0xFFFFFFFE) != 0x3F2 )
        {
          if ( id == 1012 )
            goto LABEL_16;
          return 0;
        }
LABEL_75:
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v66 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( !commandParam )
          sub_1D0F30C(IsOtherObjHideCommand, v68);
        if ( !v28 )
          sub_1D0F30C(IsOtherObjHideCommand, v68);
        BlankEarth__RevealOtherObject(
          (BlankEarth_o *)v28,
          commandParam->fields.blankEarthGimmickEntity,
          !IsOtherObjHideCommand,
          v66,
          *v19,
          0);
        return 1;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 0x3E8 )
          return 0;
        goto LABEL_75;
      }
      if ( !commandParam )
        sub_1D0F30C(v29, v30);
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_1D0F30C(0, v40);
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, intValue, 0);
        v43 = WarEntityByWarID;
        if ( WarEntityByWarID && WarEntityByWarID->fields.parentBlankEarthSpotId >= 1 )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4E7125B )
          {
            sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
            byte_4E7125B = 1;
          }
          v44 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v44 = TerminalSceneComponent_TypeInfo;
          }
          v45 = v44->static_fields->mInstance;
          if ( !v45 )
            sub_1D0F30C(v44, v42);
          v46 = v45->fields.mTerminalList;
          if ( !v46 )
            sub_1D0F30C(v44, v42);
          v46->fields.IsBlankEarthQAAToSpot = 1;
          if ( !v28 )
            sub_1D0F30C(v44, v42);
          v47 = BlankEarth__GetPoint((BlankEarth_o *)v28, v43->fields.parentBlankEarthSpotId, 0, 0);
          if ( !v47 )
            sub_1D0F30C(0, v48);
          BlankEarthPoint__OpenQuestList(v47, 0);
          BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(v49, v43->fields.parentBlankEarthSpotId, v50);
        }
        else
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(intValue, 0);
          if ( !byte_4E74051 )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E74051 = 1;
          }
          v76 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v76 = TerminalPramsManager_TypeInfo;
          }
          if ( v76->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v76->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v76);
            if ( !byte_4E741A3 )
            {
              sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
              byte_4E741A3 = 1;
            }
            v77 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v77 = TerminalPramsManager_TypeInfo;
            }
            v77->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
          v78 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !v78 )
            sub_1D0F30C(0, v79);
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)v78, 34, 1, 0, 0, 0);
        }
      }
    }
LABEL_9:
    ActionExtensions__Call(*v19, 0);
    return 1;
  }
  return v27;
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


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__3(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        int32_t checkpoint,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o *commandParam,
        System_Exception_o *e,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x24
  System_Text_StringBuilder_o *v14; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x1
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  Il2CppObject *Instance; // x19
  int32_t id; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4E7414F & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1D0F0B4(&System_Text_StringBuilder_TypeInfo);
    sub_1D0F0B4(&StringLiteral_43/*"\n"*/);
    sub_1D0F0B4(&StringLiteral_3208/*"BlankEarthGimmickID: {0}\n"*/);
    sub_1D0F0B4(&StringLiteral_4445/*"Checkpoint: {0}\n"*/);
    sub_1D0F0B4(&StringLiteral_3212/*"BlankEarthSpotID: {0}\n"*/);
    sub_1D0F0B4(&StringLiteral_16270/*"] UpdateAnim execution failed.\n"*/);
    sub_1D0F0B4(&StringLiteral_10675/*"Param: "*/);
    sub_1D0F0B4(&StringLiteral_6357/*"Exception: {0}\n"*/);
    sub_1D0F0B4(&StringLiteral_4635/*"CommandParam is null\n"*/);
    sub_1D0F0B4(&StringLiteral_4622/*"Command is null\n"*/);
    sub_1D0F0B4(&StringLiteral_4634/*"CommandID: {0}\n"*/);
    sub_1D0F0B4(&StringLiteral_16009/*"["*/);
    byte_4E7414F = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this = (Il2CppObject *)System_Object__GetType(_4__this, 0);
  if ( !_4__this
    || (v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))_4__this->klass->vtable[8].methodPtr)(
                                   _4__this,
                                   _4__this->klass->vtable[8].method),
        v13 = System_String__Concat_65601036(
                (System_String_o *)StringLiteral_16009/*"["*/,
                v12,
                (System_String_o *)StringLiteral_16270/*"] UpdateAnim execution failed.\n"*/,
                0),
        v14 = (System_Text_StringBuilder_o *)sub_1D0F300(System_Text_StringBuilder_TypeInfo),
        System_Text_StringBuilder___ctor_65640556(v14, v13, 0),
        id = checkpoint,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id),
        _4__this = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_4445/*"Checkpoint: {0}\n"*/, v15, 0),
        !v14) )
  {
LABEL_20:
    sub_1D0F30C(_4__this, *(_QWORD *)&checkpoint);
  }
  System_Text_StringBuilder__Append_65646732(v14, (System_String_o *)_4__this, 0);
  if ( command )
  {
    id = command->fields.id;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    v17 = System_String__Format((System_String_o *)StringLiteral_4634/*"CommandID: {0}\n"*/, v16, 0);
    System_Text_StringBuilder__Append_65646732(v14, v17, 0);
    v18 = System_String__Concat_65601036(
            (System_String_o *)StringLiteral_10675/*"Param: "*/,
            command->fields.param,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_4622/*"Command is null\n"*/;
  }
  System_Text_StringBuilder__Append_65646732(v14, v18, 0);
  if ( !commandParam )
  {
    v24 = (System_String_o *)StringLiteral_4635/*"CommandParam is null\n"*/;
    goto LABEL_15;
  }
  blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
  if ( blankEarthGimmickEntity )
  {
    id = blankEarthGimmickEntity->fields.id;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    v21 = System_String__Format((System_String_o *)StringLiteral_3208/*"BlankEarthGimmickID: {0}\n"*/, v20, 0);
    System_Text_StringBuilder__Append_65646732(v14, v21, 0);
  }
  blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
  if ( blankEarthSpotEntity )
  {
    id = blankEarthSpotEntity->fields.id;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    v24 = System_String__Format((System_String_o *)StringLiteral_3212/*"BlankEarthSpotID: {0}\n"*/, v23, 0);
LABEL_15:
    System_Text_StringBuilder__Append_65646732(v14, v24, 0);
  }
  if ( e )
  {
    v25 = System_String__Format((System_String_o *)StringLiteral_6357/*"Exception: {0}\n"*/, (Il2CppObject *)e, 0);
    System_Text_StringBuilder__Append_65646732(v14, v25, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  _4__this = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v14->klass->vtable._3_ToString.methodPtr)(
                               v14,
                               v14->klass->vtable._3_ToString.method);
  if ( !Instance )
    goto LABEL_20;
  CrashReporter__SendReport_31969924((CrashReporter_o *)Instance, (System_String_o *)_4__this, 0, 0, 0);
}