void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9E3F & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceBg_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19154/*"front"*/, v8, v9, v10);
    byte_42E9E3F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceBg_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19154/*"front"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19154/*"front"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_42E9E3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string_TypeInfo, v20, v21, v22);
    byte_42E9E3E = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadedChangeBgList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)Empty,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgSpShadowList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v45,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.historyBgState,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgInfoList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantConfConponent_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattlePerformanceBg_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42E9E3C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9E3C = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (BattleServantConfConponent_o *)&this->fields.onLoadBgFinished;
  v8 = (System_Int32_array **)System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( v8 && *v8 != (System_Int32_array *)System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo )
  {
    v15 = (BattlePerformanceBg_o *)sub_B5D990(v8);
    BattlePerformanceBg__ResetBgAnimation(v15, v16);
  }
  else
  {
    p_onLoadBgFinished->klass = (BattleServantConfConponent_c *)v8;
    sub_B5D560(p_onLoadBgFinished, v8, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__AddChangeBgInfo(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  BattlePerformanceBg_BgInfo_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x25
  __int64 v26; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_42E9E2F & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceBg_BgInfo_TypeInfo, No, tp, changeDirect);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21, v22, v23);
    byte_42E9E2F = 1;
  }
  v24 = (BattlePerformanceBg_BgInfo_o *)sub_B5D694(BattlePerformanceBg_BgInfo_TypeInfo);
  v28.fields.x = v17;
  v28.fields.y = v16;
  v28.fields.z = v15;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v24;
  BattlePerformanceBg_BgInfo___ctor(v24, No, tp, v28, v29, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B5D69C(0LL, v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgInfoList,
    v25,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ChangeBg(
        BattlePerformanceBg_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *curBg,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x6

  if ( !curBg )
    sub_B5D69C(this, 0LL);
  BattlePerformanceBg__changeBg(
    this,
    *((_DWORD *)&curBg->fields.isActive + 1),
    curBg->fields.id,
    pos,
    rot,
    changeDirect,
    parentCamera,
    callback,
    v8);
}


void __fastcall BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onLoadBgFinished = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int bgRoot; // w8
  int i; // w9
  __int64 v5; // x0

  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B5D69C(this, data);
  bgRoot = (int)this->fields.bgRoot;
  if ( bgRoot >= 1 )
  {
    for ( i = 0; i < bgRoot; ++i )
    {
      if ( i >= (unsigned int)bgRoot )
      {
        v5 = sub_B5D6C8(this);
        sub_B5D668(v5, 0LL);
      }
    }
  }
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceBg_o *v4; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v4 = this;
  if ( (byte_42E9E30 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      (_DWORD)method,
                                      v2,
                                      v3);
    byte_42E9E30 = 1;
  }
  bgInfoList = v4->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B5D69C(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 exists; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x20
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *v11; // x0
  BattlePerformanceBg_BgInfo_o *v12; // x19

  if ( (byte_42E9E31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v5, v6, v7);
    byte_42E9E31 = 1;
  }
  exists = BattlePerformanceBg__ExistsLoadBgInfo(this, method);
  if ( !exists )
    return 0LL;
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B5D69C(exists, v9);
  v11 = this->fields.bgInfoList;
  if ( !bgInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v12 = bgInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    0,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v12;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  BattleBgComponent_array *BattleBgComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_42E9E39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_BattleBgComponent___, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleBgComponent__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleBgComponent__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, v15, v16, v17);
    byte_42E9E39 = 1;
  }
  v18 = sub_B5D694(BattlePerformanceBg___c__DisplayClass67_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass67_0___ctor((BattlePerformanceBg___c__DisplayClass67_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = key;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)key, v21, v22, v23, v24, v25, v26);
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v27);
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBgComponent__bool___ctor__);
  return (BattleBgComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BattleBgComponents,
                                  (System_Func_T__bool__o *)v29,
                                  (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_BattleBgComponent___);
}


System_String_o *__fastcall BattlePerformanceBg__GetAssetPass(int32_t bgNo, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = bgNo;
  if ( (byte_42E9E23 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2858/*"Bg/"*/, (_DWORD)method, v2, v3);
    byte_42E9E23 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_2858/*"Bg/"*/, v4, 0LL);
}


UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetData_o *BgAssetData; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = shadowId;
  if ( (byte_42E9E37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, shadowId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22392/*"shadow_"*/, v5, v6, v7);
    byte_42E9E37 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_22392/*"shadow_"*/, v9, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      BgAssetData,
                                      v10,
                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
}


void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  BattleBgMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v43; // w21
  System_String_o *v44; // x19
  AssetLoader_LoadEndDataHandler_o *v45; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9E2C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, no, tp, finishCallback);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleBgMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v21, v22, v23);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__, v27, v28, v29);
    sub_B5D5C4(&BattlePerformanceBg___c__DisplayClass46_0_TypeInfo, v30, v31, v32);
    byte_42E9E2C = 1;
  }
  effectPath = 0LL;
  v33 = sub_B5D694(BattlePerformanceBg___c__DisplayClass46_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass46_0___ctor((BattlePerformanceBg___c__DisplayClass46_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_22;
  *(_QWORD *)(v33 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v33 + 16),
    (System_Int32_array **)finishCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_WarQuestSelectionMaster, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_15;
  v43 = BgSpecialShadowEffectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v43, 0LL) )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Master_WarQuestSelectionMaster,
         (WarBoardManager_TaskList_o *)effectPath,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_15:
    ActionExtensions__Call(*(System_Action_o **)(v33 + 16), 0LL);
    return;
  }
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)effectPath,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  v44 = effectPath;
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)v33,
    Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v44, v45, 1, 0LL);
}


