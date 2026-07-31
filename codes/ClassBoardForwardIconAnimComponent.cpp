void ClassBoardForwardIconAnimComponent___ctor(ClassBoardForwardIconAnimComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593C473 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21287/*"img_class_{0}"*/);
    sub_21FFC50(&StringLiteral_18197/*"btn_class"*/);
    byte_593C473 = 1;
  }
  v9 = StringLiteral_21287/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_21287/*"img_class_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spriteNameFormatIcon, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_18197/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_18197/*"btn_class"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spriteNameButton, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardForwardIconAnimComponent__PlayAnim(ClassBoardForwardIconAnimComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0), (v4 = this->fields.anim) == 0)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0)) == 0 )
  {
    sub_21FFECC(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0);
  UnityEngine_Animation__Play_82865240(v4, name, 0);
}


void ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  AtlasManagerUnit_o *seriazlier; // x22
  int32_t revision; // w9
  UISprite_o *classIconUi; // x21
  System_String_o *spriteNameFormatIcon; // x23
  Il2CppObject *v18; // x0
  IClassBoardResourceCatalog_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593C472 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_21FFC50(&IClassBoardResourceCatalog_TypeInfo);
    byte_593C472 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resourceCatalog);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  baseId,
                                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_object )
    return;
  if ( !resourceCatalog )
    goto LABEL_26;
  klass = resourceCatalog->klass;
  v10 = Master_object;
  v11 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_12;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v13 = sub_2237E2C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v13)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v13 + 8));
  if ( !Master_object )
    goto LABEL_26;
  seriazlier = (AtlasManagerUnit_o *)Master_object[2].fields.seriazlier;
  revision = v10->fields.revision;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  v23 = revision;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v23);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(spriteNameFormatIcon, v18, 0);
  if ( !seriazlier )
    goto LABEL_26;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_object, 0);
  v19 = resourceCatalog->klass;
  v20 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v21 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_20;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_20:
    v22 = sub_2237E2C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v22)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v22 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup) == 0 )
  {
LABEL_26:
    sub_21FFECC(Master_object, v8);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0);
}


void ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}