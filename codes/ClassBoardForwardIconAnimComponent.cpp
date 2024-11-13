void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B196BF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20489/*"img_class_{0}"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17675/*"btn_class"*/, v9, v10);
    byte_4B196BF = 1;
  }
  v11 = StringLiteral_20489/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_20489/*"img_class_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spriteNameFormatIcon, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_17675/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17675/*"btn_class"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spriteNameButton, v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__PlayAnim(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0LL), (v4 = this->fields.anim) == 0LL)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_1BCAA3C(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_69899248(v4, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v25; // x0
  IClassBoardResourceCatalog_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int list; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B196BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog, *(_QWORD *)&baseId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    byte_4B196BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resourceCatalog);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  baseId,
                                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_object )
    return;
  if ( !resourceCatalog )
    goto LABEL_26;
  klass = resourceCatalog->klass;
  v18 = Master_object;
  v19 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(p_method + 8));
  if ( !Master_object )
    goto LABEL_26;
  sb = (AtlasManagerUnit_o *)Master_object[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v18->fields.list;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(spriteNameFormatIcon, v25, 0LL);
  if ( !sb )
    goto LABEL_26;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_object, 0LL);
  v26 = resourceCatalog->klass;
  v27 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v28 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_20;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_20:
    v29 = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v29)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v29 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[1].fields.seriazlier) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(Master_object, v16);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}