void __fastcall BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattlePerformanceBg_BgInfo_o *BgInfo; // x0
  const MethodInfo *v5; // x6

  this->fields.IsLoading = 0;
  if ( BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
  {
    BgInfo = BattlePerformanceBg__FetchBgInfo(this, v3);
    if ( BgInfo )
      BattlePerformanceBg__changeBg(
        this,
        BgInfo->fields.bgNo,
        BgInfo->fields.tp,
        BgInfo->fields.pos,
        BgInfo->fields.rot,
        BgInfo->fields.changeDirect,
        BgInfo->fields.parentCamera,
        BgInfo->fields.callback,
        v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v17; // x1
  BattleActionCamera_o *v18; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v20; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E9E26 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9E26 = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_11;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_11:
    v8 = (UnityEngine_Object_o *)*p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Object_o *)*p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v9, 0LL);
      *p_bgobject = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgobject, 0LL, v10, v11, v12, v13, v14, v15);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v18 = this->fields.actionCamera;
      if ( !v18 )
        sub_B5D69C(0LL, v17);
      BattleActionCamera__stopCameraAnimation(v18, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v20 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      v22 = (UnityEngine_Object_o *)*p_frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v22, 0LL);
      *p_frontobject = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.frontobject, 0LL, v23, v24, v25, v26, v27, v28);
    }
    BattlePerformanceBg__ReleaseBg_27670044(this, this->fields.nowBgId, v21);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9E2A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    byte_42E9E2A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgSpShadowList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
LABEL_12:
    sub_B5D69C(bgSpShadowList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)bgSpShadowList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ReleaseBg_27670044(
        BattlePerformanceBg_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *AssetPass; // x0
  __int64 v16; // x1
  WarBoardManager_TaskList_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9E29 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, no, (_DWORD)method, v3);
    sub_B5D5C4(&BattlePerformanceBg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v12, v13, v14);
    byte_42E9E29 = 1;
  }
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattlePerformanceBg__GetAssetPass(
                                                                               no,
                                                                               *(const MethodInfo **)&no);
  if ( !this->fields.loadedChangeBgList )
    goto LABEL_14;
  v17 = (WarBoardManager_TaskList_o *)AssetPass;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
         (WarBoardManager_TaskList_o *)AssetPass,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList;
    if ( AssetPass )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        AssetPass,
        v17,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B5D69C(AssetPass, v16);
  }
