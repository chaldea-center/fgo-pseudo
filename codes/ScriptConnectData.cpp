void ScriptConnectData___ctor(
        ScriptConnectData_o *this,
        System_String_o *connectPath,
        System_String_o *objectPath,
        System_Action_o *endCallback,
        System_Action_o *errorCallback,
        int32_t jumpLine,
        bool isView,
        const MethodInfo *method)
{
  ScriptConnectData_o *v12; // x23
  bool v13; // w24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v12 = this;
  v13 = isView;
  this->fields.ConnectPath = connectPath;
  sub_1C32BC4((CGThumbnailListItem_o *)this, (int32_t)connectPath, (int32_t)objectPath, (const MethodInfo *)endCallback);
  v12->fields.ObjectPath = objectPath;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields.ObjectPath, (int32_t)objectPath, v14, v15);
  v12->fields.EndCallback = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields.EndCallback, (int32_t)endCallback, v16, v17);
  v12->fields.ErrorCallback = errorCallback;
  v12 = (ScriptConnectData_o *)((char *)v12 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v12, (int32_t)errorCallback, v18, v19);
  LODWORD(v12->fields.ObjectPath) = jumpLine;
  BYTE4(v12->fields.ObjectPath) = v13;
  BYTE5(v12->fields.ObjectPath) = 0;
}