LABEL_10:
  this->fields.BgAssetData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.BgAssetData, 0LL, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)v17, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9E28 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    byte_42E9E28 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedChangeBgList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_30657564(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
LABEL_16:
    sub_B5D69C(loadedChangeBgList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedChangeBgList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattlePerformanceBg__ResetBgAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  BattleBgComponent_array *v8; // x19
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E9E3D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9E3D = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_16:
    sub_B5D69C(BattleBgComponents, v6);
  v7 = *(_QWORD *)&BattleBgComponents->max_length;
  v8 = BattleBgComponents;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v11 = sub_B5D6C8(BattleBgComponents);
        sub_B5D668(v11, 0LL);
      }
      v10 = (UnityEngine_Object_o *)v8->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_16;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v10, 0LL);
      }
      LODWORD(v7) = v8->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__UpdateColor(
        BattlePerformanceBg_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__changeBg(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  System_Action_o **p_EndCallback; // x25
  const MethodInfo *v53; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v55; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Object_array *v63; // x20
  __int64 v64; // x0
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x1
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x1
  System_Collections_Hashtable_o *v129; // x0
  __int64 v130; // x0
  __int64 v131; // x0
  int v132; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Color_o black; // [xsp+10h] [xbp-90h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_42E9E32 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color_TypeInfo, No, tp, changeDirect);
    sub_B5D5C4(&object___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&float_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_18573/*"endChangeColor"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_15218/*"UpdateColor"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v46, v47, v48);
    sub_B5D5C4(&iTween_TypeInfo, v49, v50, v51);
    byte_42E9E32 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v135.fields.x = v18;
    v135.fields.y = v17;
    v135.fields.z = v16;
    v136.fields.x = x;
    v136.fields.y = y;
    v136.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v135, v136, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.EndCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&tp,
    (System_String_array **)changeDirect,
    (System_Boolean_array **)parentCamera,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      System_Action__Invoke(*p_EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v53);
    return;
  }
  this->fields.loadbgno = No;
  this->fields.loadbgType = tp;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v53);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = sub_B5D5DC(object___TypeInfo, 10LL);
  if ( !v55 )
    sub_B5D69C(0LL, v56);
  v63 = (System_Object_array *)v55;
  v64 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v64 = sub_B5D684(StringLiteral_19153/*"from"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v65 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( !v63->max_length )
    goto LABEL_61;
  v63->m_Items[0] = (Il2CppObject *)v65;
  sub_B5D560((BattleServantConfConponent_o *)v63->m_Items, v65, v57, v58, v59, v60, v61, v62);
  tmpcolor = this->fields.tmpcolor;
  v64 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v72 = (System_Int32_array **)v64;
  if ( v64 )
  {
    v64 = sub_B5D684(v64, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
  }
  if ( v63->max_length <= 1 )
    goto LABEL_61;
  v63->m_Items[1] = (Il2CppObject *)v72;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[1], v72, v66, v67, v68, v69, v70, v71);
  v64 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v64 = sub_B5D684(StringLiteral_23019/*"to"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v79 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( v63->max_length <= 2 )
    goto LABEL_61;
  v63->m_Items[2] = (Il2CppObject *)v79;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[2], v79, v73, v74, v75, v76, v77, v78);
  black = UnityEngine_Color__get_black(0LL);
  v64 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v86 = (System_Int32_array **)v64;
  if ( v64 )
  {
    v64 = sub_B5D684(v64, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
  }
  if ( v63->max_length <= 3 )
    goto LABEL_61;
  v63->m_Items[3] = (Il2CppObject *)v86;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[3], v86, v80, v81, v82, v83, v84, v85);
  v64 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v64 = sub_B5D684(StringLiteral_22982/*"time"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v93 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v93 = 0LL;
  }
  if ( v63->max_length <= 4 )
    goto LABEL_61;
  v63->m_Items[4] = (Il2CppObject *)v93;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[4], v93, v87, v88, v89, v90, v91, v92);
  v132 = 1056964608;
  v64 = j_il2cpp_value_box_0(float_TypeInfo, &v132);
  v100 = (System_Int32_array **)v64;
  if ( v64 )
  {
    v64 = sub_B5D684(v64, v63->obj.klass->_1.element_class);
    if ( !v64 )
    {
LABEL_62:
      v131 = sub_B5D6BC(v64);
      sub_B5D668(v131, 0LL);
    }
  }
  if ( v63->max_length <= 5 )
    goto LABEL_61;
  v63->m_Items[5] = (Il2CppObject *)v100;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[5], v100, v94, v95, v96, v97, v98, v99);
  v64 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v64 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v107 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v107 = 0LL;
  }
  if ( v63->max_length <= 6 )
    goto LABEL_61;
  v63->m_Items[6] = (Il2CppObject *)v107;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[6], v107, v101, v102, v103, v104, v105, v106);
  v64 = StringLiteral_15218/*"UpdateColor"*/;
  if ( StringLiteral_15218/*"UpdateColor"*/ )
  {
    v64 = sub_B5D684(StringLiteral_15218/*"UpdateColor"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v114 = (System_Int32_array **)StringLiteral_15218/*"UpdateColor"*/;
  }
  else
  {
    v114 = 0LL;
  }
  if ( v63->max_length <= 7 )
    goto LABEL_61;
  v63->m_Items[7] = (Il2CppObject *)v114;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[7], v114, v108, v109, v110, v111, v112, v113);
  v64 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v64 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v63->obj.klass->_1.element_class);
    if ( !v64 )
      goto LABEL_62;
    v121 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v121 = 0LL;
  }
  if ( v63->max_length <= 8 )
    goto LABEL_61;
  v63->m_Items[8] = (Il2CppObject *)v121;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[8], v121, v115, v116, v117, v118, v119, v120);
  v64 = StringLiteral_18573/*"endChangeColor"*/;
  if ( StringLiteral_18573/*"endChangeColor"*/ )
  {
    v64 = sub_B5D684(StringLiteral_18573/*"endChangeColor"*/, v63->obj.klass->_1.element_class);
    if ( v64 )
    {
      v128 = (System_Int32_array **)StringLiteral_18573/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_62;
  }
  v128 = 0LL;
LABEL_56:
  if ( v63->max_length <= 9 )
  {
LABEL_61:
    v130 = sub_B5D6C8(v64);
    sub_B5D668(v130, 0LL);
  }
  v63->m_Items[9] = (Il2CppObject *)v128;
  sub_B5D560((BattleServantConfConponent_o *)&v63->m_Items[9], v128, v122, v123, v124, v125, v126, v127);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v129 = iTween__Hash(v63, 0LL);
  iTween__ValueTo(gameObject, v129, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  UnityEngine_GameObject_o *BgObject; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  struct BattlePerformanceBg_BgState_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattlePerformanceBg_o *v59; // x0
  const MethodInfo *v60; // x3
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v62; // x21
  UnityEngine_Transform_o *transform; // x22
  int v64; // s0
  UnityEngine_Transform_o *v67; // x22
  int v68; // s0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  BattlePerformanceBg_o *v77; // x0
  const MethodInfo *v78; // x3
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v80; // x2
  UnityEngine_Transform_o *v81; // x21
  int v82; // s0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v95; // w23
  BattlePerformanceBg_ChangedBgArgs_o *v96; // x24
  const MethodInfo *v97; // x1
  System_Action_o *EndCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Object_array *v106; // x21
  __int64 v107; // x0
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x22
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x19
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x1
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x19
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x1
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x1
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x1
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x1
  System_Collections_Hashtable_o *v172; // x0
  __int64 v173; // x0
  __int64 v174; // x0
  int v175; // [xsp+Ch] [xbp-54h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o black; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E35 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Color_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&object___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&float_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18573/*"endChangeColor"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_15218/*"UpdateColor"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v43, v44, v45);
    sub_B5D5C4(&iTween_TypeInfo, v46, v47, v48);
    byte_42E9E35 = 1;
  }
  this->fields.BgAssetData = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.BgAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_78;
  v52 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v51);
  this->fields.nowBgState = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  BgObject = BattlePerformanceBg__getBgObject(v59, data, this->fields.loadbgType, v60);
  if ( !BgObject )
    goto LABEL_78;
  parentCamera = this->fields.parentCamera;
  v62 = BgObject;
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v62, 0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v62, 0LL);
    *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v64, 0LL);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v62, 0LL);
  if ( !BgObject )
    goto LABEL_78;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  v67 = UnityEngine_GameObject__get_transform(v62, 0LL);
  *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
  if ( !v67 )
    goto LABEL_78;
  UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
  this->fields.bgobject = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v62,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v77, data, this->fields.loadbgType, v78);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(FrontObject, 0LL, 0LL);
  if ( ((unsigned __int8)BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_78;
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
    v81 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_one(0LL);
    if ( !v81 )
      goto LABEL_78;
    UnityEngine_Transform__set_localScale(v81, *(UnityEngine_Vector3_o *)&v82, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.frontobject,
      (System_Int32_array **)FrontObject,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (UnityEngine_GameObject_o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v80);
  if ( !nowBgState )
    goto LABEL_78;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v95 = this->fields.parentCamera;
  v96 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B5D694(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v96, loadbgno, loadbgType, v95, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v96,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    this->fields.fade = 0;
    white = UnityEngine_Color__get_white(0LL);
    UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      System_Action__Invoke(EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v97);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = (UnityEngine_GameObject_o *)sub_B5D5DC(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_78:
    sub_B5D69C(BgObject, v50);
  v106 = (System_Object_array *)BgObject;
  v107 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v107 = sub_B5D684(StringLiteral_19153/*"from"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v108 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v108 = 0LL;
  }
  if ( !v106->max_length )
    goto LABEL_79;
  v106->m_Items[0] = (Il2CppObject *)v108;
  sub_B5D560((BattleServantConfConponent_o *)v106->m_Items, v108, v100, v101, v102, v103, v104, v105);
  black = UnityEngine_Color__get_black(0LL);
  v107 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v115 = (System_Int32_array **)v107;
  if ( v107 )
  {
    v107 = sub_B5D684(v107, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
  }
  if ( v106->max_length <= 1 )
    goto LABEL_79;
  v106->m_Items[1] = (Il2CppObject *)v115;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[1], v115, v109, v110, v111, v112, v113, v114);
  v107 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v107 = sub_B5D684(StringLiteral_23019/*"to"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v122 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v122 = 0LL;
  }
  if ( v106->max_length <= 2 )
    goto LABEL_79;
  v106->m_Items[2] = (Il2CppObject *)v122;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[2], v122, v116, v117, v118, v119, v120, v121);
  tmpcolor = this->fields.tmpcolor;
  v107 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v129 = (System_Int32_array **)v107;
  if ( v107 )
  {
    v107 = sub_B5D684(v107, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
  }
  if ( v106->max_length <= 3 )
    goto LABEL_79;
  v106->m_Items[3] = (Il2CppObject *)v129;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[3], v129, v123, v124, v125, v126, v127, v128);
  v107 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v107 = sub_B5D684(StringLiteral_22982/*"time"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v136 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v136 = 0LL;
  }
  if ( v106->max_length <= 4 )
    goto LABEL_79;
  v106->m_Items[4] = (Il2CppObject *)v136;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[4], v136, v130, v131, v132, v133, v134, v135);
  v175 = 1056964608;
  v107 = j_il2cpp_value_box_0(float_TypeInfo, &v175);
  v143 = (System_Int32_array **)v107;
  if ( v107 )
  {
    v107 = sub_B5D684(v107, v106->obj.klass->_1.element_class);
    if ( !v107 )
    {
LABEL_80:
      v174 = sub_B5D6BC(v107);
      sub_B5D668(v174, 0LL);
    }
  }
  if ( v106->max_length <= 5 )
    goto LABEL_79;
  v106->m_Items[5] = (Il2CppObject *)v143;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[5], v143, v137, v138, v139, v140, v141, v142);
  v107 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v107 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v150 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v150 = 0LL;
  }
  if ( v106->max_length <= 6 )
    goto LABEL_79;
  v106->m_Items[6] = (Il2CppObject *)v150;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[6], v150, v144, v145, v146, v147, v148, v149);
  v107 = StringLiteral_15218/*"UpdateColor"*/;
  if ( StringLiteral_15218/*"UpdateColor"*/ )
  {
    v107 = sub_B5D684(StringLiteral_15218/*"UpdateColor"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v157 = (System_Int32_array **)StringLiteral_15218/*"UpdateColor"*/;
  }
  else
  {
    v157 = 0LL;
  }
  if ( v106->max_length <= 7 )
    goto LABEL_79;
  v106->m_Items[7] = (Il2CppObject *)v157;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[7], v157, v151, v152, v153, v154, v155, v156);
  v107 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v107 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v106->obj.klass->_1.element_class);
    if ( !v107 )
      goto LABEL_80;
    v164 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v164 = 0LL;
  }
  if ( v106->max_length <= 8 )
    goto LABEL_79;
  v106->m_Items[8] = (Il2CppObject *)v164;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[8], v164, v158, v159, v160, v161, v162, v163);
  v107 = StringLiteral_18573/*"endChangeColor"*/;
  if ( StringLiteral_18573/*"endChangeColor"*/ )
  {
    v107 = sub_B5D684(StringLiteral_18573/*"endChangeColor"*/, v106->obj.klass->_1.element_class);
    if ( v107 )
    {
      v171 = (System_Int32_array **)StringLiteral_18573/*"endChangeColor"*/;
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v171 = 0LL;
LABEL_73:
  if ( v106->max_length <= 9 )
  {
LABEL_79:
    v173 = sub_B5D6C8(v107);
    sub_B5D668(v173, 0LL);
  }
  v106->m_Items[9] = (Il2CppObject *)v171;
  sub_B5D560((BattleServantConfConponent_o *)&v106->m_Items[9], v171, v165, v166, v167, v168, v169, v170);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v172 = iTween__Hash(v106, 0LL);
  iTween__ValueTo(gameObject, v172, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t fade; // w8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  int32_t loadbgno; // w20
  WarBoardManager_TaskList_o *AssetPass; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  System_Action_o *EndCallback; // x0
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E36 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceBg_endChangeBg__, v5, v6, v7);
    sub_B5D5C4(&BattlePerformanceBg_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v14, v15, v16);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19);
    byte_42E9E36 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    black = UnityEngine_Color__get_black(0LL);
    UnityEngine_RenderSettings__set_ambientLight(black, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v21);
    loadbgno = this->fields.loadbgno;
    if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    }
    AssetPass = (WarBoardManager_TaskList_o *)BattlePerformanceBg__GetAssetPass(loadbgno, v22);
    if ( this->fields.loadedChangeBgList )
    {
      v26 = (System_String_o *)AssetPass;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
             AssetPass,
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getAsset_30656516(v26, v27, 0LL) )
          return;
LABEL_21:
        v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v29, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__loadAssetStorage(v26, v29, 1, 0LL);
        return;
      }
      if ( !System_String__op_Inequality(v26, this->fields.initLoadedBgPath, 0LL) )
        goto LABEL_21;
      AssetPass = (WarBoardManager_TaskList_o *)this->fields.loadedChangeBgList;
      if ( AssetPass )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AssetPass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        goto LABEL_21;
      }
    }
    sub_B5D69C(AssetPass, v25);
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    System_Action__Invoke(EndCallback, 0LL);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void __fastcall BattlePerformanceBg__endloadBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x4

  if ( (byte_42E9E2D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, v6, v7, v8);
    sub_B5D5C4(&BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, v9, v10, v11);
    byte_42E9E2D = 1;
  }
  v12 = sub_B5D694(BattlePerformanceBg___c__DisplayClass47_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass47_0___ctor((BattlePerformanceBg___c__DisplayClass47_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)data, v21, v22, v23, v24, v25, v26);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v12,
    Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__,
    0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceBg_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Object_o *v29; // x22
  UnityEngine_Object_o *v30; // x22
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v33; // x2
  BattlePerformanceBg_o *v34; // x0
  const MethodInfo *v35; // x3
  _BOOL4 parentCamera; // w23
  UnityEngine_GameObject_o *v37; // x22
  UnityEngine_Transform_o *transform; // x23
  int v39; // s0
  UnityEngine_Transform_o *v42; // x23
  int v43; // s0
  int32_t newBgId; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattlePerformanceBg_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_Object_o *v55; // x20
  const MethodInfo *v56; // x2
  UnityEngine_Transform_o *v57; // x21
  int v58; // s0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v71; // w19
  BattlePerformanceBg_ChangedBgArgs_o *v72; // x23

  v5 = this;
  if ( (byte_42E9E2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v6, v7, v8);
    this = (BattlePerformanceBg_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E9E2E = 1;
  }
  v5->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_57;
  v12 = (System_Int32_array **)BattlePerformanceBg__saveHistoryBgState(v5, data->fields.name, method);
  v5->fields.nowBgState = (struct BattlePerformanceBg_BgState_o *)v12;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.nowBgState, v12, v13, v14, v15, v16, v17, v18);
  p_bgobject = (UnityEngine_Object_o **)&v5->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v5->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_12;
  frontobject = (UnityEngine_Object_o *)v5->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_12:
    v28 = *p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      v29 = *p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v29, 0LL);
    }
    v30 = (UnityEngine_Object_o *)v5->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      v31 = (UnityEngine_Object_o *)v5->fields.frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v31, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)v5->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      this = (BattlePerformanceBg_o *)v5->fields.actionCamera;
      if ( !this )
        goto LABEL_57;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0LL);
    }
    BattlePerformanceBg__ReleaseBg_27670044(v5, v5->fields.nowBgId, v33);
  }
  v5->fields.BgAssetData = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.BgAssetData,
    (System_Int32_array **)data,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBgObject(v34, data, v5->fields.loadbgType, v35);
  if ( !this )
    goto LABEL_57;
  parentCamera = v5->fields.parentCamera;
  v37 = (UnityEngine_GameObject_o *)this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v5->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v37, 0LL);
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v5->fields.pos, 0LL);
  v42 = UnityEngine_GameObject__get_transform(v37, 0LL);
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
  if ( !v42 )
    goto LABEL_57;
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
  newBgId = v5->fields.newBgId;
  v5->fields.bgobject = v37;
  v5->fields.nowBgId = newBgId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.bgobject,
    (System_Int32_array **)v37,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v55 = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v53, data, v5->fields.loadbgType, v54);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v55 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v5->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v5->fields.pos, 0LL);
            v57 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v55, 0LL);
            *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Vector3__get_one(0LL);
            if ( v57 )
            {
              UnityEngine_Transform__set_localScale(v57, *(UnityEngine_Vector3_o *)&v58, 0LL);
              v5->fields.frontobject = (struct UnityEngine_GameObject_o *)v55;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v5->fields.frontobject,
                (System_Int32_array **)v55,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66);
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_57:
    sub_B5D69C(this, data);
  }
LABEL_55:
  nowBgState = v5->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v5, 0, v56);
  if ( !nowBgState )
    goto LABEL_57;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v5->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v5->fields.onLoadBgFinished;
  loadbgno = v5->fields.loadbgno;
  loadbgType = v5->fields.loadbgType;
  v71 = v5->fields.parentCamera;
  v72 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B5D694(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v72, loadbgno, loadbgType, v71, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v72,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_42E9E27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___,
      includeInactive,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E9E27 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    v24 = this->fields.bgobject;
    if ( !v24 )
      goto LABEL_19;
    v24 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                        v24,
                                        includeInactive,
                                        (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v21 )
      goto LABEL_19;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      (System_Collections_Generic_IEnumerable_T__o *)v24,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)v24 & 1) == 0 )
  {
    if ( v21 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_19:
    sub_B5D69C(v24, v23);
  }
  v24 = this->fields.frontobject;
  if ( !v24 )
    goto LABEL_19;
  v24 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                      v24,
                                      includeInactive,
                                      (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v21 )
    goto LABEL_19;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *v18; // x1
  System_String_o *v19; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v23; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x19
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v25 = tp;
  if ( (byte_42E9E33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, tp, method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16901/*"bg"*/, v12, v13, v14);
    this = (BattlePerformanceBg_o *)sub_B5D5C4(&StringLiteral_16904/*"bg0"*/, v15, v16, v17);
    byte_42E9E33 = 1;
  }
  if ( tp < 1 )
  {
    if ( !data )
      sub_B5D69C(this, data);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16901/*"bg"*/,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16904/*"bg0"*/,
                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v24,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v18 = System_Int32__ToString((int32_t)&v25, 0LL);
    v19 = System_String__Concat_44577788((System_String_o *)StringLiteral_16901/*"bg"*/, v18, 0LL);
    if ( !data )
      sub_B5D69C(v19, v19);
    v20 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      data,
                                                      v19,
                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v20,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v23 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16901/*"bg"*/,
                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v23,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


System_String_array *__fastcall BattlePerformanceBg__getChangeBgList(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  return this->fields.debuglist;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  void *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  BattlePerformanceBg_c *v20; // x0
  bool v21; // w8
  UnityEngine_GameObject_o *result; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v23 = tp;
  if ( (byte_42E9E34 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, tp, method);
    sub_B5D5C4(&BattlePerformanceBg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E9E34 = 1;
  }
  v15 = BattlePerformanceBg_TypeInfo;
  if ( tp > 0 )
  {
    if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
      v15 = BattlePerformanceBg_TypeInfo;
    }
    v16 = (System_String_o *)**((_QWORD **)v15 + 23);
    v17 = System_Int32__ToString((int32_t)&v23, 0LL);
    v15 = System_String__Concat_44577788(v16, v17, 0LL);
    v18 = (System_String_o *)v15;
    if ( data )
      goto LABEL_8;
LABEL_28:
    sub_B5D69C(v15, v18);
  }
  if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v15 = BattlePerformanceBg_TypeInfo;
  }
  v18 = (System_String_o *)**((_QWORD **)v15 + 23);
  if ( !data )
    goto LABEL_28;
LABEL_8:
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v18,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_19;
  v20 = BattlePerformanceBg_TypeInfo;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v20 = BattlePerformanceBg_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v20->static_fields->Frontfile,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( v21 )
  {
LABEL_19:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v34; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattlePerformanceBg_BgState_o *v42; // x8
  System_Int32_array **bgName; // x1
  struct BattlePerformanceBg_BgState_o *v44; // x8
  unsigned int Count; // w0
  System_Int32_array **v46; // x0
  _DWORD **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattlePerformanceBg_BgState_o *v54; // x8
  unsigned int v55; // w25
  System_Int32_array **value; // x23
  System_Int32_array **key; // x24
  __int64 v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x1
  _DWORD *v75; // x23
  __int64 v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  _DWORD *v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v87; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E9E24 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&BattlePerformanceBg_SaveData_TypeInfo, v29, v30, v31);
    byte_42E9E24 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v32 = sub_B5D694(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v32, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( !nowBgState )
    goto LABEL_24;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)nowBgState->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                   compDictionary,
                                                                                                   (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  if ( (int)compDictionary < 1 )
  {
LABEL_24:
    if ( v32 )
      goto LABEL_25;
LABEL_26:
    sub_B5D69C(compDictionary, v34);
  }
  v42 = this->fields.nowBgState;
  if ( !v42 )
    goto LABEL_26;
  if ( !v32 )
    goto LABEL_26;
  bgName = (System_Int32_array **)v42->fields.bgName;
  *(_QWORD *)(v32 + 16) = bgName;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 16), bgName, v36, v37, v38, v39, v40, v41);
  v44 = this->fields.nowBgState;
  if ( !v44 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            compDictionary,
            (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  v46 = (System_Int32_array **)sub_B5D5DC(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count);
  *(_QWORD *)(v32 + 24) = v46;
  v47 = (_DWORD **)(v32 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 24), v46, v48, v49, v50, v51, v52, v53);
  v54 = this->fields.nowBgState;
  if ( !v54 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v54->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v87,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)compDictionary,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
  v88 = v87;
  v55 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v88,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
  {
    key = (System_Int32_array **)v88.fields.current.fields.key;
    value = (System_Int32_array **)v88.fields.current.fields.value;
    v58 = sub_B5D694(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v58, 0LL);
    if ( !v58 )
      sub_B5D69C(v59, v60);
    *(_QWORD *)(v58 + 16) = key;
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), key, v61, v62, v63, v64, v65, v66);
    *(_QWORD *)(v58 + 24) = value;
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 24), value, v67, v68, v69, v70, v71, v72);
    v75 = *v47;
    if ( !*v47 )
      sub_B5D69C(v73, v74);
    v76 = sub_B5D684(v58, *(_QWORD *)(*(_QWORD *)v75 + 64LL));
    if ( !v76 )
    {
      v84 = sub_B5D6BC(0LL);
      sub_B5D668(v84, 0LL);
    }
    if ( v55 >= v75[6] )
    {
      v85 = sub_B5D6C8(v76);
      sub_B5D668(v85, 0LL);
    }
    v83 = &v75[2 * v55];
    *((_QWORD *)v83 + 4) = v58;
    sub_B5D560((BattleServantConfConponent_o *)(v83 + 8), (System_Int32_array **)v58, v77, v78, v79, v80, v81, v82);
    ++v55;
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v88,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
LABEL_25:
  result = (BattlePerformanceBg_SaveData_o *)v32;
  *(_DWORD *)(v32 + 32) = this->fields.loadbgno;
  *(_DWORD *)(v32 + 36) = this->fields.loadbgType;
  return result;
}


bool __fastcall BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool __fastcall BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_String_o *AssetPass; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_42E9E2B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, no, tp, method);
    sub_B5D5C4(&Method_BattlePerformanceBg_endloadBg__, v7, v8, v9);
    sub_B5D5C4(&BattlePerformanceBg_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    byte_42E9E2B = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_11;
  this->fields.loadbgno = no;
  this->fields.loadbgType = tp;
  this->fields.newBgId = no;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = BattlePerformanceBg__GetAssetPass(no, *(const MethodInfo **)&no);
  this->fields.initLoadedBgPath = AssetPass;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)AssetPass,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPass, v23, 1, 0LL) )
LABEL_11:
    this->fields.IsLoading = 0;
}


void __fastcall BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v9; // x1
  int max_length; // w8
  BattleBgComponent_array *v11; // x21
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  BattleBgComponent_o *v14; // x22
  __int64 v15; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v11 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B5D6C8(BattleBgComponents);
        sub_B5D668(v15, 0LL);
      }
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBgComponent_o *)v13[4];
      if ( !v14 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey(
                                                        (BattleBgComponent_o *)v13[4],
                                                        key,
                                                        0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v14, animName, timeline, 0LL);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E9E3B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21786/*"playerfield"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2836/*"BattleIn"*/, v5, v6, v7);
    byte_42E9E3B = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21786/*"playerfield"*/,
    (System_String_o *)StringLiteral_2836/*"BattleIn"*/,
    0.0,
    v3);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E9E3A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2838/*"BattleOut"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21786/*"playerfield"*/, v5, v6, v7);
    byte_42E9E3A = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21786/*"playerfield"*/,
    (System_String_o *)StringLiteral_2838/*"BattleOut"*/,
    0.0,
    v3);
}


void __fastcall BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBgComponent_array *v6; // x19
  unsigned int v7; // w20
  __int64 v8; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v8 = sub_B5D6C8(BattleBgComponents);
        sub_B5D668(v8, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0LL);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(BattleBgComponents, v4);
  }
}


void __fastcall BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *__fastcall BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v26; // x8
  struct BattlePerformanceBg_BgState_o *v27; // x8
  struct BattlePerformanceBg_BgState_o *v28; // x2
  __int64 v29; // x21

  if ( (byte_42E9E38 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceBg_BgState_TypeInfo, (_DWORD)inName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E9E38 = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_12;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_12:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v22);
      if ( !nowBgState )
        goto LABEL_32;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v26 = this->fields.nowBgState;
      if ( !v26 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                        (System_Xml_XmlQualifiedName_o *)v26->fields.bgName,
                                                        (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v27 = this->fields.nowBgState;
        if ( !v27 )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                          (System_Xml_XmlQualifiedName_o *)v27->fields.bgName,
                                                          (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v28 = this->fields.nowBgState;
      if ( !v28 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
        (System_Xml_XmlQualifiedName_o *)v28->fields.bgName,
        (System_Xml_Schema_XmlSchemaObject_o *)v28,
        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
LABEL_32:
    sub_B5D69C(BattleBgComponents, inName);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          (System_Xml_XmlQualifiedName_o *)inName,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    v29 = sub_B5D694(BattlePerformanceBg_BgState_TypeInfo);
    BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v29, inName, 0LL);
    if ( v29 )
    {
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( BattleBgComponents )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          *(System_Xml_XmlQualifiedName_o **)(v29 + 16),
          (System_Xml_Schema_XmlSchemaObject_o *)v29,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
        return (BattlePerformanceBg_BgState_o *)v29;
      }
    }
    goto LABEL_32;
  }
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_32;
  return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)BattleBgComponents,
                                            (System_Type_o *)inName,
                                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
}


void __fastcall BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBgComponent_array *v7; // x19
  unsigned int v8; // w21
  bool v9; // w20
  __int64 v10; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = flg;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v10 = sub_B5D6C8(BattleBgComponents);
        sub_B5D668(v10, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v9, 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v10; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v21; // x21
  int max_length; // w8
  unsigned int v23; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v24; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  __int64 v26; // x0

  if ( (byte_42E9E25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__,
      (_DWORD)saveData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__,
      v6,
      v7,
      v8);
    byte_42E9E25 = 1;
  }
  if ( saveData )
  {
    this->fields.loadbgno = saveData->fields.bgNo;
    this->fields.loadbgType = saveData->fields.bgTp;
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v10 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, method);
        p_nowBgState = &this->fields.nowBgState;
        this->fields.nowBgState = v10;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.nowBgState,
          (System_Int32_array **)v10,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v21 = saveData->fields.compSaveDataList;
        if ( !v21 )
          goto LABEL_21;
        max_length = v21->max_length;
        if ( max_length >= 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= max_length )
            {
              v26 = sub_B5D6C8(compDictionary);
              sub_B5D668(v26, 0LL);
            }
            if ( !*p_nowBgState )
              break;
            v24 = v21->m_Items[v23];
            if ( !v24 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(compDictionary, (System_Xml_XmlQualifiedName_o *)v24->fields.bgCompName, (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                compDictionary,
                (System_Xml_XmlQualifiedName_o *)v24->fields.bgCompName,
                (System_Xml_Schema_XmlSchemaObject_o *)v24->fields.bgCompData,
                (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v21->max_length;
            if ( (int)++v23 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_B5D69C(compDictionary, v19);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v20);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg_BgInfo___ctor(
        BattlePerformanceBg_BgInfo_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  BattlePerformanceBg_BgInfo_o *v20; // x24

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  v20 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20->fields.callback = callback;
  v20 = (BattlePerformanceBg_BgInfo_o *)((char *)v20 + 56);
  LODWORD(v20[-1].fields.pos.fields.x) = No;
  LODWORD(v20[-1].fields.pos.fields.y) = tp;
  v20[-1].fields.pos.fields.z = v18;
  v20[-1].fields.rot.fields.x = v17;
  v20[-1].fields.rot.fields.y = v16;
  v20[-1].fields.rot.fields.z = x;
  *(float *)&v20[-1].fields.changeDirect = y;
  *(float *)(&v20[-1].fields.parentCamera + 3) = z;
  LOBYTE(v20[-1].fields.callback) = changeDirect;
  BYTE1(v20[-1].fields.callback) = parentCamera;
  sub_B5D560(v20);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattlePerformanceBg_BgState_Fields *p_fields; // x19
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20

  if ( (byte_42E6084 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__,
      (_DWORD)inName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v6, v7, v8);
    byte_42E6084 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  p_fields = &this->fields;
  sub_B5D560(p_fields);
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  p_fields->compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v10;
  sub_B5D560(&p_fields->compDictionary);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  signed int max_length; // w8
  unsigned int v11; // w24
  BattleBgComponent_o *v12; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v14; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v16; // x0

  v6 = this;
  if ( (byte_42E6086 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__,
      (_DWORD)list,
      (_DWORD)actionCamera,
      method);
    this = (BattlePerformanceBg_BgState_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v7,
                                              v8,
                                              v9);
    byte_42E6086 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v16 = sub_B5D6C8(this);
        sub_B5D668(v16, 0LL);
      }
      v12 = list->m_Items[v11];
      if ( !v12 )
        break;
      v12[1].klass = (BattleBgComponent_c *)actionCamera;
      sub_B5D560(&v12[1]);
      if ( LOBYTE(v12->fields.motionKey) )
      {
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                  compDictionary,
                                                  (System_Xml_XmlQualifiedName_o *)this,
                                                  (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
          if ( !v14 )
            break;
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v14,
                   (System_Type_o *)this,
                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v12, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_15:
    sub_B5D69C(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v11; // w24
  BattleBgComponent_o *v12; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v13; // x21
  System_String_o *name; // x23
  __int64 v15; // x0

  if ( (byte_42E6085 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__,
      (_DWORD)list,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v6, v7, v8);
    byte_42E6085 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    compDictionary,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v15 = sub_B5D6C8(compDictionary);
        sub_B5D668(v15, 0LL);
      }
      v12 = list->m_Items[v11];
      if ( !v12 )
        break;
      if ( LOBYTE(v12->fields.motionKey) )
      {
        v13 = this->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponent__getSaveData(v12, 0LL);
        if ( !v13 )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
          (System_Xml_XmlQualifiedName_o *)name,
          (System_Xml_Schema_XmlSchemaObject_o *)compDictionary,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_B5D69C(compDictionary, list);
  }
}


void __fastcall BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool __fastcall BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E6087 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    byte_42E6087 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = string_TypeInfo->static_fields->Empty;
  sub_B5D560(&this->fields);
  this->fields.compSaveDataList = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_B5D5DC(
                                                                                              BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                                              0LL);
  sub_B5D560(&this->fields.compSaveDataList);
}


void __fastcall BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___ctor(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___ctor(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass67_0___ctor(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass67_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}